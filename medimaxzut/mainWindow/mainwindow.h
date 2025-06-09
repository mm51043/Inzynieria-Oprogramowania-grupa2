#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "navibutton.h"
#include <QVBoxLayout>

namespace Ui {
class MainWindow;
}

class MainWindow final : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

    void setWelcomeUserName(const std::string &userName) const;
    void navigation(const QStringList &buttons);
    void showPatientList(bool prescription, bool newAppointment, int mode);
    void showMailList() const;

    void showNewMessage() const;

    void showPrescriptionAdd(int patientId) const;
    void showStore() const;
    void showNewPatient(int patientId, int doctorId, const std::string &date, const std::string &time);
    void showSchedule(bool insert, int doctorId, int patientId);

private:

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
