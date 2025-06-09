#include "prescriptionlistitem.h"
#include "ui_prescriptionlistitem.h"

PrescriptionListItem::PrescriptionListItem(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PrescriptionListItem)
{
    ui->setupUi(this);
}

PrescriptionListItem::~PrescriptionListItem()
{
    delete ui;
}
void PrescriptionListItem::setData(const QString& patient, const QString& doctor) {
    ui->patLabel->setText(patient);
    ui->docLabel->setText(doctor);
}
