#include "profil.h"
#include <QDebug>

Profil::Profil(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

void Profil::showPatientProfile(int patientId)
{
    Pacjent p = getPatientData(patientId);

    if (p.id == 0) {
        qDebug() << "Nie znaleziono pacjenta o ID:" << patientId;
        return;
    }

    // Ustawiamy dane w UI
    ui.NameLabel_3->setText(QString::fromStdString(p.imie + " " + p.nazwisko));
    ui.PeselLabel_2->setText("PESEL: " + QString::fromStdString(p.pesel));
    ui.CTLabel_2->setText("Tel: " + QString::number(p.nrTelefonu));
    ui.pnstLabel_2->setText("Kraj: Polska"); // Stała wartość, bo nie mamy w bazie
    ui.MiastoLabel_2->setText("Miasto: " + QString::fromStdString(p.miasto));
    ui.PeselLabel_7->setText("Ulica: " + QString::fromStdString(p.ulica + " " +
                              std::to_string(p.nrDomu) +
                              (p.nrMieszkania > 0 ? "/" + std::to_string(p.nrMieszkania) : "")));
    ui.PeselLabel_8->setText("Nr pacjenta: " + QString::number(p.id));

    this->show(); // Pokazujemy okno profilu
}
