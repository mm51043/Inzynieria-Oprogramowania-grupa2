#include "newpatientdoctorlistitem.h"
#include "ui_newpatientdoctorlistitem.h"

NewPatientDoctorListItem::NewPatientDoctorListItem(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NewPatientDoctorListItem)
{
    ui->setupUi(this);
}

NewPatientDoctorListItem::~NewPatientDoctorListItem()
{
    delete ui;
}
