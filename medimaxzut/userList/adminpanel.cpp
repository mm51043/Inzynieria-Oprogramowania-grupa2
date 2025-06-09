#include "adminpanel.h"

#include <QVBoxLayout>

#include "listitem.h"
#include "ui_adminpanel.h"
#include "../baza.h"

AdminPanel::AdminPanel(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AdminPanel)
{
    ui->setupUi(this);
    listUsers();
}

AdminPanel::~AdminPanel()
{
    delete ui;
}
void AdminPanel::listUsers(){
    auto* layout = qobject_cast<QVBoxLayout*>(ui->List->layout());
    if (!layout) {
        layout = new QVBoxLayout(ui->List);
        ui->List->setLayout(layout);
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
    for (const auto pracownicy = fetchPracownicy(); const auto& p : pracownicy) {
        auto* li = new ListItem();
        li->setData(QString::fromStdString(p.imie),
                    QString::fromStdString(p.nazwisko),
                    QString::fromStdString(p.typ),
                    QString::fromStdString(p.ostatniLogin));
        li->getButton()->setText("Pokaż opcje");
        connect(li->getButton(), &QPushButton::clicked, this, [this]() {

        });
        layout->addWidget(li);
    }
    layout->addStretch();
}