//
// Created by Baranina on 5/4/2025.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "mainui.h"
class MainPageWindow : public QMainWindow {
    Q_OBJECT
        public:
            explicit MainPageWindow(QWidget *parent = nullptr);
        private:
            Ui_MainPageWindow ui;
};
#endif //MAINWINDOW_H
