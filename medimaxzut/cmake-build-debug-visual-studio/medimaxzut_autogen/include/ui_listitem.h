/********************************************************************************
** Form generated from reading UI file 'listitem.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTITEM_H
#define UI_LISTITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListItem
{
public:
    QFrame *frame_29;
    QFrame *frame_30;
    QFrame *frame;
    QLabel *phoneLabel;
    QFrame *line_9;
    QFrame *line_24;
    QLabel *peselLabel;
    QLabel *lastNameLabel;
    QFrame *line_8;
    QFrame *line_37;
    QLabel *firstNameLabel;
    QPushButton *profileButton;

    void setupUi(QWidget *ListItem)
    {
        if (ListItem->objectName().isEmpty())
            ListItem->setObjectName("ListItem");
        ListItem->resize(1301, 61);
        ListItem->setMinimumSize(QSize(1301, 61));
        ListItem->setMaximumSize(QSize(1301, 61));
        ListItem->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);\n"
"border-radius: 10px;"));
        frame_29 = new QFrame(ListItem);
        frame_29->setObjectName("frame_29");
        frame_29->setGeometry(QRect(1060, 430, 241, 41));
        frame_29->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);\n"
"border-radius: 10px;"));
        frame_29->setFrameShape(QFrame::Shape::StyledPanel);
        frame_29->setFrameShadow(QFrame::Shadow::Raised);
        frame_30 = new QFrame(frame_29);
        frame_30->setObjectName("frame_30");
        frame_30->setGeometry(QRect(270, 60, 841, 61));
        frame_30->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"border-radius: 10px;"));
        frame_30->setFrameShape(QFrame::Shape::StyledPanel);
        frame_30->setFrameShadow(QFrame::Shadow::Raised);
        frame = new QFrame(ListItem);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 1301, 61));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"border-radius: 10px;\n"
""));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        phoneLabel = new QLabel(frame);
        phoneLabel->setObjectName("phoneLabel");
        phoneLabel->setGeometry(QRect(820, 10, 221, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        phoneLabel->setFont(font);
        phoneLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        phoneLabel->setStyleSheet(QString::fromUtf8(""));
        phoneLabel->setTextFormat(Qt::TextFormat::RichText);
        phoneLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        line_9 = new QFrame(frame);
        line_9->setObjectName("line_9");
        line_9->setGeometry(QRect(1050, 10, 3, 41));
        line_9->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_9->setFrameShape(QFrame::Shape::VLine);
        line_9->setFrameShadow(QFrame::Shadow::Sunken);
        line_24 = new QFrame(frame);
        line_24->setObjectName("line_24");
        line_24->setGeometry(QRect(250, 10, 3, 41));
        line_24->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_24->setFrameShape(QFrame::Shape::VLine);
        line_24->setFrameShadow(QFrame::Shadow::Sunken);
        peselLabel = new QLabel(frame);
        peselLabel->setObjectName("peselLabel");
        peselLabel->setGeometry(QRect(550, 10, 251, 41));
        peselLabel->setFont(font);
        peselLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        peselLabel->setStyleSheet(QString::fromUtf8(""));
        peselLabel->setTextFormat(Qt::TextFormat::RichText);
        peselLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lastNameLabel = new QLabel(frame);
        lastNameLabel->setObjectName("lastNameLabel");
        lastNameLabel->setGeometry(QRect(270, 10, 251, 41));
        lastNameLabel->setFont(font);
        lastNameLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        lastNameLabel->setStyleSheet(QString::fromUtf8(""));
        lastNameLabel->setTextFormat(Qt::TextFormat::RichText);
        lastNameLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        line_8 = new QFrame(frame);
        line_8->setObjectName("line_8");
        line_8->setGeometry(QRect(540, 10, 3, 41));
        line_8->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_8->setFrameShape(QFrame::Shape::VLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);
        line_37 = new QFrame(frame);
        line_37->setObjectName("line_37");
        line_37->setGeometry(QRect(810, 10, 3, 41));
        line_37->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_37->setFrameShape(QFrame::Shape::VLine);
        line_37->setFrameShadow(QFrame::Shadow::Sunken);
        firstNameLabel = new QLabel(frame);
        firstNameLabel->setObjectName("firstNameLabel");
        firstNameLabel->setGeometry(QRect(20, 10, 221, 41));
        firstNameLabel->setFont(font);
        firstNameLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        firstNameLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"border-radius: 10px;\n"
"\n"
""));
        firstNameLabel->setTextFormat(Qt::TextFormat::RichText);
        firstNameLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        profileButton = new QPushButton(frame);
        profileButton->setObjectName("profileButton");
        profileButton->setGeometry(QRect(1074, 10, 201, 41));
        profileButton->setFont(font);
        profileButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);\n"
"border-radius: 10px;"));

        retranslateUi(ListItem);

        QMetaObject::connectSlotsByName(ListItem);
    } // setupUi

    void retranslateUi(QWidget *ListItem)
    {
        ListItem->setWindowTitle(QCoreApplication::translate("ListItem", "Form", nullptr));
        phoneLabel->setText(QCoreApplication::translate("ListItem", "7:27, 2727.07.27", nullptr));
        peselLabel->setText(QCoreApplication::translate("ListItem", "Administrator", nullptr));
        lastNameLabel->setText(QCoreApplication::translate("ListItem", "Nowak", nullptr));
        firstNameLabel->setText(QCoreApplication::translate("ListItem", "Jan", nullptr));
        profileButton->setText(QCoreApplication::translate("ListItem", "Poka\305\274 profil", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListItem: public Ui_ListItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTITEM_H
