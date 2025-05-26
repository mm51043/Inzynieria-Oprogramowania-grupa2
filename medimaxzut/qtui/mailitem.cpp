#include "mailitem.h"
#include "ui_mailitem.h"

mailItem::mailItem(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mailItem)
{
    ui->setupUi(this);
}

mailItem::~mailItem()
{
    delete ui;
}
