/********************************************************************************
** Form generated from reading UI file 'newpatient.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPATIENT_H
#define UI_NEWPATIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewPatient
{
public:
    QFrame *mainFrame;
    QLabel *label_17;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_23;
    QPushButton *confirmButton;
    QLineEdit *patName;
    QLineEdit *patPesel;
    QLineEdit *patSurname;
    QPushButton *dbButton;
    QLabel *label_27;
    QLabel *label_28;
    QLineEdit *patHistory;
    QLineEdit *patPhone;
    QPushButton *addNewButton;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *patCity;
    QLineEdit *patStreet;
    QLabel *label_29;
    QLabel *label_30;
    QLineEdit *patHouse;
    QLineEdit *patApartment;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *patNameErr;
    QLabel *patPeselErr;
    QLabel *patSurnameErr;
    QLabel *patPhoneErr;
    QLabel *patCityErr;
    QLabel *patStreetErr;
    QLabel *patHouseErr;
    QLabel *patPeselDuplicate;
    QFrame *houdini;
    QLabel *label_26;
    QLabel *dateTime;
    QFrame *frame_7;
    QScrollArea *scrollArea;
    QWidget *docList;
    QLabel *label_25;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *scheduleButton;
    QLabel *doctorLabel;

    void setupUi(QWidget *NewPatient)
    {
        if (NewPatient->objectName().isEmpty())
            NewPatient->setObjectName("NewPatient");
        NewPatient->resize(1471, 901);
        mainFrame = new QFrame(NewPatient);
        mainFrame->setObjectName("mainFrame");
        mainFrame->setGeometry(QRect(0, 0, 1471, 901));
        mainFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"border-radius: 10px;"));
        mainFrame->setFrameShape(QFrame::Shape::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Shadow::Raised);
        label_17 = new QLabel(mainFrame);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(10, 20, 1451, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_17->setFont(font);
        label_17->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_17->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);"));
        label_17->setTextFormat(Qt::TextFormat::RichText);
        label_17->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_20 = new QLabel(mainFrame);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(20, 200, 181, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label_20->setFont(font1);
        label_20->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_20->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);"));
        label_20->setTextFormat(Qt::TextFormat::RichText);
        label_20->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_21 = new QLabel(mainFrame);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(20, 120, 181, 31));
        label_21->setFont(font1);
        label_21->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_21->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);"));
        label_21->setTextFormat(Qt::TextFormat::RichText);
        label_21->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_23 = new QLabel(mainFrame);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(20, 280, 181, 31));
        label_23->setFont(font1);
        label_23->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);"));
        label_23->setTextFormat(Qt::TextFormat::RichText);
        label_23->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        confirmButton = new QPushButton(mainFrame);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(1210, 810, 201, 61));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        confirmButton->setFont(font2);
        confirmButton->setMouseTracking(true);
        confirmButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);\n"
"border-radius: 10px;\n"
"color: white;"));
        patName = new QLineEdit(mainFrame);
        patName->setObjectName("patName");
        patName->setGeometry(QRect(20, 150, 600, 51));
        patName->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 45, 154);\n"
"border-radius: 10px;\n"
"color: white;"));
        patPesel = new QLineEdit(mainFrame);
        patPesel->setObjectName("patPesel");
        patPesel->setGeometry(QRect(20, 310, 600, 51));
        patPesel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 45, 154);\n"
"border-radius: 10px;\n"
"color: white;"));
        patSurname = new QLineEdit(mainFrame);
        patSurname->setObjectName("patSurname");
        patSurname->setGeometry(QRect(20, 230, 600, 51));
        patSurname->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 45, 154);\n"
"border-radius: 10px;\n"
"color: white;"));
        dbButton = new QPushButton(mainFrame);
        dbButton->setObjectName("dbButton");
        dbButton->setGeometry(QRect(360, 820, 261, 61));
        dbButton->setFont(font1);
        dbButton->setMouseTracking(true);
        dbButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);\n"
"border-radius: 10px;\n"
"color: white;\n"
""));
        label_27 = new QLabel(mainFrame);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(20, 360, 181, 31));
        label_27->setFont(font1);
        label_27->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_27->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);"));
        label_27->setTextFormat(Qt::TextFormat::RichText);
        label_27->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_28 = new QLabel(mainFrame);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(20, 520, 211, 31));
        label_28->setFont(font1);
        label_28->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_28->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);"));
        label_28->setTextFormat(Qt::TextFormat::RichText);
        label_28->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        patHistory = new QLineEdit(mainFrame);
        patHistory->setObjectName("patHistory");
        patHistory->setGeometry(QRect(20, 470, 600, 51));
        patHistory->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 45, 154);\n"
"border-radius: 10px;\n"
"color: white;"));
        patPhone = new QLineEdit(mainFrame);
        patPhone->setObjectName("patPhone");
        patPhone->setGeometry(QRect(20, 390, 600, 51));
        patPhone->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 45, 154);\n"
"border-radius: 10px;\n"
"color: white;"));
        addNewButton = new QPushButton(mainFrame);
        addNewButton->setObjectName("addNewButton");
        addNewButton->setGeometry(QRect(20, 820, 181, 61));
        addNewButton->setFont(font1);
        addNewButton->setMouseTracking(true);
        addNewButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);\n"
"border-radius: 10px;\n"
"color: white;\n"
""));
        label = new QLabel(mainFrame);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 830, 141, 41));
        label->setFont(font1);
        label->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label->setWordWrap(false);
        label_3 = new QLabel(mainFrame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(180, 90, 271, 31));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        label_3->setFont(font3);
        patCity = new QLineEdit(mainFrame);
        patCity->setObjectName("patCity");
        patCity->setGeometry(QRect(20, 550, 600, 51));
        patCity->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 45, 154);\n"
"border-radius: 10px;\n"
"color: white;"));
        patStreet = new QLineEdit(mainFrame);
        patStreet->setObjectName("patStreet");
        patStreet->setGeometry(QRect(20, 630, 600, 51));
        patStreet->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 45, 154);\n"
"border-radius: 10px;\n"
"color: white;"));
        label_29 = new QLabel(mainFrame);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(20, 600, 211, 31));
        label_29->setFont(font1);
        label_29->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_29->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);"));
        label_29->setTextFormat(Qt::TextFormat::RichText);
        label_29->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_30 = new QLabel(mainFrame);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(20, 440, 211, 31));
        label_30->setFont(font1);
        label_30->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_30->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);"));
        label_30->setTextFormat(Qt::TextFormat::RichText);
        label_30->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        patHouse = new QLineEdit(mainFrame);
        patHouse->setObjectName("patHouse");
        patHouse->setGeometry(QRect(20, 710, 291, 51));
        patHouse->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 45, 154);\n"
"border-radius: 10px;\n"
"color: white;"));
        patApartment = new QLineEdit(mainFrame);
        patApartment->setObjectName("patApartment");
        patApartment->setGeometry(QRect(330, 710, 291, 51));
        patApartment->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 45, 154);\n"
"border-radius: 10px;\n"
"color: white;"));
        label_33 = new QLabel(mainFrame);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(20, 680, 151, 31));
        label_33->setFont(font1);
        label_33->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_33->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);"));
        label_33->setTextFormat(Qt::TextFormat::RichText);
        label_33->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_34 = new QLabel(mainFrame);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(330, 680, 211, 31));
        label_34->setFont(font1);
        label_34->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_34->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);"));
        label_34->setTextFormat(Qt::TextFormat::RichText);
        label_34->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        patNameErr = new QLabel(mainFrame);
        patNameErr->setObjectName("patNameErr");
        patNameErr->setGeometry(QRect(410, 120, 211, 31));
        patNameErr->setFont(font1);
        patNameErr->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        patNameErr->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"color: red;"));
        patNameErr->setTextFormat(Qt::TextFormat::RichText);
        patNameErr->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        patPeselErr = new QLabel(mainFrame);
        patPeselErr->setObjectName("patPeselErr");
        patPeselErr->setGeometry(QRect(410, 280, 211, 31));
        patPeselErr->setFont(font1);
        patPeselErr->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        patPeselErr->setStyleSheet(QString::fromUtf8("color:red;\n"
"background-color: rgb(50, 149, 168);"));
        patPeselErr->setTextFormat(Qt::TextFormat::RichText);
        patPeselErr->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        patSurnameErr = new QLabel(mainFrame);
        patSurnameErr->setObjectName("patSurnameErr");
        patSurnameErr->setGeometry(QRect(410, 200, 211, 31));
        patSurnameErr->setFont(font1);
        patSurnameErr->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        patSurnameErr->setStyleSheet(QString::fromUtf8("color:red;\n"
"background-color: rgb(50, 149, 168);"));
        patSurnameErr->setTextFormat(Qt::TextFormat::RichText);
        patSurnameErr->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        patPhoneErr = new QLabel(mainFrame);
        patPhoneErr->setObjectName("patPhoneErr");
        patPhoneErr->setGeometry(QRect(410, 360, 211, 31));
        patPhoneErr->setFont(font1);
        patPhoneErr->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        patPhoneErr->setStyleSheet(QString::fromUtf8("color:red;\n"
"background-color: rgb(50, 149, 168);"));
        patPhoneErr->setTextFormat(Qt::TextFormat::RichText);
        patPhoneErr->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        patCityErr = new QLabel(mainFrame);
        patCityErr->setObjectName("patCityErr");
        patCityErr->setGeometry(QRect(410, 520, 211, 31));
        patCityErr->setFont(font1);
        patCityErr->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        patCityErr->setStyleSheet(QString::fromUtf8("color:red;\n"
"background-color: rgb(50, 149, 168);"));
        patCityErr->setTextFormat(Qt::TextFormat::RichText);
        patCityErr->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        patStreetErr = new QLabel(mainFrame);
        patStreetErr->setObjectName("patStreetErr");
        patStreetErr->setGeometry(QRect(410, 600, 211, 31));
        patStreetErr->setFont(font1);
        patStreetErr->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        patStreetErr->setStyleSheet(QString::fromUtf8("color:red;\n"
"background-color: rgb(50, 149, 168);"));
        patStreetErr->setTextFormat(Qt::TextFormat::RichText);
        patStreetErr->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        patHouseErr = new QLabel(mainFrame);
        patHouseErr->setObjectName("patHouseErr");
        patHouseErr->setGeometry(QRect(180, 680, 131, 31));
        patHouseErr->setFont(font1);
        patHouseErr->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        patHouseErr->setStyleSheet(QString::fromUtf8("color:red;\n"
"background-color: rgb(50, 149, 168);"));
        patHouseErr->setTextFormat(Qt::TextFormat::RichText);
        patHouseErr->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        patPeselDuplicate = new QLabel(mainFrame);
        patPeselDuplicate->setObjectName("patPeselDuplicate");
        patPeselDuplicate->setGeometry(QRect(20, 780, 211, 31));
        patPeselDuplicate->setFont(font1);
        patPeselDuplicate->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        patPeselDuplicate->setStyleSheet(QString::fromUtf8("color:red;\n"
"background-color: rgb(50, 149, 168);"));
        patPeselDuplicate->setTextFormat(Qt::TextFormat::RichText);
        patPeselDuplicate->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        houdini = new QFrame(mainFrame);
        houdini->setObjectName("houdini");
        houdini->setGeometry(QRect(639, 79, 821, 701));
        houdini->setFrameShape(QFrame::Shape::StyledPanel);
        houdini->setFrameShadow(QFrame::Shadow::Raised);
        label_26 = new QLabel(houdini);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(10, 490, 181, 31));
        label_26->setFont(font1);
        label_26->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_26->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);"));
        label_26->setTextFormat(Qt::TextFormat::RichText);
        label_26->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        dateTime = new QLabel(houdini);
        dateTime->setObjectName("dateTime");
        dateTime->setGeometry(QRect(10, 550, 771, 51));
        dateTime->setFont(font1);
        dateTime->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 45, 154);\n"
"color: white;"));
        frame_7 = new QFrame(houdini);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(10, 70, 801, 291));
        frame_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);"));
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        scrollArea = new QScrollArea(frame_7);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(9, 9, 781, 271));
        scrollArea->setWidgetResizable(true);
        docList = new QWidget();
        docList->setObjectName("docList");
        docList->setGeometry(QRect(0, 0, 781, 271));
        scrollArea->setWidget(docList);
        label_25 = new QLabel(houdini);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(10, 40, 181, 21));
        label_25->setFont(font1);
        label_25->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_25->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);"));
        label_25->setTextFormat(Qt::TextFormat::RichText);
        label_25->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_2 = new QLabel(houdini);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 400, 171, 41));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(houdini);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, 10, 321, 31));
        label_4->setFont(font3);
        scheduleButton = new QPushButton(houdini);
        scheduleButton->setObjectName("scheduleButton");
        scheduleButton->setGeometry(QRect(10, 390, 181, 61));
        scheduleButton->setFont(font1);
        scheduleButton->setMouseTracking(true);
        scheduleButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);\n"
"border-radius: 10px;\n"
"color: white;\n"
""));
        doctorLabel = new QLabel(houdini);
        doctorLabel->setObjectName("doctorLabel");
        doctorLabel->setGeometry(QRect(400, 396, 381, 51));
        doctorLabel->setFont(font1);
        doctorLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 45, 154);\n"
"color: white;"));
        label_17->raise();
        label_20->raise();
        label_21->raise();
        label_23->raise();
        confirmButton->raise();
        dbButton->raise();
        label_27->raise();
        label_28->raise();
        addNewButton->raise();
        label->raise();
        label_3->raise();
        label_29->raise();
        label_30->raise();
        label_33->raise();
        label_34->raise();
        patApartment->raise();
        patNameErr->raise();
        patPeselErr->raise();
        patSurnameErr->raise();
        patPhoneErr->raise();
        patCityErr->raise();
        patStreetErr->raise();
        patHouseErr->raise();
        patHouse->raise();
        patStreet->raise();
        patCity->raise();
        patPhone->raise();
        patPesel->raise();
        patSurname->raise();
        patName->raise();
        patHistory->raise();
        patPeselDuplicate->raise();
        houdini->raise();

        retranslateUi(NewPatient);

        QMetaObject::connectSlotsByName(NewPatient);
    } // setupUi

    void retranslateUi(QWidget *NewPatient)
    {
        NewPatient->setWindowTitle(QCoreApplication::translate("NewPatient", "Form", nullptr));
        label_17->setText(QCoreApplication::translate("NewPatient", "Dodawanie Wizyty", nullptr));
        label_20->setText(QCoreApplication::translate("NewPatient", "Nazwisko:", nullptr));
        label_21->setText(QCoreApplication::translate("NewPatient", "Imi\304\231:", nullptr));
        label_23->setText(QCoreApplication::translate("NewPatient", "Pesel:", nullptr));
        confirmButton->setText(QCoreApplication::translate("NewPatient", "Dodaj Wizyte", nullptr));
        dbButton->setText(QCoreApplication::translate("NewPatient", "Wybierz z Bazy Pacjent\303\263w", nullptr));
        label_27->setText(QCoreApplication::translate("NewPatient", "Numer Telefonu", nullptr));
        label_28->setText(QCoreApplication::translate("NewPatient", "Miasto", nullptr));
        addNewButton->setText(QCoreApplication::translate("NewPatient", "Dodaj Pacjenta", nullptr));
        label->setText(QCoreApplication::translate("NewPatient", "Lub", nullptr));
        label_3->setText(QCoreApplication::translate("NewPatient", "Wybierz/Dodaj Pacjenta", nullptr));
        label_29->setText(QCoreApplication::translate("NewPatient", "Ulica", nullptr));
        label_30->setText(QCoreApplication::translate("NewPatient", "Historia", nullptr));
        label_33->setText(QCoreApplication::translate("NewPatient", "Nr Domu", nullptr));
        label_34->setText(QCoreApplication::translate("NewPatient", "Nr Mieszkania", nullptr));
        patNameErr->setText(QCoreApplication::translate("NewPatient", "Pole wymagane", nullptr));
        patPeselErr->setText(QCoreApplication::translate("NewPatient", "Pole wymagane", nullptr));
        patSurnameErr->setText(QCoreApplication::translate("NewPatient", "Pole wymagane", nullptr));
        patPhoneErr->setText(QCoreApplication::translate("NewPatient", "Pole wymagane", nullptr));
        patCityErr->setText(QCoreApplication::translate("NewPatient", "Pole wymagane", nullptr));
        patStreetErr->setText(QCoreApplication::translate("NewPatient", "Pole wymagane", nullptr));
        patHouseErr->setText(QCoreApplication::translate("NewPatient", "Pole wymagane", nullptr));
        patPeselDuplicate->setText(QCoreApplication::translate("NewPatient", "Duplikat pesel", nullptr));
        label_26->setText(QCoreApplication::translate("NewPatient", "Wybrany termin", nullptr));
        dateTime->setText(QCoreApplication::translate("NewPatient", "TextLabel", nullptr));
        label_25->setText(QCoreApplication::translate("NewPatient", "Lekarze:", nullptr));
        label_2->setText(QCoreApplication::translate("NewPatient", "lekarza", nullptr));
        label_4->setText(QCoreApplication::translate("NewPatient", "Wybierz Lekarza i Termin Wizyty", nullptr));
        scheduleButton->setText(QCoreApplication::translate("NewPatient", "Harmonogram", nullptr));
        doctorLabel->setText(QCoreApplication::translate("NewPatient", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewPatient: public Ui_NewPatient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPATIENT_H
