#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "navibutton.h"
#include "../mailList/listmail.h"
#include "../userList/listuser.h"
#include "../prescriptionAdd/prescriptionwindow.h"
#include "../schedule/scheduleview.h"
#include "../store/storewindow.h"
#include "../newPatient/newpatient.h"
#include "../message/newmessage.h"
#include "../store/prescriptionlist.h"
#include <QTimer>
#include <QTime>

#include "../userList/adminpanel.h"

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
        if (sessionUserId == 1 || sessionUserId == 2) {
            showPatientList(false, false, true, false, 0);
        }else {
            showMailList(sessionUserId);
        }
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::setWelcomeUserName(const std::string& userName) const {
    ui->welcomeLabel->setText(QString::fromStdString("Witaj, " + userName));
}
void MainWindow::showPatientList(bool prescription, bool newAppointment, bool mail, bool schedule, int mode) {

    QLayout *layout = ui->MainPanel->layout();

    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (item->widget()) {
            item->widget()->deleteLater();
        }
        delete item;
    }
    auto *listUserWidget = new ListUser(this);
    qDebug() << mode;
    if (mode == 0)
        listUserWidget->setLabels("user");
    else if (mode == 1)
        listUserWidget->setLabels("patient");
    listUserWidget->setMode(mode);
    if (prescription) {
        listUserWidget->setPrescription();
    }
    if (newAppointment) {
        listUserWidget->setAppointment();
    }
    if (mail) {
        listUserWidget->setMail();
    }
    if (schedule) {
        listUserWidget->setSchedule();
    }
    layout->addWidget(listUserWidget);
}

void MainWindow::showMailList(int id) const {
    QLayout *layout = ui->MainPanel->layout();

    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (item->widget()) {
            item->widget()->deleteLater();
        }
        delete item;
    }

    auto *listMailWidget = new ListMail();
    if (id != 0) {
        listMailWidget->setUserId(id);
    }
    layout->addWidget(listMailWidget);
}
void MainWindow::showAdminPanel() {
    QLayout *layout = ui->MainPanel->layout();

    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (item->widget()) {
            item->widget()->deleteLater();
        }
        delete item;
    }

    auto *adminWidget = new AdminPanel();
    layout->addWidget(adminWidget);
}
void MainWindow::showNewMessage() const {
    QLayout *layout = ui->MainPanel->layout();

    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (item->widget()) {
            item->widget()->deleteLater();
        }
        delete item;
    }

    auto *messageWidget = new NewMessage();
    layout->addWidget(messageWidget);
}
void MainWindow::showPrescriptionAdd(int patientId) const {

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

void MainWindow::showStore(int id) {
    QLayout *layout = ui->MainPanel->layout();

    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (item->widget()) {
            item->widget()->deleteLater();
        }
        delete item;
    }
    auto *storeWidget = new StoreWindow(this);
    if (id != 0) {
        qDebug() << "id: " << id;
        storeWidget->setPrescription(id);
    }

    layout->addWidget(storeWidget);
}
void MainWindow::showNewPatient(const int patientId, const int doctorId, const std::string &date, const std::string &time) {
    qDebug() << date << " " << time;
    QLayout *layout = ui->MainPanel->layout();
    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (item->widget()) {
            item->widget()->deleteLater();
        }
        delete item;
    }
    auto *newPatientWidget = new NewPatient(this);
    if (doctorId != 0) {
        newPatientWidget->setDoctor(doctorId);
    }
    if (!date.empty() && !time.empty()) {
        newPatientWidget->setSchedule();
        newPatientWidget->setAppointmentData(date, time);
    }
    if (patientId != 0) {
        newPatientWidget->setPatientData(patientId);
    }
    layout->addWidget(newPatientWidget);
}
void MainWindow::showSchedule(const bool insert, const int doctorId, const int patientId) {
    QLayout *layout = ui->MainPanel->layout();
    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (item->widget()) {
            item->widget()->deleteLater();
        }
        delete item;
    }
    auto *scheduleWidget = new ScheduleView(this);
    if (insert) {
        scheduleWidget->setAppointment();
        scheduleWidget->setDoctorId(doctorId);
        scheduleWidget->setPatientId(patientId);
    }
    layout->addWidget(scheduleWidget);
}
void MainWindow::showPrescriptionList() {
    QLayout *layout = ui->MainPanel->layout();
    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (item->widget()) {
            item->widget()->deleteLater();
        }
        delete item;
    }
    auto *presclistWidget = new PrescriptionList(this);
    layout->addWidget(presclistWidget);
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
                showPatientList(false, false, false, false, 1);
            });
        }
        else if (name == "Lista Pracowników") {
            connect(btn->pushButton, &QPushButton::clicked, this, [this]() {
                showPatientList(false, false, false, false, 0);
            });
        }
        else if (name == "Dodaj Receptę") {
            connect(btn->pushButton, &QPushButton::clicked, this, [this]() {
                showPatientList(true, false, false, false, 1);
            });
        }
        else if (name == "Harmonogram") {
            connect(btn->pushButton, &QPushButton::clicked, this, [this]() {
               showSchedule(false, 0, 0);
            });
        }
        else if (name == "Apteka") {
            connect(btn->pushButton, &QPushButton::clicked, this, [this]() {
                showStore(0);
            });
        }
        else if (name == "Dodaj Pacjenta/Umów Wizytę") {
            connect(btn->pushButton, &QPushButton::clicked, this, [this]() {
                showNewPatient(0, 0, "", "");
            });
        }
        else if (name == "Dodaj Wiadomość") {
            connect(btn->pushButton, &QPushButton::clicked, this, [this]() {
                showNewMessage();
            });
        }
        else if (name == "Panel Administracyjny") {
            connect(btn->pushButton, &QPushButton::clicked, this, [this]() {
                showAdminPanel();
            });
        }
        else if (name == "Harmonogramy Pracowników") {
            connect(btn->pushButton, &QPushButton::clicked, this, [this]() {
                showPatientList(false, false, false, true, 0);
            });
        }
    }
    layout->addStretch();
}
