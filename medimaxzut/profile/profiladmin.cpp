#include "profiladmin.h"
#include "ui_profiladmin.h"
#include <QDebug>
#include <QLineEdit>
#include <QMessageBox>
#include <QPushButton>

Profiladmin::Profiladmin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::profiladmin),
    isEditMode(false)
{
    ui->setupUi(this);
    currentWorkerId = -1;

    // Inicjalizacja widgetów edycyjnych
    nameEdit = new QLineEdit(this);
    peselEdit = new QLineEdit(this);
    phoneEdit = new QLineEdit(this);
    roleEdit = new QLineEdit(this);

    nameEdit->setGeometry(ui->NameLabel_3->geometry());
    peselEdit->setGeometry(ui->PeselLabel_2->geometry());
    phoneEdit->setGeometry(ui->CTLabel_2->geometry());
    roleEdit->setGeometry(ui->pnstLabel_2->geometry());

    nameEdit->setVisible(false);
    peselEdit->setVisible(false);
    phoneEdit->setVisible(false);
    roleEdit->setVisible(false);

    connect(ui->AdminEdytuj, &QPushButton::clicked, this, &Profiladmin::onEditSaveButtonClicked);
}

void Profiladmin::toggleEditMode() {
    isEditMode = !isEditMode;

    // Przełącz widoczność widgetów
    ui->NameLabel_3->setVisible(!isEditMode);
    ui->PeselLabel_2->setVisible(!isEditMode);
    ui->CTLabel_2->setVisible(!isEditMode);
    ui->pnstLabel_2->setVisible(!isEditMode);

    nameEdit->setVisible(isEditMode);
    peselEdit->setVisible(isEditMode);
    phoneEdit->setVisible(isEditMode);
    roleEdit->setVisible(isEditMode);

    ui->AdminEdytuj->setText(isEditMode ? "Zapisz" : "Edytuj");
}

void Profiladmin::onEditSaveButtonClicked() {
    if (isEditMode) {
        auto conn = baza();
        if (!conn) {
            qDebug() << "Błąd połączenia z bazą danych";
            return;
        }

        try {
            std::unique_ptr<sql::Statement> stmt(conn->createStatement());
            QString fullName = nameEdit->text();
            QStringList nameParts = fullName.split(" ");
            QString imie = nameParts.value(0);
            QString nazwisko = nameParts.value(1);
            QString pesel = peselEdit->text();
            QString nrTelefonu = phoneEdit->text();

            std::string query = "UPDATE pracownik SET "
                              "imie = '" + imie.toStdString() + "', "
                              "nazwisko = '" + nazwisko.toStdString() + "', "
                              "pesel = '" + pesel.toStdString() + "', "
                              "nrTelefonu = '" + nrTelefonu.toStdString() + "' "
                              "WHERE PracownikID = " + std::to_string(currentWorkerId);

            stmt->executeUpdate(query);

            QMessageBox::information(this, "Sukces", "Dane zostały zaktualizowane.");
            showWorkerProfile(currentWorkerId); // Odśwież dane
        } catch (sql::SQLException& e) {
            qDebug() << "SQL error:" << e.what();
            QMessageBox::critical(this, "Błąd", "Nie udało się zaktualizować danych.");
        }
    }
  toggleEditMode();
}

void Profiladmin::showWorkerProfile(int workerId) {
    currentWorkerId = workerId;
    auto conn = baza();
    if (!conn) {
        qDebug() << "Błąd połączenia z bazą danych";
        return;
    }

    try {
        std::unique_ptr<sql::Statement> stmt(conn->createStatement());
        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery(
            "SELECT * FROM pracownik WHERE PracownikID = " + std::to_string(workerId)));

        if (res->next()) {
            std::string imie = sqlToString(res->getString("imie"));
            std::string nazwisko = sqlToString(res->getString("nazwisko"));
            QString fullName = QString::fromStdString(imie + " " + nazwisko);
            ui->NameLabel_3->setText(fullName);
            nameEdit->setText(fullName);

            std::string pesel = static_cast<std::string>(res->getString("pesel"));
            ui->PeselLabel_2->setText("PESEL: " + QString::fromStdString(pesel));
            peselEdit->setText(QString::fromStdString(pesel));

            std::string nrTelefonu = static_cast<std::string>(res->getString("nrTelefonu"));
            ui->CTLabel_2->setText("Tel: " + QString::fromStdString(nrTelefonu));
            phoneEdit->setText(QString::fromStdString(nrTelefonu));

            ui->PeselLabel_8->setText("ID: " + QString::number(workerId));

            std::string role = checkUserRole(workerId);
            QString roleText = "Rola: " + QString::fromStdString(capitalize(role));
            ui->pnstLabel_2->setText(roleText);
            roleEdit->setText(QString::fromStdString(role));

            std::string ostatniLogin = static_cast<std::string>(res->getString("ostatniLogin"));
            ui->MiastoLabel_2->setText("Ostatnie logowanie: " + QString::fromStdString(ostatniLogin));
        }
    } catch (sql::SQLException& e) {
        qDebug() << "SQL error:" << e.what();
    }

    if (isEditMode) {
        toggleEditMode();
    }
}

void Profiladmin::showDefaultPhoto() {
}