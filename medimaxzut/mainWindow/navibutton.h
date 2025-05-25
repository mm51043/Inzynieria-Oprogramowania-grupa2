#ifndef NAVIBUTTON_H
#define NAVIBUTTON_H

#include <QWidget>
#include <QPushButton>
#include "ui_navibutton.h"

namespace Ui {
    class NaviButton;
}

class NaviButton : public QWidget
{
    Q_OBJECT

public:
    explicit NaviButton(QWidget *parent = nullptr);
    ~NaviButton();

    void setText(const QString &text);
    QString text() const;
    QPushButton* button() const;
    QPushButton* pushButton;
private:
    Ui::NaviButton *ui;
};

#endif // NAVIBUTTON_H