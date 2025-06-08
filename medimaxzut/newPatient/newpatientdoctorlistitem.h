#ifndef NEWPATIENTDOCTORLISTITEM_H
#define NEWPATIENTDOCTORLISTITEM_H

#include <QPushButton>
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

    void setData(const QString &imie, const QString &nazwisko, const QString &gabinet) const;
    QPushButton* getButton() const;
private:
    Ui::NewPatientDoctorListItem *ui;
};

#endif // NEWPATIENTDOCTORLISTITEM_H
