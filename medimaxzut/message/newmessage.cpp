#include "newmessage.h"
#include "ui_newmessage.h"
#include "../baza.h"

NewMessage::NewMessage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NewMessage)
{
    ui->setupUi(this);
    connect(ui->sendButton, &QPushButton::clicked, this, [this]() {
        submit();
        clear();
    });
    connect(ui->clearButton, &QPushButton::clicked, this, [this]() {
        clear();
    });
}

NewMessage::~NewMessage()
{
    delete ui;
}
void NewMessage::clear() {
    ui->msgTitle->clear();
    ui->textField->clear();
}
void NewMessage::submit() {
    QString title = ui->msgTitle->text().trimmed();
    QString message = ui->textField->toPlainText().trimmed();

    if (title.isEmpty() || message.isEmpty()) {
        return;
    }

    //sendMessage(message.toStdString(), title.toStdString());
}
