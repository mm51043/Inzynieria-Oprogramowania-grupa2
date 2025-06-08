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

    void setDoctorId(int id);

    void setAppointment();

    void fillSchedule();

private:
    Ui::ScheduleView *ui;
    int week;
    MainWindow* mainWindow;
    bool newAppointment;
    int doctorid;
};

#endif // HARMONOGRAM_H
