#ifndef HARMONOGRAM_H
#define HARMONOGRAM_H

#include <QWidget>

namespace Ui {
class harmonogram;
}

class harmonogram : public QWidget
{
    Q_OBJECT

public:
    explicit harmonogram(QWidget *parent = nullptr);
    ~harmonogram();

private:
    Ui::harmonogram *ui;
};

#endif // HARMONOGRAM_H
