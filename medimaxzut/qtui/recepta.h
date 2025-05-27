#ifndef RECEPTA_H
#define RECEPTA_H

#include <QWidget>

namespace Ui {
class recepta;
}

class recepta : public QWidget
{
    Q_OBJECT

public:
    explicit recepta(QWidget *parent = nullptr);
    ~recepta();

private:
    Ui::recepta *ui;
};

#endif // RECEPTA_H

