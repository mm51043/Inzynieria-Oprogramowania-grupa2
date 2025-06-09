#include "newmessage.h"
#include "ui_newmessage.h"

NewMessage::NewMessage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NewMessage)
{
    ui->setupUi(this);
}

NewMessage::~NewMessage()
{
    delete ui;
}
