#ifndef LISTUSER_H
#define LISTUSER_H

#include <QWidget>
#include "../profile/profil.h"

class MainWindow;

namespace Ui {
class ListUser;
}

class ListUser : public QWidget
{
    Q_OBJECT

public:
    explicit ListUser(MainWindow* mw, QWidget *parent = nullptr);
    ~ListUser();

    void setPrescription();

    void setAppointment();

    void listPatients();

    void list();

    void listUsers();

    void setLabels(const std::string &what);
    void setMode(int mode);
signals:
    void userPicked(int id);
    void showProfileRequested(int patientId);
private:
    Ui::ListUser *ui;
    bool prescription;
    bool appointment;
    MainWindow* mainWindow;
    Profil* profilWindow;
    int mode;
};

#endif // LISTUSER_H
