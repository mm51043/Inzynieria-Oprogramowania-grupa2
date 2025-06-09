#ifndef PRESCRIPTIONLIST_H
#define PRESCRIPTIONLIST_H

#include <QWidget>
#include "../mainWindow/mainwindow.h"
namespace Ui {
class PrescriptionList;
}

class PrescriptionList : public QWidget
{
    Q_OBJECT

public:
    explicit PrescriptionList(MainWindow* mainWindow, QWidget *parent = nullptr);
    ~PrescriptionList();

    void listPrescriptions();

private:
    Ui::PrescriptionList *ui;
    MainWindow* mainWindow;
};

#endif // PRESCRIPTIONLIST_H
