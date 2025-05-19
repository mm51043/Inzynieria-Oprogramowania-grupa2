#include "loginWindow.h"
#include "..\mainWindow\mainwindow.h"
#include <QDebug>

LoginWindow::LoginWindow(QWidget *parent) : QMainWindow(parent) {
    ui.setupUi(this);
    connect(ui.loginUsername, &QLineEdit::returnPressed, this, &LoginWindow::onEnter);
    connect(ui.loginPassword, &QLineEdit::returnPressed, this, &LoginWindow::onEnter);
    connect(ui.loginButton, &QPushButton::clicked, this, &LoginWindow::onEnter);
}

void LoginWindow::onEnter() {
    QString name = ui.loginUsername->text();
    QString pwd = ui.loginPassword->text();
    qDebug() << "login " << name;
    qDebug() << "haslo " << pwd;
    if (true) {
        emit loginPass();
    }
}
