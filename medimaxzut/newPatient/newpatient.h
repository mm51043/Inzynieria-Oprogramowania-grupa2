#ifndef NEWPATIENT_H
#define NEWPATIENT_H

#include <QWidget>
#include "../baza.h"

class MainWindow;

namespace Ui {
class NewPatient;
}

class NewPatient : public QWidget
{
    Q_OBJECT

public:
    explicit NewPatient(MainWindow* mw, QWidget *parent = nullptr);
    ~NewPatient();

    void setAppointmentData(std::string date, std::string time);

    void setPatientData(int patientId);

    bool checkData() const;

    Pacjent getStuff();

    void lockEdit();

    void hideErrors();

    void fillDocList();

private:
    Ui::NewPatient *ui;
    int patientId;
    MainWindow* mainWindow;
};

#endif // NEWPATIENT_H
