#ifndef MAILITEM_H
#define MAILITEM_H

#include <QWidget>

namespace Ui {
class mailItem;
}

class mailItem : public QWidget
{
    Q_OBJECT

public:
    explicit mailItem(QWidget *parent = nullptr);
    ~mailItem();

private:
    Ui::mailItem *ui;
};

#endif // MAILITEM_H
