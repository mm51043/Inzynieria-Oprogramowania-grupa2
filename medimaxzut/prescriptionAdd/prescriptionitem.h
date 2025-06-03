#ifndef PRESCRIPTIONITEM_H
#define PRESCRIPTIONITEM_H

#include <QWidget>

namespace Ui {
class PrescriptionItem;
}

class PrescriptionItem : public QWidget
{
    Q_OBJECT

public:
    explicit PrescriptionItem(QWidget *parent = nullptr);
    ~PrescriptionItem();

    void setData(const QString &nazwa, const QString &ilosc);

private:
    Ui::PrescriptionItem *ui;
};

#endif // PRESCRIPTIONITEM_H
