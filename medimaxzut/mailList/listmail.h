#ifndef LISTMAIL_H
#define LISTMAIL_H

#include <QWidget>

namespace Ui {
class ListMail;
}

class ListMail : public QWidget
{
    Q_OBJECT

public:
    explicit ListMail(QWidget *parent = nullptr);
    ~ListMail();

private:
    Ui::ListMail *ui;
};

#endif // LISTMAIL_H
