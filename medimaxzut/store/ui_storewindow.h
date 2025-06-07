/********************************************************************************
** Form generated from reading UI file 'storewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOREWINDOW_H
#define UI_STOREWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Store
{
public:
    QFrame *mainFrame;
    QFrame *frame;
    QLabel *label_23;
    QFrame *line_24;
    QLabel *label_51;
    QFrame *line_4;
    QFrame *line_32;
    QFrame *line_25;
    QLabel *label_52;
    QFrame *frame_10;
    QScrollArea *leftArea;
    QWidget *leftList;
    QFrame *frame_2;
    QLabel *label_24;
    QFrame *line_26;
    QLabel *label_53;
    QFrame *line_5;
    QFrame *line_33;
    QFrame *line_27;
    QLabel *label_54;
    QFrame *frame_9;
    QScrollArea *rightArea;
    QWidget *rightList;
    QPushButton *okButton;
    QPushButton *clearButton;
    QLabel *title;
    QLabel *confirmationLabel;

    void setupUi(QWidget *Store)
    {
        if (Store->objectName().isEmpty())
            Store->setObjectName("Store");
        Store->resize(1471, 901);
        mainFrame = new QFrame(Store);
        mainFrame->setObjectName("mainFrame");
        mainFrame->setGeometry(QRect(0, 0, 1471, 901));
        mainFrame->setMinimumSize(QSize(1471, 901));
        mainFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"border-radius: 10px;"));
        mainFrame->setFrameShape(QFrame::Shape::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Shadow::Raised);
        frame = new QFrame(mainFrame);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(20, 90, 711, 721));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"border-radius: 10px;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label_23 = new QLabel(frame);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(30, 20, 651, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label_23->setFont(font);
        label_23->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"border-radius: 10px;"));
        label_23->setTextFormat(Qt::TextFormat::RichText);
        label_23->setAlignment(Qt::AlignmentFlag::AlignCenter);
        line_24 = new QFrame(frame);
        line_24->setObjectName("line_24");
        line_24->setGeometry(QRect(480, 70, 3, 41));
        line_24->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_24->setFrameShape(QFrame::Shape::VLine);
        line_24->setFrameShadow(QFrame::Shadow::Sunken);
        label_51 = new QLabel(frame);
        label_51->setObjectName("label_51");
        label_51->setGeometry(QRect(70, 70, 281, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_51->setFont(font1);
        label_51->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_51->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"border-radius: 10px;"));
        label_51->setTextFormat(Qt::TextFormat::RichText);
        label_51->setAlignment(Qt::AlignmentFlag::AlignCenter);
        line_4 = new QFrame(frame);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(30, 110, 651, 20));
        line_4->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        line_32 = new QFrame(frame);
        line_32->setObjectName("line_32");
        line_32->setGeometry(QRect(30, 680, 651, 20));
        line_32->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_32->setFrameShape(QFrame::Shape::HLine);
        line_32->setFrameShadow(QFrame::Shadow::Sunken);
        line_25 = new QFrame(frame);
        line_25->setObjectName("line_25");
        line_25->setGeometry(QRect(360, 70, 3, 41));
        line_25->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_25->setFrameShape(QFrame::Shape::VLine);
        line_25->setFrameShadow(QFrame::Shadow::Sunken);
        label_52 = new QLabel(frame);
        label_52->setObjectName("label_52");
        label_52->setGeometry(QRect(370, 70, 101, 31));
        label_52->setFont(font1);
        label_52->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_52->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"border-radius: 10px;"));
        label_52->setTextFormat(Qt::TextFormat::RichText);
        label_52->setAlignment(Qt::AlignmentFlag::AlignCenter);
        frame_10 = new QFrame(frame);
        frame_10->setObjectName("frame_10");
        frame_10->setGeometry(QRect(30, 120, 651, 571));
        frame_10->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);"));
        frame_10->setFrameShape(QFrame::Shape::StyledPanel);
        frame_10->setFrameShadow(QFrame::Shadow::Raised);
        leftArea = new QScrollArea(frame_10);
        leftArea->setObjectName("leftArea");
        leftArea->setGeometry(QRect(40, 0, 601, 571));
        leftArea->setWidgetResizable(true);
        leftList = new QWidget();
        leftList->setObjectName("leftList");
        leftList->setGeometry(QRect(0, 0, 601, 571));
        leftArea->setWidget(leftList);
        frame_2 = new QFrame(mainFrame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(740, 90, 711, 721));
        frame_2->setMinimumSize(QSize(711, 721));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"border-radius: 10px;"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_24 = new QLabel(frame_2);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(30, 20, 651, 41));
        label_24->setFont(font);
        label_24->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_24->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"border-radius: 10px;"));
        label_24->setTextFormat(Qt::TextFormat::RichText);
        label_24->setAlignment(Qt::AlignmentFlag::AlignCenter);
        line_26 = new QFrame(frame_2);
        line_26->setObjectName("line_26");
        line_26->setGeometry(QRect(480, 70, 3, 41));
        line_26->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_26->setFrameShape(QFrame::Shape::VLine);
        line_26->setFrameShadow(QFrame::Shadow::Sunken);
        label_53 = new QLabel(frame_2);
        label_53->setObjectName("label_53");
        label_53->setGeometry(QRect(70, 70, 281, 31));
        label_53->setFont(font1);
        label_53->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_53->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"border-radius: 10px;"));
        label_53->setTextFormat(Qt::TextFormat::RichText);
        label_53->setAlignment(Qt::AlignmentFlag::AlignCenter);
        line_5 = new QFrame(frame_2);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(30, 110, 651, 20));
        line_5->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);
        line_33 = new QFrame(frame_2);
        line_33->setObjectName("line_33");
        line_33->setGeometry(QRect(30, 680, 651, 20));
        line_33->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_33->setFrameShape(QFrame::Shape::HLine);
        line_33->setFrameShadow(QFrame::Shadow::Sunken);
        line_27 = new QFrame(frame_2);
        line_27->setObjectName("line_27");
        line_27->setGeometry(QRect(360, 70, 3, 41));
        line_27->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_27->setFrameShape(QFrame::Shape::VLine);
        line_27->setFrameShadow(QFrame::Shadow::Sunken);
        label_54 = new QLabel(frame_2);
        label_54->setObjectName("label_54");
        label_54->setGeometry(QRect(370, 70, 101, 31));
        label_54->setFont(font1);
        label_54->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_54->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"border-radius: 10px;"));
        label_54->setTextFormat(Qt::TextFormat::RichText);
        label_54->setAlignment(Qt::AlignmentFlag::AlignCenter);
        frame_9 = new QFrame(frame_2);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(30, 120, 651, 571));
        frame_9->setMinimumSize(QSize(651, 571));
        frame_9->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);"));
        frame_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_9->setFrameShadow(QFrame::Shadow::Raised);
        rightArea = new QScrollArea(frame_9);
        rightArea->setObjectName("rightArea");
        rightArea->setGeometry(QRect(40, 0, 601, 571));
        rightArea->setMinimumSize(QSize(601, 571));
        rightArea->setWidgetResizable(true);
        rightList = new QWidget();
        rightList->setObjectName("rightList");
        rightList->setGeometry(QRect(0, 0, 601, 571));
        rightArea->setWidget(rightList);
        okButton = new QPushButton(mainFrame);
        okButton->setObjectName("okButton");
        okButton->setGeometry(QRect(380, 820, 351, 51));
        okButton->setFont(font1);
        okButton->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"border-radius: 10px;"));
        clearButton = new QPushButton(mainFrame);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(740, 820, 351, 51));
        clearButton->setFont(font1);
        clearButton->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"border-radius: 10px;"));
        title = new QLabel(mainFrame);
        title->setObjectName("title");
        title->setGeometry(QRect(20, 20, 361, 61));
        title->setFont(font);
        title->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        title->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"border-radius: 10px;"));
        title->setTextFormat(Qt::TextFormat::RichText);
        title->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        confirmationLabel = new QLabel(mainFrame);
        confirmationLabel->setObjectName("confirmationLabel");
        confirmationLabel->setGeometry(QRect(1108, 829, 331, 31));
        confirmationLabel->setFont(font1);
        confirmationLabel->setStyleSheet(QString::fromUtf8("color: white;"));

        retranslateUi(Store);

        QMetaObject::connectSlotsByName(Store);
    } // setupUi

    void retranslateUi(QWidget *Store)
    {
        Store->setWindowTitle(QCoreApplication::translate("Store", "Form", nullptr));
        label_23->setText(QCoreApplication::translate("Store", "Koszyk", nullptr));
        label_51->setText(QCoreApplication::translate("Store", "Nazwa", nullptr));
        label_52->setText(QCoreApplication::translate("Store", "Ilo\305\233\304\207", nullptr));
        label_24->setText(QCoreApplication::translate("Store", "Lista lek\303\263w w aptece", nullptr));
        label_53->setText(QCoreApplication::translate("Store", "Nazwa", nullptr));
        label_54->setText(QCoreApplication::translate("Store", "Stan", nullptr));
        okButton->setText(QCoreApplication::translate("Store", "Zatwierd\305\272", nullptr));
        clearButton->setText(QCoreApplication::translate("Store", "Wyczy\305\233\304\207", nullptr));
        title->setText(QCoreApplication::translate("Store", "Utw\303\263rz zam\303\263wienie", nullptr));
        confirmationLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Store: public Ui_Store {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOREWINDOW_H
