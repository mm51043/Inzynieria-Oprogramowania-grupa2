/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QGroupBox *groupBox;
    QLabel *label_8;
    QFrame *line;
    QGroupBox *naviList;
    QLabel *welcomeLabel;
    QFrame *frame;
    QLabel *label_9;
    QFrame *frame_2;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QFrame *frame_3;
    QLabel *dmLabel;
    QLabel *yLabel;
    QFrame *frame_4;
    QLabel *timeLabel;
    QFrame *MainPanel;
    QPushButton *mainMailButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1920, 1010);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 19, 43);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 10, 1661, 61));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"      border-radius: 10px;"));
        textBrowser->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);
        textBrowser->setAutoFormatting(QTextEdit::AutoFormattingFlag::AutoBulletList);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 80, 221, 901));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"      border-radius: 10px;"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 10, 201, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_8->setFont(font);
        label_8->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_8->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(0, 62, 154);"));
        label_8->setTextFormat(Qt::TextFormat::RichText);
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        line = new QFrame(groupBox);
        line->setObjectName("line");
        line->setGeometry(QRect(20, 60, 181, 3));
        line->setStyleSheet(QString::fromUtf8("background-color:white;"));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        naviList = new QGroupBox(groupBox);
        naviList->setObjectName("naviList");
        naviList->setGeometry(QRect(10, 70, 201, 801));
        naviList->setMinimumSize(QSize(201, 801));
        naviList->setMaximumSize(QSize(201, 801));
        welcomeLabel = new QLabel(centralwidget);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setGeometry(QRect(30, 20, 781, 41));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        welcomeLabel->setFont(font1);
        welcomeLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        welcomeLabel->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(0, 62, 154);"));
        welcomeLabel->setTextFormat(Qt::TextFormat::RichText);
        welcomeLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(1720, 560, 181, 181));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"      border-radius: 10px;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label_9 = new QLabel(frame);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 10, 161, 161));
        label_9->setFont(font);
        label_9->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_9->setTextFormat(Qt::TextFormat::RichText);
        label_9->setPixmap(QPixmap(QString::fromUtf8("logo.png")));
        label_9->setScaledContents(true);
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(1720, 80, 181, 471));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"      border-radius: 10px;"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_12 = new QLabel(frame_2);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(20, 20, 141, 41));
        label_12->setFont(font);
        label_12->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"color:white;"));
        label_12->setTextFormat(Qt::TextFormat::RichText);
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_13 = new QLabel(frame_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(30, 70, 111, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label_13->setFont(font2);
        label_13->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"color:white;"));
        label_13->setTextFormat(Qt::TextFormat::RichText);
        label_13->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_14 = new QLabel(frame_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(30, 100, 111, 31));
        label_14->setFont(font2);
        label_14->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_14->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(0, 62, 154);"));
        label_14->setTextFormat(Qt::TextFormat::RichText);
        label_14->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_15 = new QLabel(frame_2);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(30, 140, 121, 31));
        label_15->setFont(font2);
        label_15->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_15->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(0, 62, 154);"));
        label_15->setTextFormat(Qt::TextFormat::RichText);
        label_15->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_16 = new QLabel(frame_2);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(30, 170, 111, 31));
        label_16->setFont(font2);
        label_16->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_16->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(0, 62, 154);"));
        label_16->setTextFormat(Qt::TextFormat::RichText);
        label_16->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(1720, 750, 181, 121));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"      border-radius: 10px;"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        dmLabel = new QLabel(frame_3);
        dmLabel->setObjectName("dmLabel");
        dmLabel->setGeometry(QRect(20, 20, 141, 41));
        dmLabel->setFont(font);
        dmLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        dmLabel->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(0, 62, 154);"));
        dmLabel->setTextFormat(Qt::TextFormat::RichText);
        dmLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        yLabel = new QLabel(frame_3);
        yLabel->setObjectName("yLabel");
        yLabel->setGeometry(QRect(40, 60, 111, 41));
        yLabel->setFont(font1);
        yLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        yLabel->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(0, 62, 154);"));
        yLabel->setTextFormat(Qt::TextFormat::RichText);
        yLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(1720, 880, 181, 101));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"      border-radius: 10px;"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        timeLabel = new QLabel(frame_4);
        timeLabel->setObjectName("timeLabel");
        timeLabel->setGeometry(QRect(20, 10, 141, 81));
        QFont font3;
        font3.setPointSize(36);
        font3.setBold(true);
        timeLabel->setFont(font3);
        timeLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        timeLabel->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color: rgb(0, 62, 154);"));
        timeLabel->setTextFormat(Qt::TextFormat::RichText);
        timeLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainPanel = new QFrame(centralwidget);
        MainPanel->setObjectName("MainPanel");
        MainPanel->setGeometry(QRect(240, 80, 1471, 901));
        MainPanel->setMinimumSize(QSize(1471, 901));
        MainPanel->setMaximumSize(QSize(1471, 901));
        MainPanel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"      border-radius: 10px;"));
        MainPanel->setFrameShape(QFrame::Shape::StyledPanel);
        MainPanel->setFrameShadow(QFrame::Shadow::Raised);
        mainMailButton = new QPushButton(centralwidget);
        mainMailButton->setObjectName("mainMailButton");
        mainMailButton->setGeometry(QRect(1680, 10, 221, 61));
        mainMailButton->setFont(font);
        mainMailButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"      border-radius: 10px;\n"
"color:white;"));
        MainWindow->setCentralWidget(centralwidget);
        MainPanel->raise();
        textBrowser->raise();
        groupBox->raise();
        welcomeLabel->raise();
        frame->raise();
        frame_2->raise();
        frame_3->raise();
        frame_4->raise();
        mainMailButton->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">      </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        groupBox->setTitle(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Nawigacja", nullptr));
        naviList->setTitle(QString());
        welcomeLabel->setText(QCoreApplication::translate("MainWindow", "Witaj, Dyrektor", nullptr));
        label_9->setText(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "Kontakty", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Dyrektor:", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "tel. 727272727", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Administrator:", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "tel. 272727272", nullptr));
        dmLabel->setText(QCoreApplication::translate("MainWindow", "7 lipca", nullptr));
        yLabel->setText(QCoreApplication::translate("MainWindow", "2727r.", nullptr));
        timeLabel->setText(QCoreApplication::translate("MainWindow", "21:15", nullptr));
        mainMailButton->setText(QCoreApplication::translate("MainWindow", "Skrzynka Odbiorcza", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
