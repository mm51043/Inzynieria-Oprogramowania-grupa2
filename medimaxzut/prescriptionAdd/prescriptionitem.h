#ifndef PRESCRIPTIONITEM_H
#define PRESCRIPTIONITEM_H

#include <QWidget>

namespace Ui {
class prescriptionItem;
}

class prescriptionItem : public QWidget
{
    Q_OBJECT

public:
    explicit prescriptionItem(QWidget *parent = nullptr);
    ~prescriptionItem();

private:
    Ui::prescriptionItem *ui;
};

#endif // PRESCRIPTIONITEM_H
