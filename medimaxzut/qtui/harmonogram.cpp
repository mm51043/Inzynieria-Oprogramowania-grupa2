#include "harmonogram.h"
#include "ui_harmonogram.h"

harmonogram::harmonogram(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::harmonogram)
{
    ui->setupUi(this);
}

harmonogram::~harmonogram()
{
    delete ui;
}
