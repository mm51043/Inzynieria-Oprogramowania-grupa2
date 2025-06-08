#include "storewindow.h"
#include "ui_storewindow.h"
#include "storeitem.h"
#include <QVBoxLayout>
#include "../baza.h"

StoreWindow::StoreWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Store)
{
    ui->setupUi(this);

    ui->rightList->setStyleSheet("");
    ui->rightArea->setStyleSheet("");

    if (!ui->rightList->layout()) {
        ui->rightList->setLayout(new QVBoxLayout(ui->rightList));
    }
    ui->rightArea->setWidgetResizable(true);
    ui->rightArea->setWidget(ui->rightList);

    llayout = lListLayout();
    auto conn = baza();
    if (!conn) {
        qDebug() << "baza nie chodzi";
    } else {
        leki = fetchLeki(conn.get());
        qDebug() << "Pobrano leków:" << leki.size();
        for (const auto& lek : leki) {
            qDebug() << "Lek:" << QString::fromStdString(lek.nazwa) << "Ilość:" << lek.ilosc;
        }
    }
    rList();
    connect(ui->clearButton, &QPushButton::clicked, this, [this]() {
        lClear();
    });
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
void StoreWindow::rList() {
    QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->rightList->layout());
    if (!layout) {
        layout = new QVBoxLayout(ui->rightList);
        ui->rightList->setLayout(layout);
        layout->setContentsMargins(0, 5, 0, 5);
        layout->setSpacing(5);
    }

    QLayoutItem *child;
    while ((child = layout->takeAt(0)) != nullptr) {
        if (child->widget()) {
            child->widget()->deleteLater();
        }
        delete child;
    }

    qDebug() << "Aktualizacja listy leków...";

    for (const auto& l : leki) {
        qDebug() << "Tworzenie StoreItem dla:" << QString::fromStdString(l.nazwa);
        auto* li = new StoreItem();

        if (l.ilosc <= 0) {
            li->setData(QString::fromStdString(l.nazwa), "Brak środków");
            li->listAdd()->setEnabled(false);
            li->listAdd()->setStyleSheet(
                "background-color: gray; border-radius: 10px; color: white;"
            );
        } else {
            li->setData(QString::fromStdString(l.nazwa), QString::number(l.ilosc));
            li->listAdd()->setEnabled(true);
            li->listAdd()->setStyleSheet(
                "background-color: rgb(0, 41, 94); border-radius: 10px; color: white;"
            );
        }

        connect(li->listAdd(), &QPushButton::clicked, this, [this, l]() {
            if (l.ilosc > 0) {
                qDebug() << "Kliknięto przycisk Dodaj dla:" << QString::fromStdString(l.nazwa);
                lAdd(l.id);
                lUpdate();

                auto it = std::find_if(leki.begin(), leki.end(),
                    [&l](const Lek& lek) { return lek.id == l.id; });
                if (it != leki.end() && it->ilosc <= 0) {
                    rList();
                }
            }
        });

        layout->addWidget(li);
    }

    layout->addStretch();
    ui->rightList->layout()->update();
    ui->rightList->updateGeometry();
}

void StoreWindow::lClear() {
    leftLek.clear();
    lUpdate();
}

void StoreWindow::updateMedicineQuantity(int id, int change) {
    auto it = std::find_if(leki.begin(), leki.end(), [id](const Lek& l) {
        return l.id == id;
    });

    if (it != leki.end()) {
        it->ilosc += change;
        // Ogranicz do wartości nieujemnych
        if (it->ilosc < 0) it->ilosc = 0;
        rList(); // Odśwież listę
    }
}

void StoreWindow::lAdd(int id) {
    auto lek_it = std::find_if(leki.begin(), leki.end(), [id](const Lek& l) {
        return l.id == id;
    });

    if (lek_it == leki.end() || lek_it->ilosc <= 0) {
        return;
    }

    auto it = std::find_if(leftLek.begin(), leftLek.end(), [id](const std::pair<int, int>& p) {
        return p.first == id;
    });

    if (it == leftLek.end()) {
        leftLek.emplace_back(id, 1);
    } else {
        it->second++;
    }

    updateMedicineQuantity(id, -1);
    lUpdate();
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
        });
        li->setData(QString::fromStdString(it->nazwa), QString::number(lid.second));
        llayout->addWidget(li);
    }
    llayout->addStretch();
}
