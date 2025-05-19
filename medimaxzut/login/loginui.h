/********************************************************************************
** Form generated from reading UI file 'mainwindowlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef LOGINUI_H
#define LOGINUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame_5;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *loginUsername;
    QLineEdit *loginPassword;
    QPushButton *loginButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(920, 400);
        LoginWindow->setMinimumSize(QSize(800, 380));
        LoginWindow->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        LoginWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 19, 43);"));
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        frame_5 = new QFrame(centralwidget);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(10, 10, 901, 361));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"border-radius: 10px;"));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        label_3 = new QLabel(frame_5);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 10, 861, 51));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_3->setTextFormat(Qt::TextFormat::RichText);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(frame_5);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(170, 80, 581, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_4->setFont(font1);
        label_4->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_4->setTextFormat(Qt::TextFormat::RichText);
        label_4->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_5 = new QLabel(frame_5);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(170, 160, 591, 31));
        label_5->setFont(font1);
        label_5->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_5->setTextFormat(Qt::TextFormat::RichText);
        label_5->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_6 = new QLabel(frame_5);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(170, 240, 591, 31));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        label_6->setFont(font2);
        label_6->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_6->setTextFormat(Qt::TextFormat::RichText);
        label_6->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        loginUsername = new QLineEdit(frame_5);
        loginUsername->setObjectName("loginUsername");
        loginUsername->setGeometry(QRect(165, 120, 571, 31));
        loginUsername->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 125, 255);\n"
"placeholder {\n"
"	color: rgb(1, 37, 85) ;\n"
"}\n"
"focus {\n"
"background-color: white;\n"
"color:black;\n"
"}"));
        loginPassword = new QLineEdit(frame_5);
        loginPassword->setObjectName("loginPassword");
        loginPassword->setGeometry(QRect(165, 200, 571, 31));
        loginPassword->setStyleSheet(QString::fromUtf8("background-color: rgb(70, 125, 255)"));
        loginButton = new QPushButton(frame_5);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(335, 280, 231, 41));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        loginButton->setFont(font3);
        loginButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;\n"
"	color: rgb(0, 0, 0);\n"
"    border: none;\n"
"    border-radius: 10px;\n"
"    padding: 8px 16px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;\n"
"}"));
        LoginWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName("statusbar");
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("LoginWindow", "Logowanie", nullptr));
        label_4->setText(QCoreApplication::translate("LoginWindow", "Login:", nullptr));
        label_5->setText(QCoreApplication::translate("LoginWindow", "Has\305\202o:", nullptr));
        label_6->setText(QCoreApplication::translate("LoginWindow", " W przypadku zapomnianego has\305\202a prosimy o kontakt z administratorem pod nr 272727272.", nullptr));
        loginUsername->setPlaceholderText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        loginPassword->setPlaceholderText(QCoreApplication::translate("LoginWindow", "Has\305\202o", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginWindow", "Zaloguj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LOGINUI_H
