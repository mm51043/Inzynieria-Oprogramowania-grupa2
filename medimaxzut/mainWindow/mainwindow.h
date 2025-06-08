#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "navibutton.h"
#include <QVBoxLayout>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setWelcomeUserName(const std::string &userName) const;

    void navigation(const QStringList &buttons);
    void showPatientList(bool prescription, bool newAppointment, int mode);
    void showMailList();
    void showPrescAdd(int patientId) const;
    void showStore() const;
    void showNewPatient(int patientId, std::string date, std::string time);
    void showSchedule(bool insert, int doctorid) const;

private:

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
