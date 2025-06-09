/********************************************************************************
** Form generated from reading UI file 'prescriptionlistitem.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESCRIPTIONLISTITEM_H
#define UI_PRESCRIPTIONLISTITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrescriptionListItem
{
public:
    QFrame *frame_4;
    QFrame *line_19;
    QLabel *docLabel;
    QFrame *line_20;
    QLabel *patLabel;
    QPushButton *addButton;

    void setupUi(QWidget *PrescriptionListItem)
    {
        if (PrescriptionListItem->objectName().isEmpty())
            PrescriptionListItem->setObjectName("PrescriptionListItem");
        PrescriptionListItem->resize(1301, 61);
        PrescriptionListItem->setMinimumSize(QSize(1301, 61));
        frame_4 = new QFrame(PrescriptionListItem);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(0, 0, 1301, 61));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"border-radius: 10px;"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        line_19 = new QFrame(frame_4);
        line_19->setObjectName("line_19");
        line_19->setGeometry(QRect(1050, 10, 3, 41));
        line_19->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_19->setFrameShape(QFrame::Shape::VLine);
        line_19->setFrameShadow(QFrame::Shadow::Sunken);
        docLabel = new QLabel(frame_4);
        docLabel->setObjectName("docLabel");
        docLabel->setGeometry(QRect(570, 10, 471, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        docLabel->setFont(font);
        docLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        docLabel->setStyleSheet(QString::fromUtf8(""));
        docLabel->setTextFormat(Qt::TextFormat::RichText);
        docLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        line_20 = new QFrame(frame_4);
        line_20->setObjectName("line_20");
        line_20->setGeometry(QRect(560, 10, 3, 41));
        line_20->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_20->setFrameShape(QFrame::Shape::VLine);
        line_20->setFrameShadow(QFrame::Shadow::Sunken);
        patLabel = new QLabel(frame_4);
        patLabel->setObjectName("patLabel");
        patLabel->setGeometry(QRect(20, 10, 531, 41));
        patLabel->setFont(font);
        patLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        patLabel->setStyleSheet(QString::fromUtf8(""));
        patLabel->setTextFormat(Qt::TextFormat::RichText);
        patLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        addButton = new QPushButton(frame_4);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(1074, 10, 201, 41));
        addButton->setFont(font);
        addButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);\n"
"border-radius: 10px;\n"
"color: white"));

        retranslateUi(PrescriptionListItem);

        QMetaObject::connectSlotsByName(PrescriptionListItem);
    } // setupUi

    void retranslateUi(QWidget *PrescriptionListItem)
    {
        PrescriptionListItem->setWindowTitle(QCoreApplication::translate("PrescriptionListItem", "Form", nullptr));
        docLabel->setText(QCoreApplication::translate("PrescriptionListItem", "Administrator", nullptr));
        patLabel->setText(QCoreApplication::translate("PrescriptionListItem", "Jan", nullptr));
        addButton->setText(QCoreApplication::translate("PrescriptionListItem", "Wybierz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrescriptionListItem: public Ui_PrescriptionListItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESCRIPTIONLISTITEM_H
