#ifndef NEWPATIENTDOCTORLISTITEM_H
#define NEWPATIENTDOCTORLISTITEM_H

#include <QWidget>

namespace Ui {
class NewPatientDoctorListItem;
}

class NewPatientDoctorListItem : public QWidget
{
    Q_OBJECT

public:
    explicit NewPatientDoctorListItem(QWidget *parent = nullptr);
    ~NewPatientDoctorListItem();

private:
    Ui::NewPatientDoctorListItem *ui;
};

#endif // NEWPATIENTDOCTORLISTITEM_H
