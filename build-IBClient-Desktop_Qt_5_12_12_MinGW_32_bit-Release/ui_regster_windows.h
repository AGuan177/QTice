/********************************************************************************
** Form generated from reading UI file 'regster_windows.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGSTER_WINDOWS_H
#define UI_REGSTER_WINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Regster_Windows
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonRegster;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QPushButton *logo;
    QLabel *label;
    QWidget *widget_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPassword;
    QLineEdit *lineEditPassword_2;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *Regster_Windows)
    {
        if (Regster_Windows->objectName().isEmpty())
            Regster_Windows->setObjectName(QString::fromUtf8("Regster_Windows"));
        Regster_Windows->resize(500, 417);
        Regster_Windows->setStyleSheet(QString::fromUtf8("QWidget{\n"
"    background:rgb(245,245,245);\n"
"    \n"
"}\n"
"\n"
"QLineEdit{\n"
"	border:none;\n"
"	background:rgb(235,235,235);\n"
"}"));
        horizontalLayoutWidget = new QWidget(Regster_Windows);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 320, 501, 81));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButtonRegster = new QPushButton(horizontalLayoutWidget);
        pushButtonRegster->setObjectName(QString::fromUtf8("pushButtonRegster"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonRegster->sizePolicy().hasHeightForWidth());
        pushButtonRegster->setSizePolicy(sizePolicy);
        pushButtonRegster->setMinimumSize(QSize(100, 40));
        pushButtonRegster->setMaximumSize(QSize(100, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        pushButtonRegster->setFont(font);
        pushButtonRegster->setStyleSheet(QString::fromUtf8("background-color: rgb(46,46,46);\n"
"color: rgb(255, 255, 255);\n"
"border:none;"));

        horizontalLayout->addWidget(pushButtonRegster);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget = new QWidget(Regster_Windows);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 501, 131));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QString::fromUtf8("#widget{background-image: url(:/new/prefix1/img/title1.png);}"));
        logo = new QPushButton(widget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(30, 30, 81, 71));
        logo->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
""));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 40, 281, 61));
        label->setStyleSheet(QString::fromUtf8("font: 36pt \"Kunstler Script\";\n"
"background-color:transparent;\n"
""));
        widget_2 = new QWidget(Regster_Windows);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(-1, 110, 501, 301));
        horizontalLayoutWidget_2 = new QWidget(widget_2);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 40, 501, 132));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEditUsername = new QLineEdit(horizontalLayoutWidget_2);
        lineEditUsername->setObjectName(QString::fromUtf8("lineEditUsername"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditUsername->sizePolicy().hasHeightForWidth());
        lineEditUsername->setSizePolicy(sizePolicy1);
        lineEditUsername->setMinimumSize(QSize(300, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        lineEditUsername->setFont(font1);
        lineEditUsername->setStyleSheet(QString::fromUtf8("border-bottom-color:black;"));

        verticalLayout->addWidget(lineEditUsername);

        lineEditPassword = new QLineEdit(horizontalLayoutWidget_2);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        sizePolicy.setHeightForWidth(lineEditPassword->sizePolicy().hasHeightForWidth());
        lineEditPassword->setSizePolicy(sizePolicy);
        lineEditPassword->setMinimumSize(QSize(300, 40));
        lineEditPassword->setFont(font1);
        lineEditPassword->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEditPassword);

        lineEditPassword_2 = new QLineEdit(horizontalLayoutWidget_2);
        lineEditPassword_2->setObjectName(QString::fromUtf8("lineEditPassword_2"));
        sizePolicy.setHeightForWidth(lineEditPassword_2->sizePolicy().hasHeightForWidth());
        lineEditPassword_2->setSizePolicy(sizePolicy);
        lineEditPassword_2->setMinimumSize(QSize(300, 40));
        lineEditPassword_2->setFont(font1);
        lineEditPassword_2->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEditPassword_2);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        widget_2->raise();
        horizontalLayoutWidget->raise();
        widget->raise();

        retranslateUi(Regster_Windows);

        QMetaObject::connectSlotsByName(Regster_Windows);
    } // setupUi

    void retranslateUi(QWidget *Regster_Windows)
    {
        Regster_Windows->setWindowTitle(QApplication::translate("Regster_Windows", "Form", nullptr));
        pushButtonRegster->setText(QApplication::translate("Regster_Windows", "\346\263\250 \345\206\214", nullptr));
        logo->setText(QString());
        label->setText(QApplication::translate("Regster_Windows", "IceBreaker", nullptr));
        lineEditUsername->setPlaceholderText(QApplication::translate("Regster_Windows", "  \350\264\246 \345\217\267", nullptr));
        lineEditPassword->setText(QString());
        lineEditPassword->setPlaceholderText(QApplication::translate("Regster_Windows", "  \345\257\206 \347\240\201", nullptr));
        lineEditPassword_2->setText(QString());
        lineEditPassword_2->setPlaceholderText(QApplication::translate("Regster_Windows", "  \347\241\256 \350\256\244 \345\257\206 \347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Regster_Windows: public Ui_Regster_Windows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGSTER_WINDOWS_H
