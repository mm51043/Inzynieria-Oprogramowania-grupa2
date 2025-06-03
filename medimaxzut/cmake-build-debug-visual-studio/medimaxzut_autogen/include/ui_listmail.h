/********************************************************************************
** Form generated from reading UI file 'listmail.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTMAIL_H
#define UI_LISTMAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListMail
{
public:
    QFrame *mainFrame;
    QFrame *frame;
    QFrame *frame_7;
    QScrollArea *scrollArea;
    QWidget *List;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QFrame *line_10;
    QFrame *line_11;
    QFrame *line_13;
    QFrame *line_3;
    QFrame *line_6;
    QFrame *line_7;
    QLabel *title;

    void setupUi(QWidget *ListMail)
    {
        if (ListMail->objectName().isEmpty())
            ListMail->setObjectName("ListMail");
        ListMail->resize(1471, 901);
        ListMail->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"border-radius: 10px;"));
        mainFrame = new QFrame(ListMail);
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
        frame_7->setGeometry(QRect(30, 110, 1371, 651));
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
        label_20 = new QLabel(frame);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(30, 10, 1371, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label_20->setFont(font);
        label_20->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_20->setStyleSheet(QString::fromUtf8(""));
        label_20->setTextFormat(Qt::TextFormat::RichText);
        label_20->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_21 = new QLabel(frame);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(410, 60, 491, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_21->setFont(font1);
        label_21->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_21->setStyleSheet(QString::fromUtf8(""));
        label_21->setTextFormat(Qt::TextFormat::RichText);
        label_21->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_22 = new QLabel(frame);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(70, 60, 321, 31));
        label_22->setFont(font1);
        label_22->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_22->setStyleSheet(QString::fromUtf8(""));
        label_22->setTextFormat(Qt::TextFormat::RichText);
        label_22->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_23 = new QLabel(frame);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(920, 60, 281, 31));
        label_23->setFont(font1);
        label_23->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_23->setStyleSheet(QString::fromUtf8(""));
        label_23->setTextFormat(Qt::TextFormat::RichText);
        label_23->setAlignment(Qt::AlignmentFlag::AlignCenter);
        line_10 = new QFrame(frame);
        line_10->setObjectName("line_10");
        line_10->setGeometry(QRect(1210, 60, 3, 41));
        line_10->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_10->setFrameShape(QFrame::Shape::VLine);
        line_10->setFrameShadow(QFrame::Shadow::Sunken);
        line_11 = new QFrame(frame);
        line_11->setObjectName("line_11");
        line_11->setGeometry(QRect(400, 60, 3, 41));
        line_11->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_11->setFrameShape(QFrame::Shape::VLine);
        line_11->setFrameShadow(QFrame::Shadow::Sunken);
        line_13 = new QFrame(frame);
        line_13->setObjectName("line_13");
        line_13->setGeometry(QRect(910, 60, 3, 41));
        line_13->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_13->setFrameShape(QFrame::Shape::VLine);
        line_13->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(frame);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(30, 100, 1371, 20));
        line_3->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        line_6 = new QFrame(frame);
        line_6->setObjectName("line_6");
        line_6->setGeometry(QRect(1270, 60, 3, 41));
        line_6->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_6->setFrameShape(QFrame::Shape::VLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);
        line_7 = new QFrame(frame);
        line_7->setObjectName("line_7");
        line_7->setGeometry(QRect(30, 750, 1371, 20));
        line_7->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_7->setFrameShape(QFrame::Shape::HLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);
        label_20->raise();
        label_21->raise();
        label_22->raise();
        label_23->raise();
        line_10->raise();
        line_11->raise();
        line_13->raise();
        line_3->raise();
        line_6->raise();
        line_7->raise();
        frame_7->raise();
        title = new QLabel(mainFrame);
        title->setObjectName("title");
        title->setGeometry(QRect(20, 20, 361, 61));
        title->setFont(font);
        title->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        title->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"border-radius: 10px;"));
        title->setTextFormat(Qt::TextFormat::RichText);
        title->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        retranslateUi(ListMail);

        QMetaObject::connectSlotsByName(ListMail);
    } // setupUi

    void retranslateUi(QWidget *ListMail)
    {
        ListMail->setWindowTitle(QCoreApplication::translate("ListMail", "Form", nullptr));
        label_20->setText(QCoreApplication::translate("ListMail", "Wiadomo\305\233ci", nullptr));
        label_21->setText(QCoreApplication::translate("ListMail", "Tytu\305\202", nullptr));
        label_22->setText(QCoreApplication::translate("ListMail", "Autor", nullptr));
        label_23->setText(QCoreApplication::translate("ListMail", "Czas dostarczenia", nullptr));
        title->setText(QCoreApplication::translate("ListMail", "Skrzynka odbiorcza", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListMail: public Ui_ListMail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTMAIL_H
