/********************************************************************************
** Form generated from reading UI file 'storeitem.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOREITEM_H
#define UI_STOREITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_storeitem
{
public:
    QFrame *frame_50;
    QFrame *line_26;
    QFrame *line_27;
    QLabel *medNumLabel;
    QLabel *medNameLabel;
    QPushButton *storeUpdateButton;

    void setupUi(QWidget *storeitem)
    {
        if (storeitem->objectName().isEmpty())
            storeitem->setObjectName("storeitem");
        storeitem->resize(571, 61);
        frame_50 = new QFrame(storeitem);
        frame_50->setObjectName("frame_50");
        frame_50->setGeometry(QRect(0, 0, 571, 61));
        frame_50->setMinimumSize(QSize(571, 61));
        frame_50->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"border-radius: 10px;"));
        frame_50->setFrameShape(QFrame::Shape::StyledPanel);
        frame_50->setFrameShadow(QFrame::Shadow::Raised);
        line_26 = new QFrame(frame_50);
        line_26->setObjectName("line_26");
        line_26->setGeometry(QRect(290, 10, 3, 41));
        line_26->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_26->setFrameShape(QFrame::Shape::VLine);
        line_26->setFrameShadow(QFrame::Shadow::Sunken);
        line_27 = new QFrame(frame_50);
        line_27->setObjectName("line_27");
        line_27->setGeometry(QRect(410, 10, 3, 41));
        line_27->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_27->setFrameShape(QFrame::Shape::VLine);
        line_27->setFrameShadow(QFrame::Shadow::Sunken);
        medNumLabel = new QLabel(frame_50);
        medNumLabel->setObjectName("medNumLabel");
        medNumLabel->setGeometry(QRect(310, 10, 81, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        medNumLabel->setFont(font);
        medNumLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        medNumLabel->setStyleSheet(QString::fromUtf8(""));
        medNumLabel->setTextFormat(Qt::TextFormat::RichText);
        medNumLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        medNameLabel = new QLabel(frame_50);
        medNameLabel->setObjectName("medNameLabel");
        medNameLabel->setGeometry(QRect(20, 10, 261, 41));
        medNameLabel->setFont(font);
        medNameLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        medNameLabel->setStyleSheet(QString::fromUtf8(""));
        medNameLabel->setTextFormat(Qt::TextFormat::RichText);
        medNameLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        storeUpdateButton = new QPushButton(frame_50);
        storeUpdateButton->setObjectName("storeUpdateButton");
        storeUpdateButton->setGeometry(QRect(420, 10, 141, 41));
        storeUpdateButton->setFont(font);
        storeUpdateButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);\n"
"border-radius: 10px;\n"
"color: white;"));

        retranslateUi(storeitem);

        QMetaObject::connectSlotsByName(storeitem);
    } // setupUi

    void retranslateUi(QWidget *storeitem)
    {
        storeitem->setWindowTitle(QCoreApplication::translate("storeitem", "Form", nullptr));
        medNumLabel->setText(QCoreApplication::translate("storeitem", "1", nullptr));
        medNameLabel->setText(QCoreApplication::translate("storeitem", "Lek3", nullptr));
        storeUpdateButton->setText(QCoreApplication::translate("storeitem", "Dodaj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class storeitem: public Ui_storeitem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOREITEM_H
