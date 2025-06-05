#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "navibutton.h"
#include "../mailList/listmail.h"
#include "../userList/listuser.h"
#include "../prescriptionAdd/prescriptionwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("MediMaxZut");
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
void MainWindow::setWelcomeUserName(const std::string& userName) {
    ui->welcomeLabel->setText(QString::fromStdString("Witaj, " + userName));
}
void MainWindow::showPatientList(bool prescription) {
    QLayout *layout = ui->MainPanel->layout();

    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (item->widget()) {
            item->widget()->deleteLater();
        }
        delete item;
    }

    auto *listUserWidget = new ListUser();
    connect(listUserWidget, &ListUser::userPicked, this, &MainWindow::showPrescAdd);
    listUserWidget->setLabels("patient");
    if (prescription) {
        qDebug() << "prescription";
        listUserWidget->setPrescription();
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

    auto *listUserWidget = new ListMail();
    layout->addWidget(listUserWidget);
}

void MainWindow::showPrescAdd(int patientId) {

    QLayout *layout = ui->MainPanel->layout();

    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (item->widget()) {
            item->widget()->deleteLater();
        }
        delete item;
    }
    auto *listUserWidget = new PrescWindow();
    listUserWidget->setPatientId(patientId);
    layout->addWidget(listUserWidget);
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
                showPatientList(false);
            });
        }
        if (name == "Dodaj Receptę") {
            connect(btn->pushButton, &QPushButton::clicked, this, [this]() {
                showPatientList(true);
            });
        }
    }
    layout->addStretch();
}
