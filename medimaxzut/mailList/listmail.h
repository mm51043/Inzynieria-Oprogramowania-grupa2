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

    void setUserId(int id);

    void list();

    void submit();

private:
    Ui::ListMail *ui;
    QMap<MailItem*, MailExt*> extWidgets;
    int userid;
};

#endif // LISTMAIL_H
