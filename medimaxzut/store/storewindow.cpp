#include "storewindow.h"
#include "ui_storewindow.h"
#include "storeitem.h"
#include <QVBoxLayout>
#include "../baza.h"
#include "../mainWindow/mainwindow.h"

StoreWindow::StoreWindow(MainWindow* mw, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Store)
    , mainWindow(mw)
{
    ui->setupUi(this);
    llayout = lListLayout();
    leki = fetchLeki();
    rList();

    connect(ui->clearButton, &QPushButton::clicked, this, &StoreWindow::lClear);
    connect(ui->okButton, &QPushButton::clicked, this, &StoreWindow::submitOrder);
}

StoreWindow::~StoreWindow()
{
    delete ui;
}

QVBoxLayout* StoreWindow::lListLayout() {
    QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->leftList->layout());
    if (!layout) {
        layout = new QVBoxLayout(ui->leftList);
        ui->leftList->setLayout(layout);
    }
    return layout;
}

bool StoreWindow::canAddMedicine(int id) const {
    auto it = std::find_if(leki.begin(), leki.end(), [id](const Lek& l) {
        return l.id == id;
    });

    if (it != leki.end()) {
        int inCart = 0;
        auto cartIt = std::find_if(leftLek.begin(), leftLek.end(), [id](const std::pair<int, int>& p) {
            return p.first == id;
        });

        if (cartIt != leftLek.end()) {
            inCart = cartIt->second;
        }

        return inCart < it->ilosc;
    }
    return false;
}

void StoreWindow::rList() {
    auto layout = qobject_cast<QVBoxLayout*>(ui->rightList->layout());
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

    leki = fetchLeki();
    layout->setContentsMargins(0, 5, 0, 5);
    layout->setSpacing(5);

    for (const auto& l : leki) {
        auto* li = new StoreItem();
        li->setData(QString::fromStdString(l.nazwa), QString::number(l.ilosc));
        int inCart = 0;
        auto cartIt = std::find_if(leftLek.begin(), leftLek.end(), [l](const std::pair<int, int>& p) {
            return p.first == l.id;
        });
        if (cartIt != leftLek.end()) {
            inCart = cartIt->second;
        }
        if (inCart > 0) {
            li->listAdd()->setText(QString("Dodano (%1)").arg(inCart));
        } else {
            li->listAdd()->setText("Dodaj");
        }

        connect(li->listAdd(), &QPushButton::clicked, this, [this, l]() {
            lAdd(l.id);
            rList();
        });

        layout->addWidget(li);
    }
    layout->addStretch();
}

void StoreWindow::lClear() {
    leftLek.clear();
    lUpdate();
}

bool StoreWindow::lAdd(int id) {
    auto it = std::find_if(leftLek.begin(), leftLek.end(), [id](const std::pair<int, int>& p) {
        return p.first == id;
    });

    // Znajdź lek w magazynie
    auto lekIt = std::find_if(leki.begin(), leki.end(), [id](const Lek& l) {
        return l.id == id;
    });

    if (lekIt == leki.end()) return false;

    int inCart = (it == leftLek.end()) ? 0 : it->second;

    if (inCart >= lekIt->ilosc) {
        QMessageBox::warning(this, "Błąd", "Przekroczono dostępną ilość leku!");
        return false;
    }

    if (it == leftLek.end()) {
        leftLek.emplace_back(id, 1);
    } else {
        it->second++;
    }

    lUpdate();
    return true;
}

void StoreWindow::lRemove(int id) {
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

void StoreWindow::lUpdate() {
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

        auto* li = new StoreItem();
        connect(li->listAdd(), &QPushButton::clicked, this, [this, lid]() {
            lRemove(lid.first);
            rList();
        });

        li->setData(QString::fromStdString(it->nazwa), QString::number(lid.second));
        llayout->addWidget(li);
    }
    llayout->addStretch();

     rList();
}

void StoreWindow::submitOrder() {
    auto conn = baza();
    if (!conn) {
        QMessageBox::critical(this, "Błąd", "Problem z połączeniem do bazy danych");
        return;
    }

    try {
        conn->setAutoCommit(false);


        for (const auto& item : leftLek) {
            std::unique_ptr<sql::PreparedStatement> stmt(
                conn->prepareStatement("UPDATE lek SET iloscMagazyn = iloscMagazyn - ? WHERE LekID = ?")
            );
            stmt->setInt(1, item.second);
            stmt->setInt(2, item.first);
            stmt->executeUpdate();
        }

        conn->commit();
        QMessageBox::information(this, "Sukces", "Zamówienie zostało zatwierdzone!");
        lClear();
        leki = fetchLeki();
        rList();
    } catch (const sql::SQLException& e) {
        conn->rollback();
        QMessageBox::critical(this, "Błąd", QString("Wystąpił błąd podczas aktualizacji bazy: %1").arg(e.what()));
    }
}