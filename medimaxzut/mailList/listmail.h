#ifndef LISTMAIL_H
#define LISTMAIL_H

#include <QWidget>
#include "mailitem.h"
#include "mailext.h"

namespace Ui {
class ListMail;
}

class ListMail : public QWidget
{
    Q_OBJECT

public:
    explicit ListMail(QWidget *parent = nullptr);
    ~ListMail();

    void list();

private:
    Ui::ListMail *ui;
    QMap<MailItem*, MailExt*> extWidgets;
};

#endif // LISTMAIL_H
