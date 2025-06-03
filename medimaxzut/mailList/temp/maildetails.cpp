#include "maildetails.h"
#include "ui_maildetails.h"

maildetails::maildetails(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::maildetails)
{
    ui->setupUi(this);
}

maildetails::~maildetails()
{
    delete ui;
}
