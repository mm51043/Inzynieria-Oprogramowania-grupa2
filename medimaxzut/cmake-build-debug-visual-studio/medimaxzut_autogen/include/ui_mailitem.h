/********************************************************************************
** Form generated from reading UI file 'mailitem.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAILITEM_H
#define UI_MAILITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MailItem
{
public:
    QFrame *frame;
    QLabel *mailSender;
    QFrame *line_24;
    QLabel *mailTitle;
    QFrame *line_8;
    QLabel *date;
    QFrame *line_12;
    QPushButton *mailButton;

    void setupUi(QWidget *MailItem)
    {
        if (MailItem->objectName().isEmpty())
            MailItem->setObjectName("MailItem");
        MailItem->resize(1301, 61);
        MailItem->setMinimumSize(QSize(1301, 61));
        frame = new QFrame(MailItem);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 1301, 61));
        frame->setMinimumSize(QSize(1301, 61));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"border-radius: 10px;\n"
""));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        mailSender = new QLabel(frame);
        mailSender->setObjectName("mailSender");
        mailSender->setGeometry(QRect(10, 10, 191, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        mailSender->setFont(font);
        mailSender->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        mailSender->setStyleSheet(QString::fromUtf8(""));
        mailSender->setTextFormat(Qt::TextFormat::RichText);
        mailSender->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        line_24 = new QFrame(frame);
        line_24->setObjectName("line_24");
        line_24->setGeometry(QRect(330, 10, 3, 41));
        line_24->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_24->setFrameShape(QFrame::Shape::VLine);
        line_24->setFrameShadow(QFrame::Shadow::Sunken);
        mailTitle = new QLabel(frame);
        mailTitle->setObjectName("mailTitle");
        mailTitle->setGeometry(QRect(340, 10, 491, 41));
        mailTitle->setFont(font);
        mailTitle->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        mailTitle->setStyleSheet(QString::fromUtf8(""));
        mailTitle->setTextFormat(Qt::TextFormat::RichText);
        mailTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);
        line_8 = new QFrame(frame);
        line_8->setObjectName("line_8");
        line_8->setGeometry(QRect(840, 10, 3, 41));
        line_8->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_8->setFrameShape(QFrame::Shape::VLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);
        date = new QLabel(frame);
        date->setObjectName("date");
        date->setGeometry(QRect(850, 10, 281, 41));
        date->setFont(font);
        date->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        date->setStyleSheet(QString::fromUtf8(""));
        date->setTextFormat(Qt::TextFormat::RichText);
        date->setAlignment(Qt::AlignmentFlag::AlignCenter);
        line_12 = new QFrame(frame);
        line_12->setObjectName("line_12");
        line_12->setGeometry(QRect(1140, 10, 3, 41));
        line_12->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_12->setFrameShape(QFrame::Shape::VLine);
        line_12->setFrameShadow(QFrame::Shadow::Sunken);
        mailButton = new QPushButton(frame);
        mailButton->setObjectName("mailButton");
        mailButton->setGeometry(QRect(1160, 10, 131, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        mailButton->setFont(font1);
        mailButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 54, 112);\n"
"border-radius: 10px;\n"
"color: white;"));

        retranslateUi(MailItem);

        QMetaObject::connectSlotsByName(MailItem);
    } // setupUi

    void retranslateUi(QWidget *MailItem)
    {
        MailItem->setWindowTitle(QCoreApplication::translate("MailItem", "Form", nullptr));
        mailSender->setText(QCoreApplication::translate("MailItem", "Jan Nowak", nullptr));
        mailTitle->setText(QCoreApplication::translate("MailItem", "Lorem ipsum", nullptr));
        date->setText(QCoreApplication::translate("MailItem", "2727.07.27", nullptr));
        mailButton->setText(QCoreApplication::translate("MailItem", "Rozwi\305\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MailItem: public Ui_MailItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAILITEM_H
