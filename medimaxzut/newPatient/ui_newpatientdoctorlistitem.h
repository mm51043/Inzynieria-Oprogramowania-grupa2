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
    QLabel *label_31;
    QFrame *line_14;
    QLabel *label_36;
    QLabel *label_32;
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
        label_31 = new QLabel(frame_26);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(20, 10, 81, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_31->setFont(font);
        label_31->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_31->setStyleSheet(QString::fromUtf8(""));
        label_31->setTextFormat(Qt::TextFormat::RichText);
        label_31->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        line_14 = new QFrame(frame_26);
        line_14->setObjectName("line_14");
        line_14->setGeometry(QRect(180, 10, 3, 41));
        line_14->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_14->setFrameShape(QFrame::Shape::VLine);
        line_14->setFrameShadow(QFrame::Shadow::Sunken);
        label_36 = new QLabel(frame_26);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(190, 10, 131, 41));
        label_36->setFont(font);
        label_36->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_36->setStyleSheet(QString::fromUtf8(""));
        label_36->setTextFormat(Qt::TextFormat::RichText);
        label_36->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_32 = new QLabel(frame_26);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(370, 10, 161, 41));
        label_32->setFont(font);
        label_32->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_32->setStyleSheet(QString::fromUtf8(""));
        label_32->setTextFormat(Qt::TextFormat::RichText);
        label_32->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
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
        label_36->raise();
        line_10->raise();
        line_11->raise();
        label_31->raise();
        line_14->raise();
        label_32->raise();
        docButton->raise();

        retranslateUi(NewPatientDoctorListItem);

        QMetaObject::connectSlotsByName(NewPatientDoctorListItem);
    } // setupUi

    void retranslateUi(QWidget *NewPatientDoctorListItem)
    {
        NewPatientDoctorListItem->setWindowTitle(QCoreApplication::translate("NewPatientDoctorListItem", "Form", nullptr));
        label_31->setText(QCoreApplication::translate("NewPatientDoctorListItem", "Imie1", nullptr));
        label_36->setText(QCoreApplication::translate("NewPatientDoctorListItem", "Nazwisko1", nullptr));
        label_32->setText(QCoreApplication::translate("NewPatientDoctorListItem", "Gabinet1", nullptr));
        docButton->setText(QCoreApplication::translate("NewPatientDoctorListItem", "Wybierz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewPatientDoctorListItem: public Ui_NewPatientDoctorListItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPATIENTDOCTORLISTITEM_H
