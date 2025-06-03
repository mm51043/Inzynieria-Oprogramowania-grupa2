#include "mailext.h"
#include "ui_mailext.h"

MailExt::MailExt(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MailExt)
{
    ui->setupUi(this);
}

MailExt::~MailExt()
{
    delete ui;
}
void MailExt::setDText(const QString& text) {
    ui->labelDetails->setText(text);
}