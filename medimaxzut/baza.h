#ifndef BAZA_H
#define BAZA_H
#include <mariadb/conncpp.hpp>
#include <iostream>
std::unique_ptr<sql::Connection> baza() {
    const sql::SQLString url("jdbc:mariadb://localhost:4306/bazaprzechodnia");
    const sql::Properties properties({
                {"user", "root"},
                {"password", ""}
            });
    sql::Driver* driver = sql::mariadb::get_driver_instance();
    std::unique_ptr<sql::Connection> conn(driver->connect(url, properties));
    return conn;
}
void printPacjent(sql::Connection* conn) {
    std::unique_ptr<sql::Statement> stmt(conn->createStatement());
    std::unique_ptr<sql::ResultSet> res(stmt->executeQuery("SELECT * FROM pacjent"));
    while (res->next()) {
        int id = res->getInt("PacjentID");
        std::string imie{res->getString("imie")};
        std::string nazwisko{res->getString("nazwisko")};
        std::string pesel{res->getString("pesel")};
        std::string historia = "";
        if (!(res->isNull("historia")))
            historia = res->getString("historia");
        std::string miasto{res->getString("miasto")};
        std::string ulica{res->getString("ulica")};
        int nrDomu = res->getInt("nrDomu");
        std::string nrMieszkania = "";
        if (!(res->isNull("nrMieszkania")))
            nrMieszkania = std::to_string(res->getInt("nrMieszkania"));
        std::string nrTelefonu{res->getString("nrTelefonu")};
        std::cout << id << ". " << imie << " " << nazwisko
                      << " | PESEL: " << pesel
                      << " | Tel: " << nrTelefonu
                      << " | Adres: " << ulica << " " << nrDomu;
        if (!nrMieszkania.empty()) std::cout << "/" << nrMieszkania;
        std::cout << ", " << miasto
                  << " | Historia: " << historia << "\n";
    }
}
#endif //BAZA_H