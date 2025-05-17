#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <mariadb/conncpp.hpp>
#include "baza.h"
int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);
    std::cout << "Hello World" << std::endl;
    std::unique_ptr<sql::Connection> conn = baza();
    printPacjent(conn.get());
    qDebug() << "Hello World";
    return QCoreApplication::exec();
}