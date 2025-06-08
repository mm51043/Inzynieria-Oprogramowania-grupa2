#ifndef HARMONOGRAM_H
#define HARMONOGRAM_H

#include <QWidget>

class MainWindow;

namespace Ui {
class ScheduleView;
}

class ScheduleView : public QWidget
{
    Q_OBJECT

public:
    explicit ScheduleView(MainWindow* mainWindow, QWidget *parent = nullptr);
    ~ScheduleView();

    void setPatientId(int id);

    void setDoctorId(int id);

    void setAppointment();

    void fillSchedule();

    bool checkDateTime(std::string date, std::string time);

private:
    Ui::ScheduleView *ui;
    int week;
    MainWindow* mainWindow;
    bool newAppointment;
    int doctorid;
    int patientid;
};

#endif // HARMONOGRAM_H
