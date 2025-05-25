#include "listmail.h"
#include "ui_listmail.h"

ListMail::ListMail(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ListMail)
{
    ui->setupUi(this);
}

ListMail::~ListMail()
{
    delete ui;
}
