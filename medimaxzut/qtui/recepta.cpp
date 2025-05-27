#include "recepta.h"
#include "ui_recepta.h"

recepta::recepta(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::recepta)
{
    ui->setupUi(this);
}

recepta::~recepta()
{
    delete ui;
}
