/********************************************************************************
** Form generated from reading UI file 'mailext.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAILEXT_H
#define UI_MAILEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MailExt
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelDetails;

    void setupUi(QWidget *MailExt)
    {
        if (MailExt->objectName().isEmpty())
            MailExt->setObjectName("MailExt");
        MailExt->resize(1301, 100);
        MailExt->setMinimumSize(QSize(0, 40));
        MailExt->setMaximumSize(QSize(16777215, 5000));
        MailExt->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(MailExt);
#ifndef Q_OS_MAC
        verticalLayout->setSpacing(6);
#endif
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(MailExt);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color:rgb(255, 255, 255)"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        labelDetails = new QLabel(frame);
        labelDetails->setObjectName("labelDetails");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelDetails->sizePolicy().hasHeightForWidth());
        labelDetails->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        labelDetails->setFont(font);
        labelDetails->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"color: black;"));
        labelDetails->setWordWrap(true);

        verticalLayout_2->addWidget(labelDetails);


        verticalLayout->addWidget(frame);


        retranslateUi(MailExt);

        QMetaObject::connectSlotsByName(MailExt);
    } // setupUi

    void retranslateUi(QWidget *MailExt)
    {
        labelDetails->setText(QCoreApplication::translate("MailExt", "text", nullptr));
        (void)MailExt;
    } // retranslateUi

};

namespace Ui {
    class MailExt: public Ui_MailExt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAILEXT_H
