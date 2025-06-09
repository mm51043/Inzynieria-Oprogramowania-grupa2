/********************************************************************************
** Form generated from reading UI file 'profiladmin.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILADMIN_H
#define UI_PROFILADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profiladmin
{
public:
    QFrame *frame_52;
    QLabel *NameLabel_3;
    QFrame *line_35;
    QLabel *PeselLabel_2;
    QFrame *line_36;
    QFrame *line_37;
    QLabel *CTLabel_2;
    QLabel *pnstLabel_2;
    QFrame *line_38;
    QFrame *line_39;
    QLabel *MiastoLabel_2;
    QLabel *PeselLabel_7;
    QFrame *line_40;
    QLabel *NameLabel_4;
    QFrame *line_41;
    QLabel *PeselLabel_8;
    QPushButton *AdminUsun;
    QPushButton *AdminEdytuj;

    void setupUi(QWidget *profiladmin)
    {
        if (profiladmin->objectName().isEmpty())
            profiladmin->setObjectName("profiladmin");
        profiladmin->resize(557, 381);
        profiladmin->setMinimumSize(QSize(537, 381));
        frame_52 = new QFrame(profiladmin);
        frame_52->setObjectName("frame_52");
        frame_52->setGeometry(QRect(-10, 0, 571, 381));
        frame_52->setMinimumSize(QSize(571, 381));
        frame_52->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 149, 168);\n"
"border-radius: 10px;"));
        frame_52->setFrameShape(QFrame::Shape::StyledPanel);
        frame_52->setFrameShadow(QFrame::Shadow::Raised);
        NameLabel_3 = new QLabel(frame_52);
        NameLabel_3->setObjectName("NameLabel_3");
        NameLabel_3->setGeometry(QRect(20, 30, 261, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        NameLabel_3->setFont(font);
        NameLabel_3->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        NameLabel_3->setStyleSheet(QString::fromUtf8(""));
        NameLabel_3->setTextFormat(Qt::TextFormat::RichText);
        NameLabel_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        line_35 = new QFrame(frame_52);
        line_35->setObjectName("line_35");
        line_35->setGeometry(QRect(10, 70, 285, 3));
        line_35->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_35->setFrameShape(QFrame::Shape::VLine);
        line_35->setFrameShadow(QFrame::Shadow::Sunken);
        PeselLabel_2 = new QLabel(frame_52);
        PeselLabel_2->setObjectName("PeselLabel_2");
        PeselLabel_2->setGeometry(QRect(20, 80, 261, 41));
        PeselLabel_2->setFont(font);
        PeselLabel_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        PeselLabel_2->setStyleSheet(QString::fromUtf8(""));
        PeselLabel_2->setTextFormat(Qt::TextFormat::RichText);
        PeselLabel_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        line_36 = new QFrame(frame_52);
        line_36->setObjectName("line_36");
        line_36->setGeometry(QRect(10, 120, 285, 3));
        line_36->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_36->setFrameShape(QFrame::Shape::VLine);
        line_36->setFrameShadow(QFrame::Shadow::Sunken);
        line_37 = new QFrame(frame_52);
        line_37->setObjectName("line_37");
        line_37->setGeometry(QRect(10, 170, 285, 3));
        line_37->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_37->setFrameShape(QFrame::Shape::VLine);
        line_37->setFrameShadow(QFrame::Shadow::Sunken);
        CTLabel_2 = new QLabel(frame_52);
        CTLabel_2->setObjectName("CTLabel_2");
        CTLabel_2->setGeometry(QRect(20, 130, 261, 41));
        CTLabel_2->setFont(font);
        CTLabel_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        CTLabel_2->setStyleSheet(QString::fromUtf8(""));
        CTLabel_2->setTextFormat(Qt::TextFormat::RichText);
        CTLabel_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        pnstLabel_2 = new QLabel(frame_52);
        pnstLabel_2->setObjectName("pnstLabel_2");
        pnstLabel_2->setGeometry(QRect(20, 180, 261, 41));
        pnstLabel_2->setFont(font);
        pnstLabel_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        pnstLabel_2->setStyleSheet(QString::fromUtf8(""));
        pnstLabel_2->setTextFormat(Qt::TextFormat::RichText);
        pnstLabel_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        line_38 = new QFrame(frame_52);
        line_38->setObjectName("line_38");
        line_38->setGeometry(QRect(10, 170, 285, 3));
        line_38->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_38->setFrameShape(QFrame::Shape::VLine);
        line_38->setFrameShadow(QFrame::Shadow::Sunken);
        line_39 = new QFrame(frame_52);
        line_39->setObjectName("line_39");
        line_39->setGeometry(QRect(10, 220, 285, 3));
        line_39->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_39->setFrameShape(QFrame::Shape::VLine);
        line_39->setFrameShadow(QFrame::Shadow::Sunken);
        MiastoLabel_2 = new QLabel(frame_52);
        MiastoLabel_2->setObjectName("MiastoLabel_2");
        MiastoLabel_2->setGeometry(QRect(20, 230, 261, 31));
        MiastoLabel_2->setFont(font);
        MiastoLabel_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        MiastoLabel_2->setStyleSheet(QString::fromUtf8(""));
        MiastoLabel_2->setTextFormat(Qt::TextFormat::RichText);
        MiastoLabel_2->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        PeselLabel_7 = new QLabel(frame_52);
        PeselLabel_7->setObjectName("PeselLabel_7");
        PeselLabel_7->setGeometry(QRect(20, 280, 261, 41));
        PeselLabel_7->setFont(font);
        PeselLabel_7->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        PeselLabel_7->setStyleSheet(QString::fromUtf8(""));
        PeselLabel_7->setTextFormat(Qt::TextFormat::RichText);
        PeselLabel_7->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        line_40 = new QFrame(frame_52);
        line_40->setObjectName("line_40");
        line_40->setGeometry(QRect(10, 270, 285, 3));
        line_40->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_40->setFrameShape(QFrame::Shape::VLine);
        line_40->setFrameShadow(QFrame::Shadow::Sunken);
        NameLabel_4 = new QLabel(frame_52);
        NameLabel_4->setObjectName("NameLabel_4");
        NameLabel_4->setGeometry(QRect(230, 0, 261, 41));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        NameLabel_4->setFont(font1);
        NameLabel_4->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        NameLabel_4->setStyleSheet(QString::fromUtf8(""));
        NameLabel_4->setTextFormat(Qt::TextFormat::RichText);
        NameLabel_4->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        line_41 = new QFrame(frame_52);
        line_41->setObjectName("line_41");
        line_41->setGeometry(QRect(10, 320, 285, 3));
        line_41->setStyleSheet(QString::fromUtf8("background-color: white;"));
        line_41->setFrameShape(QFrame::Shape::VLine);
        line_41->setFrameShadow(QFrame::Shadow::Sunken);
        PeselLabel_8 = new QLabel(frame_52);
        PeselLabel_8->setObjectName("PeselLabel_8");
        PeselLabel_8->setGeometry(QRect(10, 330, 261, 41));
        PeselLabel_8->setFont(font);
        PeselLabel_8->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        PeselLabel_8->setStyleSheet(QString::fromUtf8(""));
        PeselLabel_8->setTextFormat(Qt::TextFormat::RichText);
        PeselLabel_8->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        AdminUsun = new QPushButton(frame_52);
        AdminUsun->setObjectName("AdminUsun");
        AdminUsun->setGeometry(QRect(350, 310, 191, 51));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        AdminUsun->setFont(font2);
        AdminUsun->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);\n"
"       border-radius: 10px;"));
        AdminEdytuj = new QPushButton(frame_52);
        AdminEdytuj->setObjectName("AdminEdytuj");
        AdminEdytuj->setGeometry(QRect(350, 240, 191, 51));
        AdminEdytuj->setFont(font2);
        AdminEdytuj->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 41, 94);\n"
"       border-radius: 10px;"));

        retranslateUi(profiladmin);

        QMetaObject::connectSlotsByName(profiladmin);
    } // setupUi

    void retranslateUi(QWidget *profiladmin)
    {
        profiladmin->setWindowTitle(QCoreApplication::translate("profiladmin", "Form", nullptr));
        NameLabel_3->setText(QCoreApplication::translate("profiladmin", "FirstName LastName", nullptr));
        PeselLabel_2->setText(QCoreApplication::translate("profiladmin", "Pesel", nullptr));
        CTLabel_2->setText(QCoreApplication::translate("profiladmin", "nr tel. ", nullptr));
        pnstLabel_2->setText(QCoreApplication::translate("profiladmin", "Polska", nullptr));
        MiastoLabel_2->setText(QCoreApplication::translate("profiladmin", "Szczecin", nullptr));
        PeselLabel_7->setText(QCoreApplication::translate("profiladmin", "ul. ", nullptr));
        NameLabel_4->setText(QCoreApplication::translate("profiladmin", "Kartoteka", nullptr));
        PeselLabel_8->setText(QCoreApplication::translate("profiladmin", "NumerPacjenta", nullptr));
        AdminUsun->setText(QCoreApplication::translate("profiladmin", "Usun", nullptr));
        AdminEdytuj->setText(QCoreApplication::translate("profiladmin", "Edytuj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class profiladmin: public Ui_profiladmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILADMIN_H
