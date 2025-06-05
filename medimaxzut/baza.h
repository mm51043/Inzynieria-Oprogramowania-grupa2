#ifndef BAZA_H
#define BAZA_H
#include <mariadb/conncpp.hpp>
#include <iostream>
#include "session.h"
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
        std::cerr << e.what() << std::endl;
        return nullptr;
    }
}
inline void setSessionUserName() {
    auto conn = baza();
    if (!conn) {
        std::cerr << "baza nie chodzi" << std::endl;
    }
    std::unique_ptr<sql::Statement> stmt(conn->createStatement());
    std::unique_ptr<sql::ResultSet> res(stmt->executeQuery("SELECT * FROM pracownik WHERE PracownikID = " + std::to_string(sessionUserId)));
    if (res->next()) {
        sessionUserName = res->getString("imie") + " " + res->getString("nazwisko");
    } else {
        qDebug() << "Nie ma usera";
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
struct Lek {
    int id;
    std::string nazwa;
    int ilosc;
};
inline std::vector<Lek> fetchLeki(sql::Connection* conn) {
    std::vector<Lek> leki;
    std::unique_ptr<sql::Statement> stmt(conn->createStatement());
    std::unique_ptr<sql::ResultSet> res(stmt->executeQuery("SELECT * FROM lek"));

    while (res->next()) {
        Lek l;
        l.id = res->getInt("LekID");
        l.nazwa = res->getString("nazwa");
        l.ilosc = res->getInt("iloscMagazyn");
        leki.push_back(l);
    }

    return leki;
}
struct Wiadomosc {
    int id;
    std::string nadawca;
    std::string tytul;
    std::string dataNadania;
    std::string czasNadania;
    std::string tresc;
};
inline std::vector<Wiadomosc> fetchWiadomosci(sql::Connection* conn) {
    std::vector<Wiadomosc> wiadomosci;
    std::unique_ptr<sql::Statement> stmt(conn->createStatement());
    std::unique_ptr<sql::ResultSet> res(stmt->executeQuery("SELECT WiadomoscID, CONCAT(p.imie, ' ', p.nazwisko) AS nazwaNadawcy, tytul, dataNadania, czasNadania, tresc FROM `wiadomosci` JOIN pracownik as p ON p.PracownikID = nadawca ORDER BY dataNadania DESC, czasNadania DESC"));

    while (res->next()) {
        Wiadomosc w;
        w.id = res->getInt("WiadomoscID");
        w.nadawca = res->getString("nazwaNadawcy");
        w.tytul = res->getString("tytul");
        w.dataNadania = res->getString("dataNadania");
        w.czasNadania = res->getString("czasNadania");
        w.tresc = res->getString("tresc");
        wiadomosci.push_back(w);
    }

    return wiadomosci;
}
#endif //BAZA_H