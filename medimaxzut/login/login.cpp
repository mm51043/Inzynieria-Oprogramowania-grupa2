#include "loginWindow.h"
#include "..\mainWindow\mainwindow.h"
#include <QDebug>
#include "../session.h"
#include "../baza.h"
#include "login.h"

#include <QMessageBox>

LoginWindow::LoginWindow(QWidget *parent) : QMainWindow(parent) {
    ui.setupUi(this);
    connect(ui.loginUsername, &QLineEdit::returnPressed, this, &LoginWindow::onEnter);
    connect(ui.loginPassword, &QLineEdit::returnPressed, this, &LoginWindow::onEnter);
    connect(ui.loginButton, &QPushButton::clicked, this, &LoginWindow::onEnter);
}

void LoginWindow::onEnter() {
    QString name = ui.loginUsername->text();
    QString pwd = ui.loginPassword->text();
    std::string usernameStd = name.toStdString();
    std::string passwordStd = pwd.toStdString();
    if (checkPassword(usernameStd, std::to_string(hashP(passwordStd)))) {
        sessionUserId = 1;
        setSessionUserName();
        emit loginPass();
    } else {
        QMessageBox::warning(this, "Błąd logowania", "Zły login lub hasło");
    }
}
