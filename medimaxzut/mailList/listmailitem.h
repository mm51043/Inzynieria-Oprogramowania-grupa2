#ifndef LISTMAILITEM_H
#define LISTMAILITEM_H

#include <QWidget>

namespace Ui {
class ListMailItem;
}

class ListMailItem : public QWidget
{
    Q_OBJECT

public:
    explicit ListMailItem(QWidget *parent = nullptr);
    ~ListMailItem();

private:
    Ui::ListMailItem *ui;
};

#endif // LISTMAILITEM_H
