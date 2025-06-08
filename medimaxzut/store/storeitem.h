#ifndef STOREITEM_H
#define STOREITEM_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class storeitem;
}

class StoreItem : public QWidget
{
    Q_OBJECT

public:
    explicit StoreItem(QWidget *parent = nullptr);
    ~StoreItem();

    void setData(const QString &nazwa, const QString &ilosc);
    QPushButton* listAdd();
    void setDisabled(bool disabled);

private:
    Ui::storeitem *ui;
};

#endif // STOREITEM_H
