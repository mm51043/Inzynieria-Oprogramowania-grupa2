#include "prescriptionwindow.h"
#include "ui_prescriptionwindow.h"
#include "prescriptionitem.h"
#include <QVBoxLayout>
#include "../baza.h"

PrescWindow::PrescWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PrescWindow)
{
    ui->setupUi(this);
    llayout = lListLayout();
    auto conn = baza();
    if (!conn) {
        qDebug() << "baza nie chodzi";
    } else {
        leki = fetchLeki(conn.get());
    }
    rList();
    connect(ui->clearButton, &QPushButton::clicked, this, [this]() {
        lClear();
    });
    connect(ui->okButton, &QPushButton::clicked, this, [this]() {
        submit();
    });
}
PrescWindow::~PrescWindow()
{
    delete ui;
}
void PrescWindow::setPatientId(int id) {
    patientId = id;
}
QVBoxLayout* PrescWindow::lListLayout() {
    QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->leftList->layout());
    if (!layout) {
        layout = new QVBoxLayout(ui->leftList);
        ui->leftList->setLayout(layout);
    }
    return layout;
}
void PrescWindow::rList() {
    QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->rightList->layout());
    if (!layout) {
        layout = new QVBoxLayout(ui->rightList);
        ui->rightList->setLayout(layout);
    }

    QLayoutItem *child;
    while ((child = layout->takeAt(0)) != nullptr) {
        if (child->widget()) {
            child->widget()->deleteLater();
        }
        delete child;
    }

    layout->setContentsMargins(0, 5, 0, 5);
    layout->setSpacing(5);
    for (const auto& l : leki) {
        auto* li = new PrescriptionItem();
        li->setData(QString::fromStdString(l.nazwa), QString::number(l.ilosc));
        connect(li->listAdd(), &QPushButton::clicked, this, [this, li, l]() {
                lAdd(l.id);
                lUpdate();
        });
        layout->addWidget(li);
    }
    layout->addStretch();
}
void PrescWindow::lClear() {
    leftLek.clear();
    lUpdate();
}
void PrescWindow::lAdd(int id) {
    auto it = std::find_if(leftLek.begin(), leftLek.end(), [id](const std::pair<int, int>& p) {
    return p.first == id;
});
    if (it == leftLek.end()) {
        leftLek.emplace_back(id, 1);
    } else {
        it->second++;
    }
}
void PrescWindow::lRemove(int id) {
    auto it = std::find_if(leftLek.begin(), leftLek.end(), [id](std::pair<int, int>& p) {
        return p.first == id;
    });
    if (it != leftLek.end()) {
        if (it->second > 1) {
            it->second -= 1;
        } else {
            leftLek.erase(it);
        }
    }
    lUpdate();
}
void PrescWindow::lUpdate() {
    QLayoutItem *child;
    while ((child = llayout->takeAt(0)) != nullptr) {
        QWidget* w = child->widget();
        if (w)
            w->deleteLater();
        delete child;
    }
    for (const auto& lid : leftLek) {
        auto it = std::find_if(leki.begin(), leki.end(), [lid](const Lek& l) {
            return l.id == lid.first;
        });
        auto* li = new PrescriptionItem();
        connect(li->listAdd(), &QPushButton::clicked, this, [this, lid]() {
            lRemove(lid.first);
        });
        li->setData(QString::fromStdString(it->nazwa),QString::number(lid.second));
        llayout->addWidget(li);
    }
    llayout->addStretch();
}
void PrescWindow::submit() {
    if (leftLek.empty()) {
        return;
    }
    auto conn = baza();
    if (!conn) {
        qDebug() << "baza nie chodzi";
    }else {
        std::unique_ptr<sql::PreparedStatement> stmt(conn->prepareStatement("INSERT INTO recepta(PracownikID, PacjentID, zrealizowano) VALUES (?, ?, ?)"));
        stmt->setInt(1, sessionUserId);
        stmt->setInt(2, patientId);
        stmt->setInt(3, 0);
        stmt->executeUpdate();
        std::unique_ptr<sql::Statement> idStmt(conn->createStatement());
        std::unique_ptr<sql::ResultSet> res(idStmt->executeQuery("SELECT LAST_INSERT_ID()"));
        if (res->next()) {
            for (const auto& lid : leftLek) {
                auto it = std::find_if(leki.begin(), leki.end(), [lid](const Lek& l) {
                    return l.id == lid.first;
                });
                std::unique_ptr<sql::PreparedStatement> nStmt(conn->prepareStatement("INSERT INTO receptalek(ReceptaID, LekID, ilosc) VALUES (?, ?, ?)"));
                nStmt->setInt(1, res->getInt(1));
                nStmt->setInt(2, lid.first);
                nStmt->setInt(3, lid.second);
                nStmt->executeUpdate();
            }
        }
    }
    ui->confirmationLabel->setText("Recepta dodana poprawnie");
    lClear();
}
