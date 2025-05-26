#include "prescriptionwindow.h"
#include "ui_prescriptionwindow.h"

prescriptionWindow::prescriptionWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::prescriptionWindow)
{
    ui->setupUi(this);
}

prescriptionWindow::~prescriptionWindow()
{
    delete ui;
}
