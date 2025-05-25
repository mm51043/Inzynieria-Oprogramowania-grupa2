#include "navibutton.h"
#include "ui_navibutton.h"

NaviButton::NaviButton(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NaviButton)
{
    ui->setupUi(this);
    pushButton = ui->pushButton;
}

NaviButton::~NaviButton()
{
    delete ui;
}

void NaviButton::setText(const QString &text)
{
    ui->pushButton->setText(text);
}

QString NaviButton::text() const
{
    return ui->pushButton->text();
}

QPushButton* NaviButton::button() const
{
    return ui->pushButton;
}