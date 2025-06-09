#ifndef BAZA_H
#define BAZA_H
#include <mariadb/conncpp.hpp>
#include <iostream>
#include "session.h"
#include "login/login.h"
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
inline bool checkPassword(const std::string& username, const std::string& passwordHash) {
    auto conn = baza();
    if (!conn) {
        std::cerr << "baza nie chodzi" << std::endl;
        return 0;
    }
    std::unique_ptr<sql::PreparedStatement> stmt(
        conn->prepareStatement("SELECT PracownikID FROM pracowniklogin WHERE login = ? AND hasloHash = ?")
    );
    stmt->setString(1, username);
    stmt->setString(2, passwordHash);
    std::unique_ptr<sql::ResultSet> res(stmt->executeQuery());

    if (res->next()) {
        return true;
    }
    return false;
}
inline std::string sqlToString(const sql::SQLString& sqlStr) {
    return static_cast<std::string>(sqlStr);
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
        return Pacjent();
    }

    std::unique_ptr<sql::Statement> stmt(conn->createStatement());
    std::unique_ptr<sql::ResultSet> res(stmt->executeQuery("SELECT * FROM pacjent WHERE pacjentID = " + std::to_string(patientId)));

    if (!res->next()) {
        return Pacjent();
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
inline std::vector<Wiadomosc> fetchWiadomosci(int id) {
    auto conn = baza();
    if (!conn) {
        std::cerr << "baza nie chodzi" << std::endl;
    }
    std::vector<Wiadomosc> wiadomosci;
    std::unique_ptr<sql::Statement> stmt(conn->createStatement());
    std::unique_ptr<sql::ResultSet> res(stmt->executeQuery("SELECT WiadomoscID, CONCAT(p.imie, ' ', p.nazwisko) AS nazwaNadawcy, tytul, dataNadania, czasNadania, tresc FROM `wiadomosci` JOIN pracownik as p ON p.PracownikID = nadawca WHERE odbiorca = " + std::to_string(id) + " ORDER BY dataNadania DESC, czasNadania DESC; "));

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
inline std::string checkUserRole(int id) {
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
        "WHERE pracownikID = " + std::to_string(id);
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
inline std::vector<Wizyta> getAppointments(std::string date, int doctorid) {
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
    "WHERE wizyta.pracownikID = " + std::to_string(doctorid) +
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
    try {
        std::unique_ptr<sql::PreparedStatement> stmt(
            conn->prepareStatement(
                "INSERT INTO pacjent (imie, nazwisko, pesel, historia, nrTelefonu, miasto, ulica, nrDomu, nrMieszkania) "
                "VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)",
                sql::Statement::RETURN_GENERATED_KEYS
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

        if (p.nrMieszkania == 0)
            stmt->setNull(9, sql::DataType::INTEGER);
        else
            stmt->setInt(9, p.nrMieszkania);
        stmt->executeUpdate();
        std::unique_ptr<sql::ResultSet> res(stmt->getGeneratedKeys());
        if (res->next())
            return res->getInt(1);
    } catch (sql::SQLException& e) {
        std::cerr << "SQL error: " << e.what() << "\n"
                  << "MySQL error code: " << e.getErrorCode() << "\n"
                  << "SQLState: " << e.getSQLState() << std::endl;
    } catch (std::exception& e) {
        std::cerr << "Standard exception: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception occurred." << std::endl;
    }
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
struct Lekarz {
    int id;
    std::string imie;
    std::string nazwisko;
    std::string pesel;
    std::string nrTelefonu;
    int nrGabinetu;
};
inline std::vector<Lekarz> getDoctor() {
    auto conn = baza();
    if (!conn) {
        std::cerr << "baza nie chodzi" << std::endl;
        return{};
    }
    std::vector<Lekarz> l;
    std::unique_ptr<sql::Statement> stmt(conn->createStatement());
    std::unique_ptr<sql::ResultSet> res(stmt->executeQuery("SELECT p.pracownikID, p.imie, p.nazwisko, p.pesel, p.nrTelefonu, l.nrGabinetu FROM pracownik as p INNER JOIN lekarz as l ON p.pracownikID = l.pracownikID"));
    while (res->next()) {
        Lekarz d;
        d.id = res->getInt("pracownikID");
        d.imie = res->getString("imie");
        d.nazwisko = res->getString("nazwisko");
        d.pesel = res->getString("pesel");
        d.nrTelefonu = res->getString("nrTelefonu");
        d.nrGabinetu = res->getInt("nrGabinetu");
        l.push_back(d);
    }
    return l;
}
inline Lekarz getDoctorData(int doctorid) {
    auto conn = baza();
    if (!conn) {
        std::cerr << "baza nie chodzi" << std::endl;
        return{};
    }
    std::unique_ptr<sql::Statement> stmt(conn->createStatement());
    std::unique_ptr<sql::ResultSet> res(stmt->executeQuery("SELECT p.pracownikID, p.imie, p.nazwisko, p.pesel, p.nrTelefonu, l.nrGabinetu FROM pracownik as p INNER JOIN lekarz as l ON p.pracownikID = l.pracownikID WHERE p.pracownikId = " + std::to_string(doctorid)));
    res->next();
    Lekarz d;
    d.id = res->getInt("pracownikID");
    d.imie = res->getString("imie");
    d.nazwisko = res->getString("nazwisko");
    d.pesel = res->getString("pesel");
    d.nrTelefonu = res->getString("nrTelefonu");
    d.nrGabinetu = res->getInt("nrGabinetu");
    return d;
}

inline bool insertAppointment(int doctorId, int patientId, std::string date, std::string time, std::string title) {
    auto conn = baza();
    if (!conn) {
        std::cerr << "baza nie chodzi" << std::endl;
    }
    try {
        std::unique_ptr<sql::PreparedStatement> nStmt(
            conn->prepareStatement(
       "INSERT INTO wizyta "
            "(PracownikID, PacjentID, godzinaPoczatek, godzinaKoniec, zakonczone, tytul, data) "
            "VALUES (?, ?, STR_TO_DATE(?, '%H:%i:%s'), DATE_ADD(STR_TO_DATE(?, '%H:%i:%s'), INTERVAL 1 HOUR), 0, ?, STR_TO_DATE(?, '%d.%m.%Y'))"));
        nStmt->setInt(1, doctorId);
        nStmt->setInt(2, patientId);
        nStmt->setString(3, time);
        nStmt->setString(4, time);
        if (title.empty()) {
            nStmt->setNull(5, sql::DataType::VARCHAR);
        } else {
            nStmt->setString(5, title);
        }
        nStmt->setString(6, date);
        nStmt->executeUpdate();
        return true;
    } catch (const sql::SQLException &e) {
        std::cerr << date << time << "baza: " << e.what() << std::endl;
        return false;
    }

}

inline bool deleteWorker(int workerId) {
    auto conn = baza();
    if (!conn) {
        std::cerr << "Błąd połączenia z bazą danych" << std::endl;
        return false;
    }

    try {
        std::unique_ptr<sql::PreparedStatement> stmt(
            conn->prepareStatement("DELETE FROM pracownik WHERE PracownikID = ?")
        );
        stmt->setInt(1, workerId);
        int affectedRows = stmt->executeUpdate();
        return affectedRows > 0;
    } catch (const sql::SQLException& e) {
        std::cerr << "Błąd SQL przy usuwaniu pracownika: " << e.what() << std::endl;
        return false;
    }
}
inline bool updatePatient(const Pacjent& p) {
    auto conn = baza();
    if (!conn) {
        std::cerr << "Błąd połączenia z bazą danych" << std::endl;
        return false;
    }

    try {
        std::unique_ptr<sql::PreparedStatement> stmt(
            conn->prepareStatement(
                "UPDATE pacjent SET "
                "imie = ?, nazwisko = ?, pesel = ?, historia = ?, "
                "nrTelefonu = ?, miasto = ?, ulica = ?, nrDomu = ?, nrMieszkania = ? "
                "WHERE PacjentID = ?"
            )
        );

        stmt->setString(1, p.imie);
        stmt->setString(2, p.nazwisko);
        stmt->setString(3, p.pesel);
        if (p.historia.empty()) {
            stmt->setNull(4, sql::DataType::VARCHAR);
        } else {
            stmt->setString(4, p.historia);
        }
        stmt->setInt(5, p.nrTelefonu);
        stmt->setString(6, p.miasto);
        stmt->setString(7, p.ulica);
        stmt->setInt(8, p.nrDomu);
        if (p.nrMieszkania == 0) {
            stmt->setNull(9, sql::DataType::INTEGER);
        } else {
            stmt->setInt(9, p.nrMieszkania);
        }
        stmt->setInt(10, p.id);

        int affectedRows = stmt->executeUpdate();
        return affectedRows > 0;
    } catch (const sql::SQLException& e) {
        std::cerr << "Błąd SQL przy aktualizacji pacjenta: " << e.what() << std::endl;
        return false;
    }
}

inline std::string capitalize(const std::string& role) {
    std::string position = role;
    position[0] = static_cast<char>(std::toupper(position[0]));
    return position;
}
struct Pracownik {
    int id;
    std::string imie;
    std::string nazwisko;
    std::string ostatniLogin;
    std::string typ;
};

inline std::vector<Pracownik> fetchPracownicy() {
    std::vector<Pracownik> pracownicy;
    auto conn = baza();
    if (!conn) {
        std::cerr << "baza nie chodzi" << std::endl;
        return pracownicy;
    }

    std::unique_ptr<sql::PreparedStatement> stmt(
        conn->prepareStatement("SELECT PracownikID, imie, nazwisko, ostatniLogin FROM Pracownik"));
    std::unique_ptr<sql::ResultSet> res(stmt->executeQuery());

    while (res->next()) {
        Pracownik p;
        p.id = res->getInt("PracownikID");
        p.imie = res->getString("imie");
        p.nazwisko = res->getString("nazwisko");
        p.ostatniLogin = res->getString("ostatniLogin");
        p.typ = capitalize(checkUserRole(p.id));
        pracownicy.push_back(p);
    }
    return pracownicy;

}
inline void sendMessage(std::string message, std::string title, int userid) {
    auto conn = baza();
    if (!conn) {
        std::cerr << "baza nie chodzi" << std::endl;
        return;
    }
    try{
    std::unique_ptr<sql::PreparedStatement> stmt(
        conn->prepareStatement(
            "INSERT INTO wiadomosci (nadawca, odbiorca, tytul, czasNadania, dataNadania, tresc) "
            "VALUES (?, ?, ?, CURRENT_TIME(), CURRENT_DATE(), ?)"
        )
    );
    stmt->setInt(1, sessionUserId);
    stmt->setInt(2, userid);
    stmt->setString(3, title);
    stmt->setString(4, message);
    stmt->execute();
    } catch (sql::SQLException& e) {
        std::cerr << "SQL error: " << e.what() << std::endl;
    }
}
inline std::vector<Lek> getPrescriptionMeds(int id) {
    std::vector<Lek> leki;
    auto conn = baza();
    if (!conn) {
        std::cerr << "baza nie chodzi" << std::endl;
        return leki;
    }

    try {
        std::unique_ptr<sql::Statement> stmt(conn->createStatement());
        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery(
            "SELECT LekID, ilosc FROM receptalek WHERE ReceptaID = " + std::to_string(id)
        ));

        while (res->next()) {
            Lek l;
            l.id = res->getInt("LekID");
            l.nazwa = ""; // Placeholder — set later if needed
            l.ilosc = res->getInt("ilosc");
            leki.push_back(std::move(l));
        }
    } catch (sql::SQLException& e) {
        std::cerr <<  e.what() << std::endl;
    }

    return leki;
}
struct ReceptaDane {
    int id;
    std::string pimie;
    std::string dimie;
    std::string pnazwisko;
    std::string dnazwisko;
};

inline std::vector<ReceptaDane> fetchRecepty() {
    std::vector<ReceptaDane> recepty;
    auto conn = baza();
    if (!conn) {
        std::cerr << "baza nie chodzi" << std::endl;
        return recepty;
    }

    try {
        std::unique_ptr<sql::Statement> stmt(conn->createStatement());
        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery(
            "SELECT "
            "recepta.ReceptaID, "
            "pacjent.imie AS pimie, pacjent.nazwisko AS pnazwisko, "
            "pracownik.imie AS dimie, pracownik.nazwisko AS dnazwisko "
            "FROM recepta "
            "JOIN pacjent ON recepta.PacjentID = pacjent.PacjentID "
            "JOIN pracownik ON recepta.PracownikID = pracownik.PracownikID"
        ));

        while (res->next()) {
            ReceptaDane r;
            r.id = res->getInt("ReceptaID");
            r.pimie = res->getString("pimie");
            r.pnazwisko = res->getString("pnazwisko");
            r.dimie = res->getString("dimie");
            r.dnazwisko = res->getString("dnazwisko");
            recepty.push_back(std::move(r));
        }
    } catch (const sql::SQLException& e) {
        std::cerr << "SQL error: " << e.what() << std::endl;
    }

    return recepty;
}
#endif //BAZA_H