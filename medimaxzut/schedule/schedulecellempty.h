#ifndef SCHEDULECELLEMPTY_H
#define SCHEDULECELLEMPTY_H

#include <qpushbutton.h>
#include <QWidget>

namespace Ui {
class ScheduleCellEmpty;
}

class ScheduleCellEmpty : public QWidget
{
    Q_OBJECT

public:
    explicit ScheduleCellEmpty(QWidget *parent = nullptr);
    ~ScheduleCellEmpty();

    QPushButton *getButton();

private:
    Ui::ScheduleCellEmpty *ui;
};

#endif // SCHEDULECELLEMPTY_H
