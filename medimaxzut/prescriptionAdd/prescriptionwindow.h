#ifndef PRESCRIPTIONWINDOW_H
#define PRESCRIPTIONWINDOW_H

#include <QWidget>

namespace Ui {
class prescriptionWindow;
}

class prescriptionWindow : public QWidget
{
    Q_OBJECT

public:
    explicit prescriptionWindow(QWidget *parent = nullptr);
    ~prescriptionWindow();

private:
    Ui::prescriptionWindow *ui;
};

#endif // PRESCRIPTIONWINDOW_H
