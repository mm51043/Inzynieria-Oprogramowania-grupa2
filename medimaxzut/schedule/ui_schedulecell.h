/********************************************************************************
** Form generated from reading UI file 'schedulecell.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULECELL_H
#define UI_SCHEDULECELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScheduleCell
{
public:
    QFrame *mainFrame;
    QLabel *title;
    QLabel *patient;

    void setupUi(QWidget *ScheduleCell)
    {
        if (ScheduleCell->objectName().isEmpty())
            ScheduleCell->setObjectName("ScheduleCell");
        ScheduleCell->resize(231, 61);
        ScheduleCell->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(0, 62, 154);"));
        mainFrame = new QFrame(ScheduleCell);
        mainFrame->setObjectName("mainFrame");
        mainFrame->setGeometry(QRect(0, 0, 231, 61));
        mainFrame->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(0, 62, 154);"));
        mainFrame->setFrameShape(QFrame::Shape::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Shadow::Raised);
        title = new QLabel(mainFrame);
        title->setObjectName("title");
        title->setGeometry(QRect(10, -1, 211, 31));
        QFont font;
        font.setBold(true);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("color:white;"));
        title->setAlignment(Qt::AlignmentFlag::AlignCenter);
        patient = new QLabel(mainFrame);
        patient->setObjectName("patient");
        patient->setGeometry(QRect(10, 30, 211, 31));
        patient->setFont(font);
        patient->setStyleSheet(QString::fromUtf8("color:white;"));
        patient->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(ScheduleCell);

        QMetaObject::connectSlotsByName(ScheduleCell);
    } // setupUi

    void retranslateUi(QWidget *ScheduleCell)
    {
        ScheduleCell->setWindowTitle(QCoreApplication::translate("ScheduleCell", "Form", nullptr));
        title->setText(QCoreApplication::translate("ScheduleCell", "TextLabel", nullptr));
        patient->setText(QCoreApplication::translate("ScheduleCell", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScheduleCell: public Ui_ScheduleCell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULECELL_H
