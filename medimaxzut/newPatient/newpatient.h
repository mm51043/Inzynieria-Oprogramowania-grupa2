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

    void setDoctor(int id);

    void setAppointmentData(const std::string &date, const std::string &time);

    void setSchedule();

    void setPatientData(int id);

    bool checkData() const;

    Pacjent getStuff() const;

    void lockEdit() const;
    void setDoctorData();
    void hideErrors() const;

    void fillDocList();

    void submitAppointment();

private:
    Ui::NewPatient *ui;
    int patientId;
    int doctorId;
    MainWindow* mainWindow;
    bool scheduleSet;
    std::string setDate;
    std::string setTime;
};

#endif // NEWPATIENT_H
