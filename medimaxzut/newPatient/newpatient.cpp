#include "newpatient.h"

#include "newpatientdoctorlistitem.h"
#include "ui_newpatient.h"
#include "../baza.h"
#include "../mainWindow/mainwindow.h"

NewPatient::NewPatient(MainWindow* mw, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NewPatient)
    , mainWindow(mw)
    , doctorId(0)
    , patientId(0)
    , scheduleSet(false)
    , setDate("")
    , setTime("")
{
    ui->setupUi(this);
    ui->success->setVisible(false);
    ui->newAppointmentButton->setVisible(false);
    hideErrors();
    fillDocList();
    if(doctorId == 0) {
        ui->step3->setVisible(false);
    }
    if (!scheduleSet) {
        ui->step4->setVisible(false);
        ui->confirmButton->setVisible(false);
    }
    ui->step2->setVisible(false);
    connect(ui->addNewButton, &QPushButton::clicked, this, [this]() {
                if (checkData()) {
                    patientId = submitPatient(getStuff());
                    lockEdit();
                    ui->step2->setVisible(true);
                }
            });
    connect(ui->dbButton, &QPushButton::clicked, this, [this]() {
        if (mainWindow) {
            mainWindow->showPatientList(false, true, 1);
        }
    });
    connect(ui->scheduleButton, &QPushButton::clicked, this, [this]() {
        if (mainWindow) {
            mainWindow->showSchedule(true, doctorId, patientId);
        }
    });
    connect(ui->confirmButton, &QPushButton::clicked, this, [this]() {
        submitAppointment();
    });
    connect(ui->newAppointmentButton, &QPushButton::clicked, this, [this]() {
        if (mainWindow) {
            mainWindow->showNewPatient(0, 0, "", "");
        }
    });
}

NewPatient::~NewPatient()
{
    delete ui;
}
void NewPatient::setDoctor(const int id) {
    doctorId = id;
    setDoctorData();
    ui->step3->setVisible(true);
}
void NewPatient::setDoctorData() {
    auto doctor = getDoctorData(doctorId);
    ui->doctorLabel->setText(QString::fromStdString(doctor.imie + " " + doctor.nazwisko));
}
void NewPatient::setAppointmentData(const std::string &date, const std::string &time) {
    setDate = date;
    setTime = time;
    ui->step4->setVisible(true);
    ui->confirmButton->setVisible(true);
    ui->dateTime->setText(QString::fromStdString(setDate) + " | " + QString::fromStdString(setTime));
}
void NewPatient::setSchedule() {
    scheduleSet = true;
}
void NewPatient::setPatientData(const int id) {
    patientId = id;
    auto p = getPatientData(id);
    ui->patName->setText(QString::fromStdString(p.imie));
    ui->patSurname->setText(QString::fromStdString(p.nazwisko));
    ui->patPesel->setText(QString::fromStdString(p.pesel));
    ui->patPhone->setText(QString::number(p.nrTelefonu));
    ui->patHistory->setText(QString::fromStdString(p.historia));
    ui->patCity->setText(QString::fromStdString(p.miasto));
    ui->patStreet->setText(QString::fromStdString(p.ulica));
    ui->patHouse->setText(QString::number(p.nrDomu));
    if (p.nrMieszkania != 0)
    ui->patApartment->setText(QString::number(p.nrMieszkania));
    lockEdit();
    ui->step2->setVisible(true);
}
bool NewPatient::checkData() const {
    bool pass = true;
    if (checkPeselDuplicate(ui->patPesel->text().toStdString())) {
        ui->patPeselDuplicate->setVisible(true);
        pass = false;
    } else {
        ui->patPeselDuplicate->setVisible(false);
    }
    if (ui->patName->text().isEmpty()) {
        ui->patNameErr->setVisible(true);
        pass = false;
    } else {
        ui->patNameErr->setVisible(false);
    }
    if (ui->patSurname->text().isEmpty()) {
        ui->patSurnameErr->setVisible(true);
        pass = false;
    } else {
        ui->patSurnameErr->setVisible(false);
    }
    if (ui->patPesel->text().isEmpty()) {
        ui->patPeselErr->setVisible(true);
        pass = false;
    } else {
        ui->patPeselErr->setVisible(false);
    }
    if (ui->patPhone->text().isEmpty()) {
        ui->patPhoneErr->setVisible(true);
        pass = false;
    } else {
        ui->patPhoneErr->setVisible(false);
    }
    if (ui->patCity->text().isEmpty()) {
        ui->patCityErr->setVisible(true);
        pass = false;
    } else {
        ui->patCityErr->setVisible(false);
    }
    if (ui->patStreet->text().isEmpty()) {
        ui->patStreetErr->setVisible(true);
        pass = false;
    } else {
        ui->patStreetErr->setVisible(false);
    }
    if (ui->patHouse->text().isEmpty()) {
        ui->patHouseErr->setVisible(true);
        pass = false;
    } else {
        ui->patHouseErr->setVisible(false);
    }
    return pass;
}
Pacjent NewPatient::getStuff() const {
    Pacjent p;
    p.imie = ui->patName->text().toStdString();
    p.nazwisko = ui->patSurname->text().toStdString();
    p.pesel = ui->patPesel->text().toStdString();
    p.nrTelefonu = ui->patPhone->text().toInt();
    p.historia = ui->patHistory->text().toStdString();
    p.miasto = ui->patCity->text().toStdString();
    p.ulica = ui->patStreet->text().toStdString();
    p.nrDomu = ui->patHouse->text().toInt();
    p.nrMieszkania = 0;
    if (!ui->patApartment->text().isEmpty()) {
        p.nrMieszkania = ui->patApartment->text().toInt();
    }
    return p;
}
void NewPatient::lockEdit() const {
    ui->dbButton->setEnabled(false);
    ui->patName->setEnabled(false);
    ui->patSurname->setEnabled(false);
    ui->patPesel->setEnabled(false);
    ui->patPhone->setEnabled(false);
    ui->patCity->setEnabled(false);
    ui->patStreet->setEnabled(false);
    ui->patHouse->setEnabled(false);
    ui->patApartment->setEnabled(false);
    ui->addNewButton->setEnabled(false);
}
void NewPatient::hideErrors() const {
    ui->patNameErr->setVisible(false);
    ui->patSurnameErr->setVisible(false);
    ui->patPeselErr->setVisible(false);
    ui->patPhoneErr->setVisible(false);
    ui->patCityErr->setVisible(false);
    ui->patStreetErr->setVisible(false);
    ui->patHouseErr->setVisible(false);
    ui->patPeselDuplicate->setVisible(false);
}
void NewPatient::fillDocList() {
    auto layout = qobject_cast<QVBoxLayout*>(ui->docList->layout());
    if (!layout) {
        layout = new QVBoxLayout(ui->docList);
        ui->docList->setLayout(layout);
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
    for (const auto lekarze = getDoctor(); const auto& l : lekarze) {
        auto* li = new NewPatientDoctorListItem();
        li->setData(QString::fromStdString(l.imie), QString::fromStdString(l.nazwisko), QString::fromStdString(std::to_string(l.nrGabinetu)));
        connect(li->getButton(), &QPushButton::clicked, this, [this, l]() {
            if (!scheduleSet)
            setDoctor(l.id);
        });
        layout->addWidget(li);
    }
    layout->addStretch();
}
void NewPatient::submitAppointment() {
    if (insertAppointment(doctorId, patientId, setDate, setTime, ui->title->text().toStdString())) {
        ui->scheduleButton->setEnabled(false);
        ui->title->setEnabled(false);
        ui->success->setVisible(true);
        ui->newAppointmentButton->setVisible(true);
    }
}