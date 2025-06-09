#include "listuser.h"
#include "ui_listuser.h"
#include "listitem.h"
#include "ui_listitem.h"
#include "../baza.h"
#include <QVBoxLayout>
#include "../mainWindow/mainwindow.h"
#include "../profile/profil.h"

ListUser::ListUser(MainWindow* mw, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ListUser)
    , mainWindow(mw)
    , prescription(false)
    , appointment(false)
    , profilWindow(nullptr)
    , mode(-1)
{
    ui->setupUi(this);
    list();

}

ListUser::~ListUser()
{
    delete ui;
}
void ListUser::list() {
    if (mode == 0) {
        listUsers();
    } else if (mode == 1) {
        listPatients();
    }
}
void ListUser::setMode(int md) {
    mode = md;
    list();
}
void ListUser::setPrescription(){
    prescription = true;
    listPatients();
}
void ListUser::setAppointment() {
    appointment = true;
    listPatients();
}
void ListUser::listPatients() {
    qDebug() << prescription << ", " << appointment;
    auto* layout = qobject_cast<QVBoxLayout*>(ui->List->layout());
    if (!layout) {
        layout = new QVBoxLayout(ui->List);
        ui->List->setLayout(layout);
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
    if (!profilWindow) {
        profilWindow = new Profil();
    }
    for (const auto pacjenci = fetchPacjenci(); const auto& p : pacjenci) {
        auto* li = new ListItem();
        li->setData(QString::fromStdString(p.imie),
                    QString::fromStdString(p.nazwisko),
                    QString::fromStdString(p.pesel),
                    QString::number(p.nrTelefonu));
        if (prescription) {
            li->getButton()->setText("Wybierz");
            connect(li->getButton(), &QPushButton::clicked, this, [this, p]() {
                if (mainWindow) {
                    mainWindow->showPrescriptionAdd(p.id);
                }
            });
        }
        else if (appointment) {
            li->getButton()->setText("Wybierz");
            connect(li->getButton(), &QPushButton::clicked, this, [this, p]() {
                if (mainWindow) {
                    mainWindow->showNewPatient(p.id, 0, "", "");
                }
            });
        }
        else {
            connect(li->getButton(), &QPushButton::clicked, this, [this, p]() {
                profilWindow->showPatientProfile(p.id);
                emit showProfileRequested(p.id);
            });
        }
        layout->addWidget(li);
    }
    layout->addStretch();
}
void ListUser::listUsers(){
    auto* layout = qobject_cast<QVBoxLayout*>(ui->List->layout());
    if (!layout) {
        layout = new QVBoxLayout(ui->List);
        ui->List->setLayout(layout);
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
    if (!profilWindow) {
        profilWindow = new Profil();
    }
    for (const auto pracownicy = fetchPracownicy(); const auto& p : pracownicy) {
        auto* li = new ListItem();
        li->setData(QString::fromStdString(p.imie),
                    QString::fromStdString(p.nazwisko),
                    QString::fromStdString(p.typ),
                    QString::fromStdString(p.ostatniLogin));
            connect(li->getButton(), &QPushButton::clicked, this, [this, p]() {
                profilWindow->showPatientProfile(p.id);
                emit showProfileRequested(p.id);
            });
        layout->addWidget(li);
    }
    layout->addStretch();
}
void ListUser::setLabels(const std::string& what) {
    if (what == "patient") {
        ui->title->setText("Lista Pacjentów");
        ui->whatListLabel->setText("Pacjenci");
        ui->label3->setText("Pesel");
        ui->label4->setText("Nr Telefonu");
    }
    if (what == "user") {
        ui->title->setText("Lista Pracowników");
        ui->whatListLabel->setText("Pracownicy");
        ui->label3->setText("Typ");
        ui->label4->setText("Ostatnie Logowanie");
    }
}
