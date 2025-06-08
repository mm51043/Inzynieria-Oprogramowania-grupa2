#include "schedulecellempty.h"
#include "ui_schedulecellempty.h"

ScheduleCellEmpty::ScheduleCellEmpty(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ScheduleCellEmpty)
{
    ui->setupUi(this);
}

ScheduleCellEmpty::~ScheduleCellEmpty()
{
    delete ui;
}
QPushButton* ScheduleCellEmpty::getButton() {
    return ui->pushButton;
}
