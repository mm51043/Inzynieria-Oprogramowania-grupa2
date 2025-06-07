#ifndef BUTTONNAME_H
#define BUTTONNAME_H
const QStringList adminButtons = {"Lista Pacjentów", "Lista Pracowników", "Harmonogram", "Dodaj Receptę", "Apteka", "Dodaj Pacjenta/Umów Wizytę"};
const QStringList doctorButtons = {"Harmonogram", "Dodaj Receptę"};
const QStringList bossButtons = {"Lista Pacjentów", "Lista Pracowników", "Apteka"};
const QStringList recButtons = {"Dodaj Pacjenta/Umów Wizytę"};
const QStringList salesButtons = {"Lista Leków", "Apteka"};
//pierwszy dzien tygodnia SELECT DATE_SUB(CURDATE(), INTERVAL (WEEKDAY(CURDATE())) DAY) AS firstday;

#endif //BUTTONNAME_H
