#ifndef BAZA_H
#define BAZA_H
#include <mariadb/conncpp.hpp>
#include <iostream>
inline std::unique_ptr<sql::Connection> baza() {
    try {
        const sql::SQLString url("jdbc:mariadb://localhost:4306/bazaprzychodnia");
        const sql::Properties properties({
                    {"user", "root"},
                    {"password", ""}
                });
        sql::Driver* driver = sql::mariadb::get_driver_instance();
        std::unique_ptr<sql::Connection> conn(driver->connect(url, properties));
        return conn;
    } catch (const sql::SQLException& e) {
        std::cerr << "Error connecting to DB: " << e.what() << std::endl;
        return nullptr;
    }
}
struct Pacjent {
    int id;
    std::string imie;
    std::string nazwisko;
    std::string pesel;
    int nrTelefonu;
};
inline std::vector<Pacjent> fetchPacjenci(sql::Connection* conn) {
    std::vector<Pacjent> pacjenci;
    std::unique_ptr<sql::Statement> stmt(conn->createStatement());
    std::unique_ptr<sql::ResultSet> res(stmt->executeQuery("SELECT * FROM pacjent"));

    while (res->next()) {
        Pacjent p;
        p.id = res->getInt("PacjentID");
        p.imie = res->getString("imie");
        p.nazwisko = res->getString("nazwisko");
        p.pesel = res->getString("pesel");
        p.nrTelefonu = res->getInt("nrTelefonu");
        pacjenci.push_back(p);
    }

    return pacjenci;
}
#endif //BAZA_H