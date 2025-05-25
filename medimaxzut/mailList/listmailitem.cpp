#include "listmailitem.h"
#include "ui_listmailitem.h"

ListMailItem::ListMailItem(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ListMailItem)
{
    ui->setupUi(this);
}

ListMailItem::~ListMailItem()
{
    delete ui;
}
