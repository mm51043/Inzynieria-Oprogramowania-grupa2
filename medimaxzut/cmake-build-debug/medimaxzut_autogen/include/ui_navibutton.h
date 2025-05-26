/********************************************************************************
** Form generated from reading UI file 'navibutton.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIBUTTON_H
#define UI_NAVIBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NaviButton
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *NaviButton)
    {
        if (NaviButton->objectName().isEmpty())
            NaviButton->setObjectName("NaviButton");
        NaviButton->resize(201, 51);
        NaviButton->setMinimumSize(QSize(201, 51));
        NaviButton->setMaximumSize(QSize(201, 51));
        NaviButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 62, 154);\n"
"      border-radius: 10px;"));
        pushButton = new QPushButton(NaviButton);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(4, 0, 191, 51));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);\n"
"       border-radius: 10px;"));

        retranslateUi(NaviButton);

        QMetaObject::connectSlotsByName(NaviButton);
    } // setupUi

    void retranslateUi(QWidget *NaviButton)
    {
        NaviButton->setWindowTitle(QCoreApplication::translate("NaviButton", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("NaviButton", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NaviButton: public Ui_NaviButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIBUTTON_H
