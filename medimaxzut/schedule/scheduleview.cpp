#include "scheduleview.h"

#include <QVBoxLayout>

#include "ui_scheduleview.h"
#include "../baza.h"
#include "schedulecell.h"

ScheduleView::ScheduleView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ScheduleView)
    , week(0)
{
    ui->setupUi(this);
    fillSchedule();
    ui->docLabel->setText(QString::fromStdString(sessionUserName));
    connect(ui->arrowLeft, &QPushButton::clicked, this, [this]() {
        week--;
        fillSchedule();
    });
    connect(ui->arrowRight, &QPushButton::clicked, this, [this]() {
        week++;
        fillSchedule();
    });
}

ScheduleView::~ScheduleView()
{
    delete ui;
}
void ScheduleView::fillSchedule() const {
    for (int day = 0; day < 5; ++day) {
        for (int hour = 0; hour < 8; ++hour) {
            QString frameName = QString("frame%1%2").arg(day).arg(hour);
            auto* frame = this->findChild<QFrame*>(frameName);
            if (frame) {
                if (QLayout* layout = frame->layout()) {
                    while (QLayoutItem* item = layout->takeAt(0)) {
                        delete item->widget();
                        delete item;
                    }
                } else {
                    frame->setLayout(new QVBoxLayout(frame));
                }
            }
        }
    }
    auto weekdays = getWeek(week);
    ui->dateRangeLabel->setText(QString::fromStdString(weekdays[0] + " - " + weekdays[4]));
    for (int i = 0; i < weekdays.size(); i++) {
        auto wizyty = getAppointments(weekdays[i]);
        for (auto w : wizyty) {
            int hour = std::stoi(w.czas.substr(0, 2));
            QString frameName = QString("frame%1%2").arg(i).arg(hour-8);
            auto* frame = this->findChild<QFrame*>(frameName);
            if (frame) {
                QLayout* layout = frame->layout();
                if (!layout) {
                    layout = new QVBoxLayout(frame);
                }
                layout->setContentsMargins(0, 0, 0, 0);
                ScheduleCell* cell = new ScheduleCell(frame);
                cell->setData(QString::fromStdString(w.temat), QString::fromStdString(w.pacjent));
                layout->addWidget(cell);
            }
        }
    }
}
