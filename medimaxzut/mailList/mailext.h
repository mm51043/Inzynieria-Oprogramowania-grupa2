#ifndef MAILEXT_H
#define MAILEXT_H

#include <QWidget>

namespace Ui {
class MailExt;
}

class MailExt : public QWidget
{
    Q_OBJECT

public:
    explicit MailExt(QWidget *parent = nullptr);
    ~MailExt();
    void setDText(const QString& text);
private:
    Ui::MailExt *ui;
};

#endif // MAILEXT_H
