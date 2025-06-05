#ifndef PRESCRIPTIONITEM_H
#define PRESCRIPTIONITEM_H

#include <QWidget>
#include <QPushButton>

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

    QPushButton* listAdd();

private:
    Ui::PrescriptionItem *ui;
};

#endif // PRESCRIPTIONITEM_H
