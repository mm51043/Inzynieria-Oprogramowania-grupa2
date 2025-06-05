#include "listuser.h"
#include "ui_listuser.h"
#include "listitem.h"
#include "ui_listitem.h"
#include "../baza.h"
#include <QVBoxLayout>

ListUser::ListUser(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ListUser)
{
    ui->setupUi(this);
    list();
}

ListUser::~ListUser()
{
    delete ui;
}
void ListUser::setPrescription(){
    prescription = true;
    list();
}
void ListUser::list() {
        QVBoxLayout* layout = qobject_cast<QVBoxLayout*>(ui->List->layout());
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
        auto conn = baza();
        if (!conn) {
            qDebug() << "baza nie chodzi";
        }
    else {
        auto pacjenci = fetchPacjenci(conn.get());

        for (const auto& p : pacjenci) {
            auto* li = new ListItem();
            li->setData(QString::fromStdString(p.imie),
                        QString::fromStdString(p.nazwisko),
                        QString::fromStdString(p.pesel),
                        QString::number(p.nrTelefonu));
            if (prescription) {
                connect(li->getButton(), &QPushButton::clicked, this, [this, p]() {
                    qDebug() << "clicked " + p.id;
                    emit userPicked(p.id);
                });
            }
            layout->addWidget(li);
        }
    }
        layout->addStretch();
}

void ListUser::setLabels(const std::string& what) {
    if (what == "patient") {
        ui->label3->setText("Pesel");
        ui->label4->setText("Nr Telefonu");
    }
    if (what == "user") {
        ui->label3->setText("Typ");
        ui->label4->setText("Ostatnie Logowanie");
    }
}
