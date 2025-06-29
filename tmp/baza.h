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
    std::string historia;
    int nrTelefonu;
    std::string miasto;
    std::string ulica;
    int nrDomu;
    int nrMieszkania;
    std::vector<unsigned char> zdjecie_data;
};
inline std::vector<Pacjent> fetchPacjenci() {
    auto conn = baza();
    if (!conn) {
        std::cerr << "baza nie chodzi" << std::endl;
    }
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
inline Pacjent getPatientData(int patientId) {
    auto conn = baza();
    if (!conn) {
        std::cerr << "baza nie chodzi" << std::endl;
        return Pacjent();  // Zwróć domyślny obiekt Pacjent w przypadku błędu
    }

    std::unique_ptr<sql::Statement> stmt(conn->createStatement());
    std::unique_ptr<sql::ResultSet> res(stmt->executeQuery("SELECT * FROM pacjent WHERE pacjentID = " + std::to_string(patientId)));

    if (!res->next()) {
        return Pacjent();  // Zwróć domyślny obiekt jeśli nie znaleziono pacjenta
    }

    Pacjent p;
    p.id = patientId;
    p.imie = res->getString("imie");
    p.nazwisko = res->getString("nazwisko");
    p.pesel = res->getString("pesel");
    p.nrTelefonu = res->getInt("nrTelefonu");

    p.historia = res->isNull("historia") ? std::string() : static_cast<std::string>(res->getString("historia"));
    p.miasto = res->getString("miasto");
    p.ulica = res->getString("ulica");
    p.nrDomu = res->getInt("nrDomu");
    p.nrMieszkania = res->isNull("nrMieszkania") ? 0 : res->getInt("nrMieszkania");

    return p;
}


inline bool checkPeselDuplicate(const std::string& pesel) {
    auto conn = baza();
    if (!conn) {
        std::cerr << "baza nie chodzi" << std::endl;
    }
    std::unique_ptr<sql::PreparedStatement> stmt(
    conn->prepareStatement("SELECT COUNT(*) FROM pacjent WHERE pesel = ?"));
    stmt->setString(1, pesel);
    std::unique_ptr<sql::ResultSet> res(stmt->executeQuery());
    if (res->next()) {
        int count = res->getInt(1);
        return count > 0;
    }
    return false;
}
struct Lek {
    int id;
    std::string nazwa;
    int ilosc;
};
inline std::vector<Lek> fetchLeki() {
    auto conn = baza();
    if (!conn) {
        std::cerr << "baza nie chodzi" << std::endl;
    }
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
inline std::vector<Wiadomosc> fetchWiadomosci() {
    auto conn = baza();
    if (!conn) {
        std::cerr << "baza nie chodzi" << std::endl;
    }
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
inline std::string checkUserRole() {
    auto conn = baza();
    if (!conn) {
        std::cerr << "baza nie chodzi" << std::endl;
    }
    std::unique_ptr<sql::Statement> stmt(conn->createStatement());
    std::string query =
        "SELECT CASE "
        "WHEN EXISTS (SELECT 1 FROM administrator WHERE administrator.pracownikID = pracownik.pracownikID) THEN 'admin' "
        "WHEN EXISTS (SELECT 1 FROM rejestracja WHERE rejestracja.pracownikID = pracownik.pracownikID) THEN 'rejestracja' "
        "WHEN EXISTS (SELECT 1 FROM lekarz WHERE lekarz.pracownikID = pracownik.pracownikID) THEN 'lekarz' "
        "WHEN EXISTS (SELECT 1 FROM dyrektor WHERE dyrektor.pracownikID = pracownik.pracownikID) THEN 'dyrektor' "
        "WHEN EXISTS (SELECT 1 FROM sprzedawca WHERE sprzedawca.pracownikID = pracownik.pracownikID) THEN 'sprzedawca' "
        "ELSE '' END AS position "
        "FROM pracownik "
        "WHERE pracownikID = " + std::to_string(sessionUserId);
    std::unique_ptr<sql::ResultSet> res(stmt->executeQuery(query));
    if (res->next()) {
        return std::string(res->getString("position"));
    }
    return "";
}
inline std::vector<std::string> getWeek(int week) {
    std::vector<std::string> weekdays;
    auto conn = baza();
    if (!conn) {
        std::cerr << "baza nie chodzi" << std::endl;
        return weekdays;
    }
    std::unique_ptr<sql::Statement> stmt(conn->createStatement());
    std::string query = "SELECT DATE_SUB(CURDATE(), INTERVAL WEEKDAY(CURDATE()) DAY) AS weekstart";
    std::unique_ptr<sql::ResultSet> res(stmt->executeQuery(query));
    res->next();
    std::string weekstart{res->getString("weekstart")};

    std::string wsquery = "SELECT DATE_ADD('" + weekstart + "', INTERVAL " + std::to_string(week * 7) + " DAY) AS weekstart";
    std::unique_ptr<sql::ResultSet> wres(stmt->executeQuery(wsquery));
    wres->next();
    std::string wstart{wres->getString("weekstart")};

    for (int i = 0; i < 5; i++) {
        std::string dquery = "SELECT DATE_FORMAT(DATE_ADD(STR_TO_DATE('" + wstart + "', '%Y-%m-%d'), INTERVAL " + std::to_string(i) + " DAY), '%d.%m.%Y') AS day";
        std::unique_ptr<sql::ResultSet> dres(stmt->executeQuery(dquery));
        dres->next();
        weekdays.emplace_back(dres->getString("day"));
    }
    return weekdays;
}
struct Wizyta {
    std::string data;
    std::string czas;
    std::string temat;
    std::string pacjent;
};
inline std::vector<Wizyta> getAppointments(std::string date) {
    std::vector<Wizyta> appointments;
    auto conn = baza();
    if (!conn) {
        std::cerr << "baza nie chodzi" << std::endl;
        return appointments;
    }
    std::unique_ptr<sql::Statement> stmt(conn->createStatement());
    std::string query =
    "SELECT wizyta.*, pacjent.imie, pacjent.nazwisko "
    "FROM wizyta "
    "JOIN pacjent ON wizyta.pacjentID = pacjent.pacjentID "
    "WHERE wizyta.pracownikID = " + std::to_string(sessionUserId) +
    " AND wizyta.data = STR_TO_DATE('" + date + "', '%d.%m.%Y') "
    "ORDER BY wizyta.godzinaPoczatek";
    std::unique_ptr<sql::ResultSet> res(stmt->executeQuery(query));
    while (res->next()) {
        Wizyta w;
        w.data = res->getString("data");
        w.czas = res->getString("godzinaPoczatek");
        w.temat = res->getString("tytul");
        w.pacjent = res->getString("imie") + " " + res->getString("nazwisko");
        appointments.push_back(w);
    }
    return appointments;
}
inline int submitPatient(const Pacjent& p) {
    auto conn = baza();
    if (!conn) {
        std::cerr << "baza nie chodzi" << std::endl;
    }
    std::unique_ptr<sql::PreparedStatement> stmt(
        conn->prepareStatement(
            "INSERT INTO pacjent (imie, nazwisko, pesel, historia, nrTelefonu, miasto, ulica, nrDomu, nrMieszkania, zdjecie_data) "
            "VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?)"
        )
    );
    stmt->setString(1, p.imie);
    stmt->setString(2, p.nazwisko);
    stmt->setString(3, p.pesel);
    if (p.historia.empty())
        stmt->setNull(4, sql::DataType::VARCHAR);
    else
        stmt->setString(4, p.historia);
    stmt->setInt(5, p.nrTelefonu);
    stmt->setString(6, p.miasto);
    stmt->setString(7, p.ulica);
    stmt->setInt(8, p.nrDomu);
    if (p.zdjecie_data.empty()) {
        stmt->setNull(10, sql::DataType::BLOB);
    } else {
        stmt->setBlob(10, new std::istringstream(
            std::string(p.zdjecie_data.begin(), p.zdjecie_data.end())));
    }
    if (p.nrMieszkania == 0)
        stmt->setNull(9, sql::DataType::INTEGER);
    else
        stmt->setInt(9, p.nrMieszkania);
    stmt->executeUpdate();
    std::unique_ptr<sql::ResultSet> res(stmt->getGeneratedKeys());
    if (res->next())
        return res->getInt(1);
    return 0;
}

inline bool submitPrescription(const std::vector<std::pair<int, int>>& leftLek, const std::vector<Lek>& leki, int patientId) {
    if (leftLek.empty()) {
        return false;
    }
    auto conn = baza();
    if (!conn) {
        std::cerr << "baza nie chodzi" << std::endl;
        return false;
    }
        std::unique_ptr<sql::PreparedStatement> stmt(conn->prepareStatement("INSERT INTO recepta(PracownikID, PacjentID, zrealizowano) VALUES (?, ?, ?)"));
        stmt->setInt(1, sessionUserId);
        stmt->setInt(2, patientId);
        stmt->setInt(3, 0);
        stmt->executeUpdate();
        std::unique_ptr<sql::Statement> idStmt(conn->createStatement());
        std::unique_ptr<sql::ResultSet> res(idStmt->executeQuery("SELECT LAST_INSERT_ID()"));
        if (res->next()) {
            for (const auto& lid : leftLek) {
                auto it = std::find_if(leki.begin(), leki.end(), [lid](const Lek& l) {
                    return l.id == lid.first;
                });
                std::unique_ptr<sql::PreparedStatement> nStmt(conn->prepareStatement("INSERT INTO receptalek(ReceptaID, LekID, ilosc) VALUES (?, ?, ?)"));
                nStmt->setInt(1, res->getInt(1));
                nStmt->setInt(2, lid.first);
                nStmt->setInt(3, lid.second);
                nStmt->executeUpdate();
            }
        }
    return true;
}
#endif //BAZA_H