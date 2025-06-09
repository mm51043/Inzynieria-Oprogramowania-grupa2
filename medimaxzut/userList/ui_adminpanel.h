/********************************************************************************
** Form generated from reading UI file 'adminpanel.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPANEL_H
#define UI_ADMINPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminPanel
{
public:
    QFrame *mainFrame;
    QFrame *frame;
    QFrame *frame_7;
    QScrollArea *scrollArea;
    QWidget *List;
    QFrame *line_7;
    QFrame *line_6;
    QFrame *line_3;
    QFrame *line_13;
    QFrame *line_11;
    QLabel *label4;
    QFrame *line_10;
    QLabel *label3;
    QLabel *label1;
    QLabel *label2;
    QLabel *whatListLabel;
    QLabel *title;

    void setupUi(QWidget *AdminPanel)
    {
        if (AdminPanel->objectName().isEmpty())
            AdminPanel->setObjectName("AdminPanel");
        AdminPanel->resize(1471, 901);
        AdminPanel->setMinimumSize(QSize(1471, 901));
        mainFrame = new QFrame(AdminPanel);
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
        frame_7 = new QFrame(frame);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(30, 110, 1371, 641));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);"));
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        scrollArea = new QScrollArea(frame_7);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(40, 0, 1321, 651));
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
        List->setGeometry(QRect(0, 0, 1321, 651));
        List->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        scrollArea->setWidget(List);
        line_7 = new QFrame(frame);
        line_7->setObjectName("line_7");
        line_7->setGeometry(QRect(30, 740, 1391, 20));
        line_7->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_7->setFrameShape(QFrame::Shape::HLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);
        line_6 = new QFrame(frame);
        line_6->setObjectName("line_6");
        line_6->setGeometry(QRect(1120, 60, 3, 41));
        line_6->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_6->setFrameShape(QFrame::Shape::VLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(frame);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(30, 100, 1371, 20));
        line_3->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        line_13 = new QFrame(frame);
        line_13->setObjectName("line_13");
        line_13->setGeometry(QRect(320, 60, 3, 41));
        line_13->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_13->setFrameShape(QFrame::Shape::VLine);
        line_13->setFrameShadow(QFrame::Shadow::Sunken);
        line_11 = new QFrame(frame);
        line_11->setObjectName("line_11");
        line_11->setGeometry(QRect(880, 60, 3, 41));
        line_11->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_11->setFrameShape(QFrame::Shape::VLine);
        line_11->setFrameShadow(QFrame::Shadow::Sunken);
        label4 = new QLabel(frame);
        label4->setObjectName("label4");
        label4->setGeometry(QRect(900, 60, 211, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label4->setFont(font);
        label4->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label4->setStyleSheet(QString::fromUtf8(""));
        label4->setTextFormat(Qt::TextFormat::RichText);
        label4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        line_10 = new QFrame(frame);
        line_10->setObjectName("line_10");
        line_10->setGeometry(QRect(610, 60, 3, 41));
        line_10->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_10->setFrameShape(QFrame::Shape::VLine);
        line_10->setFrameShadow(QFrame::Shadow::Sunken);
        label3 = new QLabel(frame);
        label3->setObjectName("label3");
        label3->setGeometry(QRect(620, 60, 251, 31));
        label3->setFont(font);
        label3->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label3->setStyleSheet(QString::fromUtf8(""));
        label3->setTextFormat(Qt::TextFormat::RichText);
        label3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label1 = new QLabel(frame);
        label1->setObjectName("label1");
        label1->setGeometry(QRect(90, 60, 221, 31));
        label1->setFont(font);
        label1->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label1->setStyleSheet(QString::fromUtf8(""));
        label1->setTextFormat(Qt::TextFormat::RichText);
        label1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label2 = new QLabel(frame);
        label2->setObjectName("label2");
        label2->setGeometry(QRect(330, 60, 271, 31));
        label2->setFont(font);
        label2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label2->setStyleSheet(QString::fromUtf8(""));
        label2->setTextFormat(Qt::TextFormat::RichText);
        label2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        whatListLabel = new QLabel(frame);
        whatListLabel->setObjectName("whatListLabel");
        whatListLabel->setGeometry(QRect(30, 10, 1391, 41));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        whatListLabel->setFont(font1);
        whatListLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        whatListLabel->setStyleSheet(QString::fromUtf8(""));
        whatListLabel->setTextFormat(Qt::TextFormat::RichText);
        whatListLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        line_7->raise();
        line_6->raise();
        line_3->raise();
        frame_7->raise();
        line_13->raise();
        line_11->raise();
        label4->raise();
        line_10->raise();
        label3->raise();
        label1->raise();
        label2->raise();
        whatListLabel->raise();
        title = new QLabel(mainFrame);
        title->setObjectName("title");
        title->setGeometry(QRect(20, 20, 361, 61));
        title->setFont(font1);
        title->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        title->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"border-radius: 10px;"));
        title->setTextFormat(Qt::TextFormat::RichText);
        title->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        retranslateUi(AdminPanel);

        QMetaObject::connectSlotsByName(AdminPanel);
    } // setupUi

    void retranslateUi(QWidget *AdminPanel)
    {
        AdminPanel->setWindowTitle(QCoreApplication::translate("AdminPanel", "Form", nullptr));
        label4->setText(QCoreApplication::translate("AdminPanel", "Ostatnie logowanie", nullptr));
        label3->setText(QCoreApplication::translate("AdminPanel", "Typ", nullptr));
        label1->setText(QCoreApplication::translate("AdminPanel", "Imi\304\231", nullptr));
        label2->setText(QCoreApplication::translate("AdminPanel", "Nazwisko", nullptr));
        whatListLabel->setText(QCoreApplication::translate("AdminPanel", "Pracownicy", nullptr));
        title->setText(QCoreApplication::translate("AdminPanel", "Lista Pracownik\303\263w", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminPanel: public Ui_AdminPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPANEL_H
