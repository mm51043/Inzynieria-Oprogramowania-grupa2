#include "storeitem.h"
#include "ui_storeitem.h"


StoreItem::StoreItem(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::storeitem)
{
    ui->setupUi(this);
}

StoreItem::~StoreItem()
{
    delete ui;
}

void StoreItem::setData(const QString& nazwa, const QString& ilosc)
{
    ui->medNameLabel->setText(nazwa);
    ui->medNumLabel->setText(ilosc);
}

QPushButton* StoreItem::listAdd() {
    return ui->storeUpdateButton;
}

void StoreItem::setDisabled(bool disabled) {
    ui->storeUpdateButton->setEnabled(!disabled);
    if (disabled) {
        ui->storeUpdateButton->setStyleSheet("background-color: gray; border-radius: 10px; color: white;");
    } else {
        ui->storeUpdateButton->setStyleSheet("background-color: rgb(0, 41, 94); border-radius: 10px; color: white;");
    }
}