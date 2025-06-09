/********************************************************************************
** Form generated from reading UI file 'newmessage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWMESSAGE_H
#define UI_NEWMESSAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewMessage
{
public:
    QFrame *mainFrame;
    QFrame *frame;
    QPlainTextEdit *textField;
    QPushButton *clearButton;
    QPushButton *sendButton;
    QLabel *title_2;
    QLabel *title;

    void setupUi(QWidget *NewMessage)
    {
        if (NewMessage->objectName().isEmpty())
            NewMessage->setObjectName("NewMessage");
        NewMessage->resize(1471, 901);
        mainFrame = new QFrame(NewMessage);
        mainFrame->setObjectName("mainFrame");
        mainFrame->setGeometry(QRect(0, 0, 1471, 901));
        mainFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"border-radius: 10px;"));
        mainFrame->setFrameShape(QFrame::Shape::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Shadow::Raised);
        frame = new QFrame(mainFrame);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(20, 90, 1431, 791));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"border-radius: 10px;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        textField = new QPlainTextEdit(frame);
        textField->setObjectName("textField");
        textField->setGeometry(QRect(23, 110, 1381, 591));
        textField->setStyleSheet(QString::fromUtf8("background-color:white;"));
        clearButton = new QPushButton(frame);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(20, 710, 231, 61));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        clearButton->setFont(font);
        clearButton->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(0, 62, 154);"));
        sendButton = new QPushButton(frame);
        sendButton->setObjectName("sendButton");
        sendButton->setGeometry(QRect(1170, 710, 231, 61));
        sendButton->setFont(font);
        sendButton->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(0, 62, 154);"));
        title_2 = new QLabel(frame);
        title_2->setObjectName("title_2");
        title_2->setGeometry(QRect(30, 20, 1371, 61));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        title_2->setFont(font1);
        title_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        title_2->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"border-radius: 10px;"));
        title_2->setTextFormat(Qt::TextFormat::RichText);
        title_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        title = new QLabel(mainFrame);
        title->setObjectName("title");
        title->setGeometry(QRect(20, 20, 361, 61));
        title->setFont(font1);
        title->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        title->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"border-radius: 10px;"));
        title->setTextFormat(Qt::TextFormat::RichText);
        title->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        retranslateUi(NewMessage);

        QMetaObject::connectSlotsByName(NewMessage);
    } // setupUi

    void retranslateUi(QWidget *NewMessage)
    {
        NewMessage->setWindowTitle(QCoreApplication::translate("NewMessage", "Form", nullptr));
        clearButton->setText(QCoreApplication::translate("NewMessage", "Wyczy\305\233\304\207", nullptr));
        sendButton->setText(QCoreApplication::translate("NewMessage", "Wy\305\233lij", nullptr));
        title_2->setText(QCoreApplication::translate("NewMessage", "Wprowad\305\272 tre\305\233\304\207 wiadomo\305\233ci", nullptr));
        title->setText(QCoreApplication::translate("NewMessage", "Dodaj wiadomo\305\233\304\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewMessage: public Ui_NewMessage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWMESSAGE_H
