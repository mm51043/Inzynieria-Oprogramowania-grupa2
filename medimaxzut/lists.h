#ifndef LISTS_H
#define LISTS_H
#include <QVBoxLayout>
#include <qwidget.h>

#include "baza.h"
// void generateList(const &ui) {
//     auto layout = qobject_cast<QVBoxLayout*>(ui->docList->layout());
//     if (!layout) {
//         layout = new QVBoxLayout(ui->docList);
//         ui->docList->setLayout(layout);
//     }
//     QLayoutItem *child;
//     while ((child = layout->takeAt(0)) != nullptr) {
//         if (child->widget()) {
//             child->widget()->deleteLater();
//         }
//         delete child;
//     }
//     auto lekarze = getDoctor();
//     layout->setContentsMargins(0, 5, 0, 5);
//     layout->setSpacing(5);
//     for (const auto& l : lekarze) {
//         auto* li = new NewPatientDoctorListItem();
//         li->setData(QString::fromStdString(l.imie), QString::fromStdString(l.nazwisko), QString::fromStdString(std::to_string(l.nrGabinetu)));
//         connect(li->getButton(), &QPushButton::clicked, this, [this, l]() {
//             setDoctor(l.id);
//         });
//         layout->addWidget(li);
//     }
//     layout->addStretch();
// }
#endif //LISTS_H
