#ifndef MAILITEM_H
#define MAILITEM_H

#include <QWidget>

namespace Ui {
    class MailItem;
}

class MailItem : public QWidget
{
    Q_OBJECT

public:
    explicit MailItem(QWidget *parent = nullptr);
    ~MailItem();
    void setData(const QString &sender, const QString &title, const QString &date, const QString &msg);
    QString getText() const;
signals:
    void expandSignal(MailItem* item, bool expand);

private slots:
    void toggle();

private:
    Ui::MailItem *ui;
    bool expanded;
    QString details;
};

#endif // MAILITEM_H