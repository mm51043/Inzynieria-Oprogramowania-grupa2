#include "scheduleview.h"
#include "ui_scheduleview.h"

ScheduleView::ScheduleView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ScheduleView)
{
    ui->setupUi(this);
}

ScheduleView::~ScheduleView()
{
    delete ui;
}
