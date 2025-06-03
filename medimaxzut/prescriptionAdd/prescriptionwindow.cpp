#include "prescriptionwindow.h"
#include "ui_prescriptionwindow.h"
#include "prescriptionitem.h"
#include <QVBoxLayout>
#include "../baza.h"

PrescWindow::PrescWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PrescWindow)
{
    ui->setupUi(this);
    rlist();
}

PrescWindow::~PrescWindow()
{
    delete ui;
}
void PrescWindow::rlist() {
    QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->rightList->layout());
    if (!layout) {
        layout = new QVBoxLayout(ui->rightList);
        ui->rightList->setLayout(layout);
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
    auto conn = baza();
    if (!conn) {
        qDebug() << "baza nie chodzi";
    }
    else {
        auto leki = fetchLeki(conn.get());

        for (const auto& l : leki) {
            auto* li = new PrescriptionItem();
            li->setData(QString::fromStdString(l.nazwa),
                        QString::number(l.ilosc));
            layout->addWidget(li);
        }
    }
    layout->addStretch();
}
void PrescWindow::llist() {
    QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->rightList->layout());
    if (!layout) {
        layout = new QVBoxLayout(ui->rightList);
        ui->rightList->setLayout(layout);
    }
    
}