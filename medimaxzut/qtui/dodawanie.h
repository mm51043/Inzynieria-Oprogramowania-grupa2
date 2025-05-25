#ifndef DODAWANIE_H
#define DODAWANIE_H

#include <QWidget>

class HarmonogramWizyta;

namespace Ui {
class dodawanie;
}

class dodawanie : public QWidget
{
    Q_OBJECT

public:
    explicit dodawanie(QWidget *parent = nullptr);
    ~dodawanie();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::dodawanie *ui;
    HarmonogramWizyta* harmonogramWizyta;
};

#endif // DODAWANIE_H
