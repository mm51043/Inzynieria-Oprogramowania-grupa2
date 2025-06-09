#ifndef PROFILADMIN_H
#define PROFILADMIN_H

#include <QWidget>
#include <QMainWindow>
#include "ui_profiladmin.h"
#include "../baza.h"

class Profiladmin:public QMainWindow
{
    Q_OBJECT
public:
    explicit Profiladmin(QWidget *parent = nullptr);
    void showWorkerProfile(int workerId);
    void showPatientProfile(int patientId);

    Ui::profiladmin *ui;

private:
    void showDefaultPhoto();
    void toggleEditMode();
    int currentWorkerId;
    bool isEditMode;

    QLineEdit *nameEdit;
    QLineEdit *peselEdit;
    QLineEdit *phoneEdit;
    QLineEdit *roleEdit;

private slots:
    void onEditSaveButtonClicked();
};

#endif // PROFILADMIN_H