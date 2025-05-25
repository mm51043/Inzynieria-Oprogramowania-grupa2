#include "listitem.h"
#include "ui_listitem.h"

ListItem::ListItem(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ListItem)
{
    ui->setupUi(this);
}

ListItem::~ListItem()
{
    delete ui;
}

void ListItem::setData(const QString& imie, const QString& nazwisko, const QString& pesel, const QString& telefon)
{
    ui->firstNameLabel->setText(imie);
    ui->lastNameLabel->setText(nazwisko);
    ui->peselLabel->setText(pesel);
    ui->phoneLabel->setText(telefon);
}
