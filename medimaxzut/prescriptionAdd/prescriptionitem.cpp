#include "prescriptionitem.h"
#include "ui_prescriptionitem.h"

PrescriptionItem::PrescriptionItem(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PrescriptionItem)
{
    ui->setupUi(this);
}

PrescriptionItem::~PrescriptionItem()
{
    delete ui;
}
void PrescriptionItem::setData(const QString& nazwa, const QString& ilosc)
{
    ui->medNameLabel->setText(nazwa);
    ui->medNumLabel->setText(ilosc);
}
QPushButton* PrescriptionItem::listAdd() {
    return ui->prescUpdateButton;
}