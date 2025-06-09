#ifndef NEWMESSAGE_H
#define NEWMESSAGE_H

#include <QWidget>

namespace Ui {
class NewMessage;
}

class NewMessage : public QWidget
{
    Q_OBJECT

public:
    explicit NewMessage(QWidget *parent = nullptr);
    ~NewMessage();

private:
    Ui::NewMessage *ui;
};

#endif // NEWMESSAGE_H
