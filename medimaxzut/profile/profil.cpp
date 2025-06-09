#include "profil.h"
#include <QDebug>

Profil::Profil(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.profilePhoto->setAlignment(Qt::AlignCenter);
    ui.profilePhoto->setScaledContents(true);
}

void Profil::showPatientProfile(int patientId)
{
    Pacjent p = getPatientData(patientId);

    if (p.id == 0) {
        qDebug() << "Nie znaleziono pacjenta o ID:" << patientId;
        return;
    }

    ui.NameLabel_3->setText(QString::fromStdString(p.imie + " " + p.nazwisko));
    ui.PeselLabel_2->setText("PESEL: " + QString::fromStdString(p.pesel));
    ui.CTLabel_2->setText("Tel: " + QString::number(p.nrTelefonu));
    ui.pnstLabel_2->setText("Kraj: Polska");
    ui.MiastoLabel_2->setText("Miasto: " + QString::fromStdString(p.miasto));
    ui.PeselLabel_7->setText("Ulica: " + QString::fromStdString(p.ulica + " " +
                          std::to_string(p.nrDomu) +
                          (p.nrMieszkania > 0 ? "/" + std::to_string(p.nrMieszkania) : "")));
    ui.PeselLabel_8->setText("Nr pacjenta: " + QString::number(p.id));
        showDefaultPhoto();

    this->show();
}

void Profil::showDefaultPhoto()
{
    QPixmap defaultPhoto(":/images/default_profile.png");
    if (!defaultPhoto.isNull()) {
        ui.profilePhoto->setPixmap(defaultPhoto.scaled(ui.profilePhoto->size(),
            Qt::KeepAspectRatio, Qt::SmoothTransformation));
    } else {
        qDebug() << "Failed to load default profile photo";
        ui.profilePhoto->setText("No Image");
    }
}