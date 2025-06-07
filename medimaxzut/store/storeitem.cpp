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