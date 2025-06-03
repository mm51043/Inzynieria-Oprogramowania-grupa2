#include "mailitem.h"
#include "ui_mailitem.h"
#include <QDebug>

MailItem::MailItem(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MailItem)
    , expanded(false)
{
    ui->setupUi(this);
    connect(ui->mailButton, &QPushButton::clicked, this, &MailItem::toggle);
}

MailItem::~MailItem()
{
    delete ui;
}

void MailItem::setData(const QString& sender, const QString& title, const QString& date, const QString& msg)
{
    ui->mailSender->setText(sender);
    ui->mailTitle->setText(title);
    ui->date->setText(date);
    details = msg;
}
QString MailItem::getText() const {
    return details;
}
void MailItem::toggle() {
    expanded = !expanded;
    if (expanded)
        ui->mailButton->setText("Zwiń");
    else
        ui->mailButton->setText("Rozwiń");

    emit expandSignal(this, expanded);
}