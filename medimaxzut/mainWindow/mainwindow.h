#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "navibutton.h"
#include <QVBoxLayout>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void navigation(const QStringList &buttons);

private slots:
    void showUserList();
private:

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
