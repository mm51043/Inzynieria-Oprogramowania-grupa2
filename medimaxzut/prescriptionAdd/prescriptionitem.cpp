#include "prescriptionitem.h"
#include "ui_prescriptionitem.h"

prescriptionItem::prescriptionItem(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::prescriptionItem)
{
    ui->setupUi(this);
}

prescriptionItem::~prescriptionItem()
{
    delete ui;
}
