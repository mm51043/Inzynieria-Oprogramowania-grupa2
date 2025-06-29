#include "scheduleview.h"

#include <qdatetime.h>
#include <QVBoxLayout>

#include "ui_scheduleview.h"
#include "../baza.h"
#include "schedulecell.h"
#include "schedulecellempty.h"
#include "../mainWindow/mainwindow.h"

ScheduleView::ScheduleView(MainWindow* mw, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ScheduleView)
    , week(0)
    , mainWindow(mw)
    , newAppointment(false)
    , doctorid(sessionUserId)
    , patientid(0)
{
    ui->setupUi(this);
    ui->tooEarlyWarning->setVisible(false);
    fillSchedule();
    ui->docLabel->setText(QString::fromStdString(setSessionUserName(doctorid)));
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
void ScheduleView::setPatientId(int id) {
    patientid = id;
}
void ScheduleView::setDoctorId(int id){
    doctorid = id;
    ui->docLabel->setText(QString::fromStdString(setSessionUserName(doctorid)));
    fillSchedule();
}
void ScheduleView::setAppointment() {
    newAppointment = true;
    fillSchedule();
}
void ScheduleView::fillSchedule() {
    auto weekdays = getWeek(week);
    ui->dateRangeLabel->setText(QString::fromStdString(weekdays[0] + " - " + weekdays[4]));
    for (int day = 0; day < 5; ++day) {
        for (int hour = 0; hour < 8; ++hour) {
            QString frameName = QString("frame%1%2").arg(day).arg(hour);
            auto* frame = this->findChild<QFrame*>(frameName);
            if (!frame) continue;
            QLayout* layout = frame->layout();
            if (!layout) {
                layout = new QVBoxLayout(frame);
                frame->setLayout(layout);
            }
            while (QLayoutItem* item = layout->takeAt(0)) {
                delete item->widget();
                delete item;
            }
            layout->setContentsMargins(0, 0, 0, 0);
            if (newAppointment) {
                std::string date = weekdays[day];
                auto* empty = new ScheduleCellEmpty(frame);
                std::ostringstream timeStringBuild;
                timeStringBuild << std::setw(2) << std::setfill('0') << (hour + 8) << ":00:00";
                std::string time = timeStringBuild.str();
                connect(empty->getButton(), &QPushButton::clicked, this, [this, date, time]() {
                    if (checkDateTime(date, time)) {
                        mainWindow->showNewPatient(patientid, doctorid, date, time);
                    } else {
                        ui->tooEarlyWarning->setVisible(true);
                    }
                });
                layout->addWidget(empty);
            }
        }
    }

    for (int i = 0; i < weekdays.size(); i++) {
        auto wizyty = getAppointments(weekdays[i], doctorid);
        for (auto w : wizyty) {
            int hour = std::stoi(w.czas.substr(0, 2));
            QString frameName = QString("frame%1%2").arg(i).arg(hour-8);
            auto* frame = this->findChild<QFrame*>(frameName);
            if (frame) {
                QLayout* layout = frame->layout();
                if (!layout) {
                    layout = new QVBoxLayout(frame);
                }
                while (QLayoutItem* item = layout->takeAt(0)) {
                    delete item->widget();
                    delete item;
                }
                layout->setContentsMargins(0, 0, 0, 0);
                ScheduleCell* cell = new ScheduleCell(frame);
                cell->setData(QString::fromStdString(w.temat), QString::fromStdString(w.pacjent));
                layout->addWidget(cell);
            }
        }
    }
}
bool ScheduleView::checkDateTime(std::string date, std::string time) {
    QDateTime DateTime(QDate::fromString(QString::fromStdString(date), "dd.MM.yyyy"), QTime::fromString(QString::fromStdString(time), "HH:mm:ss"));
    QDateTime dayAfter = QDateTime::currentDateTime().addDays(1);
    if (dayAfter > DateTime) {
        return false;
    }
    return true;
}

