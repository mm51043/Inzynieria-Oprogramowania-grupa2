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

    void list();

    void setLabels(const std::string &what);

    void setLabels(const std::string& what) const;
signals:
    void userPicked(int id);
    void showProfileRequested(int patientId);
private:
    Ui::ListUser *ui;
    bool prescription;
    bool appointment;
    MainWindow* mainWindow;
    Profil* profilWindow;
};

#endif // LISTUSER_H
