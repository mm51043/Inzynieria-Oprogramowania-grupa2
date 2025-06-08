#include "newpatient.h"
#include "ui_newpatient.h"
#include "../baza.h"
#include "../mainWindow/mainwindow.h"

NewPatient::NewPatient(MainWindow* mw, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NewPatient)
    , mainWindow(mw)
{
    ui->setupUi(this);
    hideErrors();
    ui->houdini->setVisible(false);
    connect(ui->addNewButton, &QPushButton::clicked, this, [this]() {
                if (checkData()) {
                    patientId = submitPatient(getStuff());
                    lockEdit();
                    ui->houdini->setVisible(true);
                }
            });
    connect(ui->dbButton, &QPushButton::clicked, this, [this]() {
        if (mainWindow) {
            mainWindow->showPatientList(false, true, 1);
        }
    });
}

NewPatient::~NewPatient()
{
    delete ui;
}
void NewPatient::setAppointmentData(std::string date, std::string time) {
    ui->dateTime->setText(QString::fromStdString(date) + " | " + QString::fromStdString(time));
}
void NewPatient::setPatientData(int patientId) {
    auto p = getPatientData(patientId);
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
    ui->houdini->setVisible(true);
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
Pacjent NewPatient::getStuff() {
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
void NewPatient::lockEdit() {
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
void NewPatient::hideErrors() {
    ui->patNameErr->setVisible(false);
    ui->patSurnameErr->setVisible(false);
    ui->patPeselErr->setVisible(false);
    ui->patPhoneErr->setVisible(false);
    ui->patCityErr->setVisible(false);
    ui->patStreetErr->setVisible(false);
    ui->patHouseErr->setVisible(false);
    ui->patPeselDuplicate->setVisible(false);
}