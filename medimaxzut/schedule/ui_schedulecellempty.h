/********************************************************************************
** Form generated from reading UI file 'schedulecellempty.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULECELLEMPTY_H
#define UI_SCHEDULECELLEMPTY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScheduleCellEmpty
{
public:
    QFrame *mainFrame;
    QPushButton *pushButton;

    void setupUi(QWidget *ScheduleCellEmpty)
    {
        if (ScheduleCellEmpty->objectName().isEmpty())
            ScheduleCellEmpty->setObjectName("ScheduleCellEmpty");
        ScheduleCellEmpty->resize(231, 61);
        mainFrame = new QFrame(ScheduleCellEmpty);
        mainFrame->setObjectName("mainFrame");
        mainFrame->setGeometry(QRect(0, 0, 231, 61));
        mainFrame->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color: rgb(50, 149, 168);"));
        mainFrame->setFrameShape(QFrame::Shape::StyledPanel);
        mainFrame->setFrameShadow(QFrame::Shadow::Raised);
        pushButton = new QPushButton(mainFrame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 231, 61));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        pushButton->setFont(font);

        retranslateUi(ScheduleCellEmpty);

        QMetaObject::connectSlotsByName(ScheduleCellEmpty);
    } // setupUi

    void retranslateUi(QWidget *ScheduleCellEmpty)
    {
        ScheduleCellEmpty->setWindowTitle(QCoreApplication::translate("ScheduleCellEmpty", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("ScheduleCellEmpty", "Wybierz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScheduleCellEmpty: public Ui_ScheduleCellEmpty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULECELLEMPTY_H
