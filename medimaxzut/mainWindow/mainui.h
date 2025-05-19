/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINUI_H
#define MAINUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPageWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QGroupBox *groupBox;
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_7;
    QTextBrowser *textBrowser_8;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_8;
    QFrame *line;
    QLabel *label_2;
    QFrame *frame;
    QLabel *label_9;
    QFrame *frame_2;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QFrame *frame_3;
    QLabel *label;
    QLabel *label_10;
    QFrame *frame_4;
    QLabel *label_7;
    QFrame *frame_5;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_11;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainPageWindow)
    {
        if (MainPageWindow->objectName().isEmpty())
            MainPageWindow->setObjectName("MainPageWindow");
        MainPageWindow->resize(1920, 1010);
        MainPageWindow->setMinimumSize(QSize(800, 600));
        MainPageWindow->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        MainPageWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 19, 43);"));
        centralwidget = new QWidget(MainPageWindow);
        centralwidget->setObjectName("centralwidget");
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 10, 1661, 61));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"      border-radius: 10px;"));
        textBrowser->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);
        textBrowser->setAutoFormatting(QTextEdit::AutoFormattingFlag::AutoBulletList);
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(1680, 10, 221, 61));
        textBrowser_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"      border-radius: 10px;"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 80, 221, 901));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"      border-radius: 10px;"));
        textBrowser_4 = new QTextBrowser(groupBox);
        textBrowser_4->setObjectName("textBrowser_4");
        textBrowser_4->setGeometry(QRect(10, 80, 201, 51));
        textBrowser_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);\n"
"       border-radius: 10px;"));
        textBrowser_7 = new QTextBrowser(groupBox);
        textBrowser_7->setObjectName("textBrowser_7");
        textBrowser_7->setGeometry(QRect(10, 140, 201, 51));
        textBrowser_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);\n"
"       border-radius: 10px;"));
        textBrowser_8 = new QTextBrowser(groupBox);
        textBrowser_8->setObjectName("textBrowser_8");
        textBrowser_8->setGeometry(QRect(10, 200, 201, 51));
        textBrowser_8->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);\n"
"       border-radius: 10px;"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 90, 181, 31));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);"));
        label_3->setTextFormat(Qt::TextFormat::RichText);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 150, 181, 31));
        label_4->setFont(font);
        label_4->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);"));
        label_4->setTextFormat(Qt::TextFormat::RichText);
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 210, 181, 31));
        label_5->setFont(font);
        label_5->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);"));
        label_5->setTextFormat(Qt::TextFormat::RichText);
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 10, 201, 41));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label_8->setFont(font1);
        label_8->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_8->setTextFormat(Qt::TextFormat::RichText);
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        line = new QFrame(groupBox);
        line->setObjectName("line");
        line->setGeometry(QRect(20, 60, 181, 3));
        line->setStyleSheet(QString::fromUtf8("background-color: black;"));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 20, 261, 41));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_2->setTextFormat(Qt::TextFormat::RichText);
        label_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
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
        label_9->setFont(font1);
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
        label_12->setFont(font1);
        label_12->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_12->setTextFormat(Qt::TextFormat::RichText);
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_13 = new QLabel(frame_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(30, 70, 111, 31));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        label_13->setFont(font3);
        label_13->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_13->setTextFormat(Qt::TextFormat::RichText);
        label_13->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_14 = new QLabel(frame_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(30, 100, 111, 31));
        label_14->setFont(font3);
        label_14->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_14->setTextFormat(Qt::TextFormat::RichText);
        label_14->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_15 = new QLabel(frame_2);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(30, 140, 121, 31));
        label_15->setFont(font3);
        label_15->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_15->setTextFormat(Qt::TextFormat::RichText);
        label_15->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_16 = new QLabel(frame_2);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(30, 170, 111, 31));
        label_16->setFont(font3);
        label_16->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_16->setTextFormat(Qt::TextFormat::RichText);
        label_16->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(1720, 750, 181, 121));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"      border-radius: 10px;"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame_3);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 141, 41));
        label->setFont(font1);
        label->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label->setTextFormat(Qt::TextFormat::RichText);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_10 = new QLabel(frame_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(40, 60, 111, 41));
        label_10->setFont(font2);
        label_10->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_10->setTextFormat(Qt::TextFormat::RichText);
        label_10->setAlignment(Qt::AlignmentFlag::AlignCenter);
        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(1720, 880, 181, 101));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"      border-radius: 10px;"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        label_7 = new QLabel(frame_4);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 10, 141, 81));
        QFont font4;
        font4.setPointSize(36);
        font4.setBold(true);
        label_7->setFont(font4);
        label_7->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_7->setTextFormat(Qt::TextFormat::RichText);
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        frame_5 = new QFrame(centralwidget);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(240, 80, 1471, 901));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"      border-radius: 10px;"));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        label_17 = new QLabel(frame_5);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(20, 10, 1431, 31));
        label_17->setFont(font1);
        label_17->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_17->setTextFormat(Qt::TextFormat::RichText);
        label_17->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_18 = new QLabel(frame_5);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(20, 40, 881, 31));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(true);
        label_18->setFont(font5);
        label_18->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_18->setTextFormat(Qt::TextFormat::RichText);
        label_18->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_19 = new QLabel(frame_5);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(20, 70, 881, 31));
        label_19->setFont(font5);
        label_19->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_19->setTextFormat(Qt::TextFormat::RichText);
        label_19->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_20 = new QLabel(frame_5);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(20, 100, 211, 211));
        label_20->setFont(font5);
        label_20->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_20->setTextFormat(Qt::TextFormat::RichText);
        label_20->setPixmap(QPixmap(QString::fromUtf8("kacper.jpg")));
        label_20->setScaledContents(true);
        label_20->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_21 = new QLabel(frame_5);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(20, 100, 881, 31));
        label_21->setFont(font5);
        label_21->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_21->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_21->setTextFormat(Qt::TextFormat::RichText);
        label_21->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_22 = new QLabel(frame_5);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(20, 130, 881, 31));
        label_22->setFont(font5);
        label_22->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_22->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_22->setTextFormat(Qt::TextFormat::RichText);
        label_22->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_23 = new QLabel(frame_5);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(20, 160, 881, 31));
        label_23->setFont(font5);
        label_23->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_23->setTextFormat(Qt::TextFormat::RichText);
        label_23->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_24 = new QLabel(frame_5);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(20, 190, 881, 31));
        label_24->setFont(font5);
        label_24->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_24->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_24->setTextFormat(Qt::TextFormat::RichText);
        label_24->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(1690, 20, 201, 41));
        label_11->setFont(font1);
        label_11->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);"));
        label_11->setTextFormat(Qt::TextFormat::RichText);
        label_11->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainPageWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainPageWindow);
        statusbar->setObjectName("statusbar");
        MainPageWindow->setStatusBar(statusbar);

        retranslateUi(MainPageWindow);

        QMetaObject::connectSlotsByName(MainPageWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainPageWindow)
    {
        MainPageWindow->setWindowTitle(QCoreApplication::translate("MainPageWindow", "MainWindow", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainPageWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">      </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MainPageWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">      </p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        groupBox->setTitle(QString());
        label_3->setText(QCoreApplication::translate("MainPageWindow", "Lista pracownik\303\263w", nullptr));
        label_4->setText(QCoreApplication::translate("MainPageWindow", "Lista pacjent\303\263w", nullptr));
        label_5->setText(QCoreApplication::translate("MainPageWindow", "Apteka", nullptr));
        label_8->setText(QCoreApplication::translate("MainPageWindow", "Nawigacja", nullptr));
        label_2->setText(QCoreApplication::translate("MainPageWindow", "Witaj, Dyrektor", nullptr));
        label_9->setText(QString());
        label_12->setText(QCoreApplication::translate("MainPageWindow", "Kontakty", nullptr));
        label_13->setText(QCoreApplication::translate("MainPageWindow", "Dyrektor:", nullptr));
        label_14->setText(QCoreApplication::translate("MainPageWindow", "tel. 727272727", nullptr));
        label_15->setText(QCoreApplication::translate("MainPageWindow", "Administrator:", nullptr));
        label_16->setText(QCoreApplication::translate("MainPageWindow", "tel. 272727272", nullptr));
        label->setText(QCoreApplication::translate("MainPageWindow", "7 lipca", nullptr));
        label_10->setText(QCoreApplication::translate("MainPageWindow", "2727r.", nullptr));
        label_7->setText(QCoreApplication::translate("MainPageWindow", "21:15", nullptr));
        label_17->setText(QCoreApplication::translate("MainPageWindow", "Wa\305\274ne informacje:", nullptr));
        label_18->setText(QCoreApplication::translate("MainPageWindow", "W dniach 7 - 27 lipca dyrektor jest na urlopie. Wszelkie problemy nale\305\274y w tym czasie porusza\304\207 z dr. Czosnkiem.", nullptr));
        label_19->setText(QCoreApplication::translate("MainPageWindow", "Dzi\304\231ki ci\304\231\305\274kiej pracy naszej przychodni uda\305\202o si\304\231 uratowa\304\207 Kacperka kt\303\263ry prawie umar\305\202.", nullptr));
        label_20->setText(QString());
        label_21->setText(QCoreApplication::translate("MainPageWindow", "Wiemy o awarii ekspresu do kawy w recepcji, serwisant zosta\305\202 ju\305\274 zam\303\263wiony.", nullptr));
        label_22->setText(QCoreApplication::translate("MainPageWindow", "Prosimy o nie u\305\274ywanie kranu w gabinecie 727, leci z niego szambo.", nullptr));
        label_23->setText(QCoreApplication::translate("MainPageWindow", "Dzi\304\231ki dofinansowaniu od miasta uda\305\202o nam si\304\231 naby\304\207 lepsze wyposa\305\274enie medyczne, w tym nowe le\305\274aki, stetoskopy i skalpele. ", nullptr));
        label_24->setText(QCoreApplication::translate("MainPageWindow", "Prosimy o podpisywanie przedmiot\303\263w umieszczanych w lod\303\263wce. Dyrektor nie ponosi odpowiedzialno\305\233ci za zgubione kanapki.", nullptr));
        label_11->setText(QCoreApplication::translate("MainPageWindow", "Skrzynka odbiorcza", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPageWindow: public Ui_MainPageWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINUI_H
