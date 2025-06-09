#ifndef STOREWINDOW_H
#define STOREWINDOW_H

#include <QWidget>
#include <QVBoxLayout>
#include "../baza.h"
#include <QMessageBox>
#include "../mainWindow/mainwindow.h"

namespace Ui {
class Store;
}

class StoreWindow : public QWidget
{
    Q_OBJECT

public:
    explicit StoreWindow(MainWindow* mainWindow, QWidget *parent = nullptr);
    ~StoreWindow();

    QVBoxLayout *lListLayout();
    bool canAddMedicine(int id) const;

private:
    void rList();
    void lClear();
    bool lAdd(int id);
    void lRemove(int id);
    void lUpdate();
    void submitOrder();

    Ui::Store *ui;
    QVBoxLayout* llayout;
    std::vector<std::pair<int, int>> leftLek;
    std::vector<Lek> leki;
    MainWindow* mainWindow;
};


#endif // STOREWINDOW_H
