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

private:
    Ui::ScheduleView *ui;
};

#endif // HARMONOGRAM_H
