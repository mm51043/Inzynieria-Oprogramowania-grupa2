#ifndef PROFIL_H
#define PROFIL_H

#include <QWidget>
#include <QMainWindow>
#include "ui_profil.h"
#include "../baza.h"

class Profil:public QMainWindow
{
    Q_OBJECT
public:
    explicit Profil(QWidget *parent = nullptr);
    void showPatientProfile(int patientId);

private:
    void showDefaultPhoto();
    Ui::profil ui;
};

#endif // PROFIL_H
