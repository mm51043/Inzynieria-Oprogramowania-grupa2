/********************************************************************************
** Form generated from reading UI file 'listuser.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTUSER_H
#define UI_LISTUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListUser
{
public:
    QFrame *frame_7;
    QScrollArea *scrollArea;
    QWidget *List;
    QLabel *label_21;
    QFrame *line_11;
    QLabel *label_17;
    QFrame *line_7;
    QLabel *label_22;
    QFrame *line_3;
    QLabel *label_20;
    QFrame *line_13;
    QFrame *line_10;
    QTextBrowser *textBrowser_6;
    QFrame *line_6;
    QLabel *label_23;
    QLabel *label_24;

    void setupUi(QWidget *ListUser)
    {
        if (ListUser->objectName().isEmpty())
            ListUser->setObjectName("ListUser");
        ListUser->resize(1471, 901);
        ListUser->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"border-radius: 10px;\n"
""));
        frame_7 = new QFrame(ListUser);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(50, 200, 1371, 651));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);"));
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        scrollArea = new QScrollArea(frame_7);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 0, 1351, 651));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea QScrollBar:vertical {\n"
"    border: 3px solid white;\n"
"    border-radius: 8px;\n"
"    background: transparent;\n"
"    width: 20px;\n"
"    margin: 0px;\n"
"}\n"
"\n"
"QScrollArea QScrollBar::handle:vertical {\n"
"    background: #0055cc;\n"
"    min-height: 20px;\n"
"    border-radius: 7px;\n"
"}\n"
"\n"
"QScrollArea QScrollBar::add-line:vertical,\n"
"QScrollArea QScrollBar::sub-line:vertical {\n"
"    height: 0px;\n"
"}\n"
"\n"
"QScrollArea QScrollBar::add-page:vertical, \n"
"QScrollArea QScrollBar::sub-page:vertical {\n"
"    background: none;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        List = new QWidget();
        List->setObjectName("List");
        List->setGeometry(QRect(0, 0, 1351, 651));
        List->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        scrollArea->setWidget(List);
        label_21 = new QLabel(ListUser);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(340, 150, 251, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_21->setFont(font);
        label_21->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_21->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);"));
        label_21->setTextFormat(Qt::TextFormat::RichText);
        label_21->setAlignment(Qt::AlignmentFlag::AlignCenter);
        line_11 = new QFrame(ListUser);
        line_11->setObjectName("line_11");
        line_11->setGeometry(QRect(880, 150, 3, 41));
        line_11->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_11->setFrameShape(QFrame::Shape::VLine);
        line_11->setFrameShadow(QFrame::Shadow::Sunken);
        label_17 = new QLabel(ListUser);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(30, 20, 301, 41));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        label_17->setFont(font1);
        label_17->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_17->setTextFormat(Qt::TextFormat::RichText);
        label_17->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        line_7 = new QFrame(ListUser);
        line_7->setObjectName("line_7");
        line_7->setGeometry(QRect(50, 840, 1371, 20));
        line_7->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_7->setFrameShape(QFrame::Shape::HLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);
        label_22 = new QLabel(ListUser);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(90, 150, 221, 31));
        label_22->setFont(font);
        label_22->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_22->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);"));
        label_22->setTextFormat(Qt::TextFormat::RichText);
        label_22->setAlignment(Qt::AlignmentFlag::AlignCenter);
        line_3 = new QFrame(ListUser);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(50, 190, 1371, 20));
        line_3->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        label_20 = new QLabel(ListUser);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(90, 90, 1281, 41));
        label_20->setFont(font1);
        label_20->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);"));
        label_20->setTextFormat(Qt::TextFormat::RichText);
        label_20->setAlignment(Qt::AlignmentFlag::AlignCenter);
        line_13 = new QFrame(ListUser);
        line_13->setObjectName("line_13");
        line_13->setGeometry(QRect(320, 150, 3, 41));
        line_13->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_13->setFrameShape(QFrame::Shape::VLine);
        line_13->setFrameShadow(QFrame::Shadow::Sunken);
        line_10 = new QFrame(ListUser);
        line_10->setObjectName("line_10");
        line_10->setGeometry(QRect(610, 150, 3, 41));
        line_10->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_10->setFrameShape(QFrame::Shape::VLine);
        line_10->setFrameShadow(QFrame::Shadow::Sunken);
        textBrowser_6 = new QTextBrowser(ListUser);
        textBrowser_6->setObjectName("textBrowser_6");
        textBrowser_6->setGeometry(QRect(20, 80, 1431, 801));
        textBrowser_6->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);\n"
"border-radius: 10px;"));
        line_6 = new QFrame(ListUser);
        line_6->setObjectName("line_6");
        line_6->setGeometry(QRect(1120, 150, 3, 41));
        line_6->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_6->setFrameShape(QFrame::Shape::VLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);
        label_23 = new QLabel(ListUser);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(630, 150, 231, 31));
        label_23->setFont(font);
        label_23->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);"));
        label_23->setTextFormat(Qt::TextFormat::RichText);
        label_23->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_24 = new QLabel(ListUser);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(900, 150, 211, 31));
        label_24->setFont(font);
        label_24->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_24->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);"));
        label_24->setTextFormat(Qt::TextFormat::RichText);
        label_24->setAlignment(Qt::AlignmentFlag::AlignCenter);
        textBrowser_6->raise();
        label_17->raise();
        line_6->raise();
        label_24->raise();
        label_20->raise();
        line_10->raise();
        label_21->raise();
        line_3->raise();
        label_22->raise();
        label_23->raise();
        line_13->raise();
        line_7->raise();
        line_11->raise();
        frame_7->raise();

        retranslateUi(ListUser);

        QMetaObject::connectSlotsByName(ListUser);
    } // setupUi

    void retranslateUi(QWidget *ListUser)
    {
        ListUser->setWindowTitle(QCoreApplication::translate("ListUser", "Form", nullptr));
        label_21->setText(QCoreApplication::translate("ListUser", "Nazwisko", nullptr));
        label_17->setText(QCoreApplication::translate("ListUser", "Lista pracownik\303\263w", nullptr));
        label_22->setText(QCoreApplication::translate("ListUser", "Imi\304\231", nullptr));
        label_20->setText(QCoreApplication::translate("ListUser", "Pracownicy", nullptr));
        label_23->setText(QCoreApplication::translate("ListUser", "Typ", nullptr));
        label_24->setText(QCoreApplication::translate("ListUser", "Ostatnie logowanie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListUser: public Ui_ListUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTUSER_H
