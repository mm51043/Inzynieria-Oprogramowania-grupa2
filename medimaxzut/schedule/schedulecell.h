#ifndef SCHEDULECELL_H
#define SCHEDULECELL_H

#include <QWidget>

namespace Ui {
class ScheduleCell;
}

class ScheduleCell : public QWidget
{
    Q_OBJECT

public:
    explicit ScheduleCell(QWidget *parent = nullptr);
    ~ScheduleCell();

    void setData(const QString &tytul, const QString &pacjent);

private:
    Ui::ScheduleCell *ui;
};

#endif // SCHEDULECELL_H
