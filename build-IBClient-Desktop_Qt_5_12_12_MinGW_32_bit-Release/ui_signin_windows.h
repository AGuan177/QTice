/********************************************************************************
** Form generated from reading UI file 'signin_windows.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_WINDOWS_H
#define UI_SIGNIN_WINDOWS_H

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

class Ui_Signin_Windows
{
public:
    QWidget *widget;
    QWidget *widget_3;
    QWidget *widget_4;
    QWidget *widget_5;
    QLabel *label;
    QPushButton *logo;
    QWidget *widget_2;
    QPushButton *pushButtonRegster;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonLogin;
    QSpacerItem *horizontalSpacer_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPassword;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Signin_Windows)
    {
        if (Signin_Windows->objectName().isEmpty())
            Signin_Windows->setObjectName(QString::fromUtf8("Signin_Windows"));
        Signin_Windows->resize(742, 575);
        Signin_Windows->setStyleSheet(QString::fromUtf8("QWidget{\n"
"    background:rgb(245,245,245);\n"
"    \n"
"}\n"
"\n"
"QLineEdit{\n"
"	border:none;\n"
"	background:rgb(235,235,235);\n"
"}\n"
""));
        widget = new QWidget(Signin_Windows);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(-10, 0, 751, 171));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setContextMenuPolicy(Qt::PreventContextMenu);
        widget->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/img/titlt2.png)"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(0, 0, 120, 80));
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(0, 0, 181, 161));
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(0, 0, 741, 161));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 40, 291, 91));
        label->setStyleSheet(QString::fromUtf8("font: 36pt \"Kunstler Script\";\n"
"background:transparent;\n"
""));
        logo = new QPushButton(widget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(80, 50, 111, 81));
        logo->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        widget_2 = new QWidget(Signin_Windows);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(-20, 120, 761, 471));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        pushButtonRegster = new QPushButton(widget_2);
        pushButtonRegster->setObjectName(QString::fromUtf8("pushButtonRegster"));
        pushButtonRegster->setGeometry(QRect(30, 410, 91, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        pushButtonRegster->setFont(font);
        pushButtonRegster->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(82, 82, 82);\n"
"background:rgb(245,245,245);"));
        horizontalLayoutWidget = new QWidget(widget_2);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 300, 741, 101));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonLogin = new QPushButton(horizontalLayoutWidget);
        pushButtonLogin->setObjectName(QString::fromUtf8("pushButtonLogin"));
        sizePolicy.setHeightForWidth(pushButtonLogin->sizePolicy().hasHeightForWidth());
        pushButtonLogin->setSizePolicy(sizePolicy);
        pushButtonLogin->setMinimumSize(QSize(150, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        pushButtonLogin->setFont(font1);
        pushButtonLogin->setStyleSheet(QString::fromUtf8("background-color: rgb(46,46,46);\n"
"color: rgb(255, 255, 255);\n"
"border-radiux: 505px"));

        horizontalLayout->addWidget(pushButtonLogin);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayoutWidget_2 = new QWidget(widget_2);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 70, 741, 231));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEditUsername = new QLineEdit(horizontalLayoutWidget_2);
        lineEditUsername->setObjectName(QString::fromUtf8("lineEditUsername"));
        sizePolicy.setHeightForWidth(lineEditUsername->sizePolicy().hasHeightForWidth());
        lineEditUsername->setSizePolicy(sizePolicy);
        lineEditUsername->setMinimumSize(QSize(350, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        lineEditUsername->setFont(font2);
        lineEditUsername->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(lineEditUsername);

        lineEditPassword = new QLineEdit(horizontalLayoutWidget_2);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        sizePolicy.setHeightForWidth(lineEditPassword->sizePolicy().hasHeightForWidth());
        lineEditPassword->setSizePolicy(sizePolicy);
        lineEditPassword->setMinimumSize(QSize(350, 50));
        lineEditPassword->setFont(font2);
        lineEditPassword->setStyleSheet(QString::fromUtf8(""));
        lineEditPassword->setFrame(true);
        lineEditPassword->setEchoMode(QLineEdit::Normal);

        verticalLayout->addWidget(lineEditPassword);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        widget_2->raise();
        widget->raise();

        retranslateUi(Signin_Windows);

        QMetaObject::connectSlotsByName(Signin_Windows);
    } // setupUi

    void retranslateUi(QWidget *Signin_Windows)
    {
        Signin_Windows->setWindowTitle(QApplication::translate("Signin_Windows", "Form", nullptr));
        label->setText(QApplication::translate("Signin_Windows", "IceBreaker", nullptr));
        logo->setText(QString());
        pushButtonRegster->setText(QApplication::translate("Signin_Windows", "\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
        pushButtonLogin->setText(QApplication::translate("Signin_Windows", "\347\231\273 \345\275\225", nullptr));
        lineEditUsername->setInputMask(QString());
        lineEditUsername->setText(QString());
        lineEditUsername->setPlaceholderText(QApplication::translate("Signin_Windows", "  \350\264\246 \345\217\267", nullptr));
        lineEditPassword->setInputMask(QString());
        lineEditPassword->setText(QString());
        lineEditPassword->setPlaceholderText(QApplication::translate("Signin_Windows", "  \345\257\206 \347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signin_Windows: public Ui_Signin_Windows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_WINDOWS_H
