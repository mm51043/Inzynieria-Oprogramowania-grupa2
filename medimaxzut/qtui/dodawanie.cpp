#include "dodawanie.h"
#include "ui_dodawanie.h"
#include <QMessageBox>


dodawanie::dodawanie(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::dodawanie)
    , harmonogramWizyta(nullptr)
{
    ui->setupUi(this);

    connect(ui->pushButton_2, &QPushButton::clicked, this, &dodawanie::on_pushButton_2_clicked);

}

dodawanie::~dodawanie()
{
    delete ui;
    delete harmonogramWizyta;
}

void DodawaniaWizyt::on_pushButton_2_clicked()
{
    if (!harmonogramWizyta) {
        harmonogramWizyta = new HarmonogramWizyta(this);
    }
    harmonogramWizyta->show();
}