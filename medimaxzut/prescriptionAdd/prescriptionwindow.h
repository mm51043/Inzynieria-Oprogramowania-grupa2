#ifndef PRESCRIPTIONWINDOW_H
#define PRESCRIPTIONWINDOW_H

#include <QWidget>
#include <QVBoxLayout>
#include "../baza.h"
namespace Ui {
class PrescWindow;
}

class PrescWindow : public QWidget
{
    Q_OBJECT

public:
    explicit PrescWindow(QWidget *parent = nullptr);
    ~PrescWindow();

    void setPatientId(int id);

    QVBoxLayout *lListLayout();

private:
    void rList();
    void lClear();
    void lAdd(int id);
    void lRemove(int id);
    void lUpdate();
    void submit();

    Ui::PrescWindow *ui;
    QVBoxLayout* llayout;
    std::vector<std::pair<int, int>> leftLek;
    std::vector<Lek> leki;
    int patientId;
};

#endif // PRESCRIPTIONWINDOW_H
