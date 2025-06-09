#ifndef PRESCRIPTIONLISTITEM_H
#define PRESCRIPTIONLISTITEM_H

#include <qpushbutton.h>
#include <QWidget>

namespace Ui {
class PrescriptionListItem;
}

class PrescriptionListItem : public QWidget
{
    Q_OBJECT

public:
    explicit PrescriptionListItem(QWidget *parent = nullptr);
    ~PrescriptionListItem();

    void setData(const QString &patient, const QString &doctor);

    QPushButton *getButton();

private:
    Ui::PrescriptionListItem *ui;
};

#endif // PRESCRIPTIONLISTITEM_H
