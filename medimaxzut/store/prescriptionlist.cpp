#include "prescriptionlist.h"
#include "ui_prescriptionlist.h"
#include "../mainWindow/mainwindow.h"
#include "../baza.h"
#include "prescriptionlistitem.h"

PrescriptionList::PrescriptionList(MainWindow* mainWindow, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PrescriptionList)
    , mainWindow(mainWindow)
{
    ui->setupUi(this);
}

PrescriptionList::~PrescriptionList()
{
    delete ui;
}
void PrescriptionList::listPrescriptions(){
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
    for (const auto pracownicy = fetchRecepty(); const auto& p : pracownicy) {
        auto* li = new PrescriptionListItem();
        li->setData(QString::fromStdString(p.pimie + " " + p.pnazwisko),
                    QString::fromStdString(p.dimie + " " + p.dnazwisko));
        li->getButton()->setText("Wybierz");
        connect(li->getButton(), &QPushButton::clicked, this, [this]() {

        });
        layout->addWidget(li);
    }
    layout->addStretch();
}
