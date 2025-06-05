#include <QApplication>
#include <QDebug>
#include "login/loginWindow.h"
#include <iostream>
#include <mariadb/conncpp.hpp>
#include "baza.h"
#include "mainWindow/buttonname.h"
#include "mainWindow/mainwindow.h"
#include "session.h"
int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    LoginWindow lgw;
    MainWindow mpw;
    QObject::connect(&lgw, &LoginWindow::loginPass, [&]() {
        lgw.close();
        mpw.setWelcomeUserName(sessionUserName);
        mpw.showMaximized();
        std::string user = "dyrektor";
        if (user == "admin") {
            mpw.navigation(adminButtons);
        } else if (user == "dyrektor") {
            mpw.navigation(dyrektorButtons);
        }
    });

    lgw.show();
    return QApplication::exec();
}
