#include "listmail.h"
#include "ui_listmail.h"
#include "../baza.h"
#include <QVBoxLayout>
#include "mailitem.h"
#include <QDebug>
#include "mailext.h"

ListMail::ListMail(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ListMail)
{
    ui->setupUi(this);
    list();
}

ListMail::~ListMail()
{
    delete ui;
}

void ListMail::list() {
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
    auto messages = fetchWiadomosci();
    for (const auto& w : messages) {
        auto* mi = new MailItem();
        mi->setData(
            QString::fromStdString(w.nadawca),
            QString::fromStdString(w.tytul),
            QString::fromStdString(w.dataNadania + " " + w.czasNadania),
            QString::fromStdString(w.tresc)
        );
        layout->addWidget(mi);
        connect(mi, &MailItem::expandSignal, this, [=](MailItem* sender, bool expand) {
            if (expand) {
                auto* ext = new MailExt();
                extWidgets[sender] = ext;
                ext->setDText(sender->getText());
                int index = layout->indexOf(sender);
                layout->insertWidget(index + 1, ext);
            } else {
                if (extWidgets.contains(sender)) {
                    auto* ext = extWidgets.take(sender);
                    layout->removeWidget(ext);
                    ext->deleteLater();
                }
            }
        });
    }

    layout->addStretch();
}
