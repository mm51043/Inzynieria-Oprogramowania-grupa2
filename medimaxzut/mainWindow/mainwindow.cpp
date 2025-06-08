#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "navibutton.h"
#include "../mailList/listmail.h"
#include "../userList/listuser.h"
#include "../prescriptionAdd/prescriptionwindow.h"
#include "../schedule/scheduleview.h"
#include "../store/storewindow.h"
#include "../newPatient/newpatient.h"
#include <QTimer>
#include <QTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("MediMaxZut");
    QTimer* timer = new QTimer(this);
    const QStringList months = {
        "stycznia", "lutego", "marca", "kwietnia", "maja", "czerwca",
        "lipca", "sierpnia", "września", "października", "listopada", "grudnia"
    };
    connect(timer, &QTimer::timeout, this, [this, months]() {
        QString currentTime = QTime::currentTime().toString("HH:mm");
        ui->timeLabel->setText(currentTime);
        QDate currentDate = QDate::currentDate();
        ui->dmLabel->setText(currentDate.toString(QString("%1 %2").arg(currentDate.day()).arg(months[currentDate.month()-1])));
        ui->yLabel->setText(currentDate.toString("yyyyr."));
    });
    timer->start(1000);
    if (!ui->MainPanel->layout()) {
        auto* layout = new QVBoxLayout(ui->MainPanel);
        layout->setContentsMargins(0, 0, 0, 0);
        ui->MainPanel->setLayout(layout);
    }
    connect(ui->mainMailButton, &QPushButton::clicked, this, [this]() {
        showMailList();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::setWelcomeUserName(const std::string& userName) const {
    ui->welcomeLabel->setText(QString::fromStdString("Witaj, " + userName));
}
void MainWindow::showPatientList(bool prescription, bool newAppointment, int mode) {
    QLayout *layout = ui->MainPanel->layout();

    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (item->widget()) {
            item->widget()->deleteLater();
        }
        delete item;
    }
    auto *listUserWidget = new ListUser(this);
    if (mode == 0)
        listUserWidget->setLabels("user");
    else if (mode == 1)
        listUserWidget->setLabels("patient");
    if (prescription) {
        qDebug() << prescription << "Prescription";
        listUserWidget->setPrescription();
    }
    if (newAppointment) {
        qDebug() << newAppointment << "Appointment";
        listUserWidget->setAppointment();
    }
    layout->addWidget(listUserWidget);
}

void MainWindow::showMailList() {
    QLayout *layout = ui->MainPanel->layout();

    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (item->widget()) {
            item->widget()->deleteLater();
        }
        delete item;
    }

    auto *listMailWidget = new ListMail();
    layout->addWidget(listMailWidget);
}
void MainWindow::showPrescAdd(int patientId) const {

    QLayout *layout = ui->MainPanel->layout();

    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (item->widget()) {
            item->widget()->deleteLater();
        }
        delete item;
    }
    auto *prescriptionWidget = new PrescWindow();
    prescriptionWidget->setPatientId(patientId);
    layout->addWidget(prescriptionWidget);
}

void MainWindow::showStore() const {
    QLayout *layout = ui->MainPanel->layout();

    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (item->widget()) {
            item->widget()->deleteLater();
        }
        delete item;
    }
    auto *storeWidget = new StoreWindow();
    layout->addWidget(storeWidget);
}
void MainWindow::showNewPatient(int patientId, std::string date, std::string time) {
    QLayout *layout = ui->MainPanel->layout();
    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (item->widget()) {
            item->widget()->deleteLater();
        }
        delete item;
    }
    auto *newPatientWidget = new NewPatient(this);
    if (!date.empty() && !time.empty()) {
        newPatientWidget->setAppointmentData(date, time);
    }
    if (patientId != 0) {
        newPatientWidget->setPatientData(patientId);
    }
    layout->addWidget(newPatientWidget);
}
void MainWindow::showSchedule(bool insert, int doctorid) {
    QLayout *layout = ui->MainPanel->layout();
    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (item->widget()) {
            item->widget()->deleteLater();
        }
        delete item;
    }
    auto *scheduleWidget = new ScheduleView(this);
    if (doctorid) {

    }
    layout->addWidget(scheduleWidget);
}
void MainWindow::navigation(const QStringList &buttons) {
    QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->naviList->layout());
    if (!layout) {
        layout = new QVBoxLayout(ui->naviList);
        ui->naviList->setLayout(layout);
    }

    QLayoutItem *child;
    while ((child = layout->takeAt(0)) != nullptr) {
        if (child->widget()) {
            child->widget()->deleteLater();
        }
        delete child;
    }

    layout->setContentsMargins(0, 5, 0, 5);
    layout->setSpacing(5);

    for (const QString &name : buttons) {
        auto* btn = new NaviButton();
        btn->setText(name);
        btn->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        layout->addWidget(btn);
        if (name == "Lista Pacjentów") {
            connect(btn->pushButton, &QPushButton::clicked, this, [this]() {
                showPatientList(false, false, 1);
            });
        }
        if (name == "Dodaj Receptę") {
            connect(btn->pushButton, &QPushButton::clicked, this, [this]() {
                showPatientList(true, false, 1);
            });
        }
        if (name == "Harmonogram") {
            connect(btn->pushButton, &QPushButton::clicked, this, [this]() {
               showSchedule(false, 0);
            });
        }
        if (name == "Apteka") {
            connect(btn->pushButton, &QPushButton::clicked, this, [this]() {
                showStore();
            });
        }
        if (name == "Dodaj Pacjenta/Umów Wizytę") {
            connect(btn->pushButton, &QPushButton::clicked, this, [this]() {
                showNewPatient(0, "", "");
            });
        }
    }
    layout->addStretch();
}
