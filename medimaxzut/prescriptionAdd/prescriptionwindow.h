#ifndef PRESCRIPTIONWINDOW_H
#define PRESCRIPTIONWINDOW_H

#include <QWidget>

namespace Ui {
class PrescWindow;
}

class PrescWindow : public QWidget
{
    Q_OBJECT

public:
    explicit PrescWindow(QWidget *parent = nullptr);
    ~PrescWindow();

    void rlist();

    void llist();

private:
    Ui::PrescWindow *ui;
};

#endif // PRESCRIPTIONWINDOW_H
