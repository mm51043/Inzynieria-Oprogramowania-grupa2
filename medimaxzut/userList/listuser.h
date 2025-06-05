#ifndef LISTUSER_H
#define LISTUSER_H

#include <QWidget>

namespace Ui {
class ListUser;
}

class ListUser : public QWidget
{
    Q_OBJECT

public:
    explicit ListUser(QWidget *parent = nullptr);
    ~ListUser();

    void setPrescription();

    void list();

    void setLabels(const std::string& what);
signals:
    void userPicked(int id);
private:
    Ui::ListUser *ui;
    bool prescription{};
};

#endif // LISTUSER_H
