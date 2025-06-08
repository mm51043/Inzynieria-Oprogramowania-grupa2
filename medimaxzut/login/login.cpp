#include "loginWindow.h"
#include "..\mainWindow\mainwindow.h"
#include <QDebug>
#include "../session.h"
#include "../baza.h"

LoginWindow::LoginWindow(QWidget *parent) : QMainWindow(parent) {
    ui.setupUi(this);
    connect(ui.loginUsername, &QLineEdit::returnPressed, this, &LoginWindow::onEnter);
    connect(ui.loginPassword, &QLineEdit::returnPressed, this, &LoginWindow::onEnter);
    connect(ui.loginButton, &QPushButton::clicked, this, &LoginWindow::onEnter);
}

void LoginWindow::onEnter() {
    QString name = ui.loginUsername->text();
    QString pwd = ui.loginPassword->text();
    if (true) {
        sessionUserId = 1;
        setSessionUserName();
        emit loginPass();
    }
}
