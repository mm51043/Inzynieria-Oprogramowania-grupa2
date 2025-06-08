/********************************************************************************
** Form generated from reading UI file 'newpatientdoctorlistitem.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPATIENTDOCTORLISTITEM_H
#define UI_NEWPATIENTDOCTORLISTITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewPatientDoctorListItem
{
public:
    QFrame *frame_26;
    QFrame *line_10;
    QFrame *line_11;
    QLabel *docName;
    QFrame *line_14;
    QLabel *docSurname;
    QLabel *docRoom;
    QPushButton *docButton;

    void setupUi(QWidget *NewPatientDoctorListItem)
    {
        if (NewPatientDoctorListItem->objectName().isEmpty())
            NewPatientDoctorListItem->setObjectName("NewPatientDoctorListItem");
        NewPatientDoctorListItem->resize(751, 61);
        NewPatientDoctorListItem->setMinimumSize(QSize(751, 61));
        frame_26 = new QFrame(NewPatientDoctorListItem);
        frame_26->setObjectName("frame_26");
        frame_26->setGeometry(QRect(0, 0, 751, 61));
        frame_26->setMinimumSize(QSize(751, 61));
        frame_26->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"border-radius: 10px;"));
        frame_26->setFrameShape(QFrame::Shape::StyledPanel);
        frame_26->setFrameShadow(QFrame::Shadow::Raised);
        line_10 = new QFrame(frame_26);
        line_10->setObjectName("line_10");
        line_10->setGeometry(QRect(360, 10, 3, 41));
        line_10->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_10->setFrameShape(QFrame::Shape::VLine);
        line_10->setFrameShadow(QFrame::Shadow::Sunken);
        line_11 = new QFrame(frame_26);
        line_11->setObjectName("line_11");
        line_11->setGeometry(QRect(540, 10, 3, 41));
        line_11->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_11->setFrameShape(QFrame::Shape::VLine);
        line_11->setFrameShadow(QFrame::Shadow::Sunken);
        docName = new QLabel(frame_26);
        docName->setObjectName("docName");
        docName->setGeometry(QRect(20, 10, 81, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        docName->setFont(font);
        docName->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        docName->setStyleSheet(QString::fromUtf8(""));
        docName->setTextFormat(Qt::TextFormat::RichText);
        docName->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        line_14 = new QFrame(frame_26);
        line_14->setObjectName("line_14");
        line_14->setGeometry(QRect(180, 10, 3, 41));
        line_14->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_14->setFrameShape(QFrame::Shape::VLine);
        line_14->setFrameShadow(QFrame::Shadow::Sunken);
        docSurname = new QLabel(frame_26);
        docSurname->setObjectName("docSurname");
        docSurname->setGeometry(QRect(190, 10, 131, 41));
        docSurname->setFont(font);
        docSurname->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        docSurname->setStyleSheet(QString::fromUtf8(""));
        docSurname->setTextFormat(Qt::TextFormat::RichText);
        docSurname->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        docRoom = new QLabel(frame_26);
        docRoom->setObjectName("docRoom");
        docRoom->setGeometry(QRect(370, 10, 161, 41));
        docRoom->setFont(font);
        docRoom->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        docRoom->setStyleSheet(QString::fromUtf8(""));
        docRoom->setTextFormat(Qt::TextFormat::RichText);
        docRoom->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        docButton = new QPushButton(frame_26);
        docButton->setObjectName("docButton");
        docButton->setGeometry(QRect(550, 10, 191, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        docButton->setFont(font1);
        docButton->setMouseTracking(true);
        docButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);\n"
"border-radius: 10px;\n"
"color: white;\n"
""));
        docSurname->raise();
        line_10->raise();
        line_11->raise();
        docName->raise();
        line_14->raise();
        docRoom->raise();
        docButton->raise();

        retranslateUi(NewPatientDoctorListItem);

        QMetaObject::connectSlotsByName(NewPatientDoctorListItem);
    } // setupUi

    void retranslateUi(QWidget *NewPatientDoctorListItem)
    {
        NewPatientDoctorListItem->setWindowTitle(QCoreApplication::translate("NewPatientDoctorListItem", "Form", nullptr));
        docName->setText(QCoreApplication::translate("NewPatientDoctorListItem", "Imie1", nullptr));
        docSurname->setText(QCoreApplication::translate("NewPatientDoctorListItem", "Nazwisko1", nullptr));
        docRoom->setText(QCoreApplication::translate("NewPatientDoctorListItem", "Gabinet1", nullptr));
        docButton->setText(QCoreApplication::translate("NewPatientDoctorListItem", "Wybierz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewPatientDoctorListItem: public Ui_NewPatientDoctorListItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPATIENTDOCTORLISTITEM_H
