#ifndef LISTUSER_H
#define LISTUSER_H

#include <QWidget>

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

    void setLabels(const std::string& what);
signals:
    void userPicked(int id);
private:
    Ui::ListUser *ui;
    bool prescription;
    bool appointment;
    MainWindow* mainWindow;
};

#endif // LISTUSER_H
