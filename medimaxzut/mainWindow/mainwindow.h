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

private slots:
    void showPatientList(bool prescription);
    void showMailList();
    void showPrescAdd(int patientId);
    void showStore();

    void showSchedule();

private:

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
