#ifndef HARMONOGRAM_H
#define HARMONOGRAM_H

#include <QWidget>

namespace Ui {
class ScheduleView;
}

class ScheduleView : public QWidget
{
    Q_OBJECT

public:
    explicit ScheduleView(QWidget *parent = nullptr);
    ~ScheduleView();

    void fillSchedule() const;

private:
    Ui::ScheduleView *ui;
    int week;
};

#endif // HARMONOGRAM_H
