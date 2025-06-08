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
    llayout = lListLayout();
        leki = fetchLeki();
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
    auto leki = fetchLeki();
    qDebug() << "rlist";
    qDebug() << std::to_string(leki.size());
    layout->setContentsMargins(0, 5, 0, 5);
    layout->setSpacing(5);
    for (const auto& l : leki) {
        auto* li = new StoreItem();
        li->setData(QString::fromStdString(l.nazwa), QString::number(l.ilosc));
        connect(li->listAdd(), &QPushButton::clicked, this, [this, li, l]() {
                lAdd(l.id);
                lUpdate();
        });
        layout->addWidget(li);
    }
    layout->addStretch();
}

void StoreWindow::lClear() {
    leftLek.clear();
    lUpdate();
}

void StoreWindow::lAdd(int id) {
    auto it = std::find_if(leftLek.begin(), leftLek.end(), [id](const std::pair<int, int>& p) {
        return p.first == id;
    });
    if (it == leftLek.end()) {
        leftLek.emplace_back(id, 1);
    } else {
        it->second++;
    }
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
