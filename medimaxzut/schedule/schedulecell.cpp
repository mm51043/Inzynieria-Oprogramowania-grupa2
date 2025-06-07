#include "schedulecell.h"
#include "ui_schedulecell.h"

ScheduleCell::ScheduleCell(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ScheduleCell)
{
    ui->setupUi(this);
}

ScheduleCell::~ScheduleCell()
{
    delete ui;
}
void ScheduleCell::setData(const QString& tytul, const QString& pacjent) {
    ui->title->setText(tytul);
    ui->patient->setText(pacjent);
}
