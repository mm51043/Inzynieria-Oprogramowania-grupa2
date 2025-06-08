#include "newpatientdoctorlistitem.h"

#include <qlayoutitem.h>
#include <QVBoxLayout>

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
QPushButton* NewPatientDoctorListItem::getButton() const {
    return ui->docButton;
}
void NewPatientDoctorListItem::setData(const QString &imie, const QString &nazwisko, const QString &gabinet) const {
    ui->docName->setText(imie);
    ui->docSurname->setText(nazwisko);
    ui->docRoom->setText(gabinet);

}
