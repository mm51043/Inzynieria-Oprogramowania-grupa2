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
        std::string user = checkUserRole(sessionUserId);
        if (user == "admin") {
     mpw.navigation(adminButtons);
 } else if (user == "dyrektor") {
     mpw.navigation(bossButtons);
 } else if (user == "lekarz") {
     mpw.navigation(doctorButtons);
 } else if (user == "recepcja") {
     mpw.navigation(recButtons);
 } else if (user == "sprzedawca") {
     mpw.navigation(salesButtons);
 }
    });

    lgw.show();
    return QApplication::exec();
}
