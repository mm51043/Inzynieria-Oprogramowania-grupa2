//
// Created by Lenovo on 19.05.2025.
//

#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H
#include "loginui.h"
#include <QMainWindow>

class LoginWindow : public QMainWindow {
    Q_OBJECT
    public:
        explicit LoginWindow(QWidget *parent = nullptr);
    signals:
        void loginPass();
    private slots:
        void onEnter();
    private:
    Ui_LoginWindow ui;
};


#endif //LOGINWINDOW_H
