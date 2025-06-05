#ifndef LISTITEM_H
#define LISTITEM_H

#include <qpushbutton.h>
#include <QWidget>

namespace Ui {
class ListItem;
}

class ListItem : public QWidget
{
    Q_OBJECT

public:
    explicit ListItem(QWidget *parent = nullptr);
    ~ListItem();

    QPushButton *getButton();

    void setData(const QString &imie, const QString &nazwisko, const QString &pesel, const QString &telefon);

private:
    Ui::ListItem *ui;
};

#endif // LISTITEM_H
