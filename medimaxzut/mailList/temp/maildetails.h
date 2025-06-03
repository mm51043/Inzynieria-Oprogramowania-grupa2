#ifndef MAILDETAILS_H
#define MAILDETAILS_H

#include <QWidget>

namespace Ui {
class maildetails;
}

class maildetails : public QWidget
{
    Q_OBJECT

public:
    explicit maildetails(QWidget *parent = nullptr);
    ~maildetails();

private:
    Ui::maildetails *ui;
};

#endif // MAILDETAILS_H
