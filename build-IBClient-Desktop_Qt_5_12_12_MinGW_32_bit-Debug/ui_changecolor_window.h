/********************************************************************************
** Form generated from reading UI file 'changecolor_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGECOLOR_WINDOW_H
#define UI_CHANGECOLOR_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangeColor_Window
{
public:
    QWidget *widget;
    QLabel *label_6;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *icebreak;
    QPushButton *red;
    QPushButton *yellow;
    QPushButton *morandi;
    QPushButton *macaroon;
    QPushButton *green;
    QPushButton *pink;
    QPushButton *orange;
    QPushButton *purple;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;

    void setupUi(QDialog *ChangeColor_Window)
    {
        if (ChangeColor_Window->objectName().isEmpty())
            ChangeColor_Window->setObjectName(QString::fromUtf8("ChangeColor_Window"));
        ChangeColor_Window->resize(500, 400);
        ChangeColor_Window->setMinimumSize(QSize(500, 400));
        ChangeColor_Window->setMaximumSize(QSize(500, 400));
        ChangeColor_Window->setStyleSheet(QString::fromUtf8("background:rgb(245,245,245);"));
        widget = new QWidget(ChangeColor_Window);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 501, 101));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QString::fromUtf8("#widget{background-image:url(:/new/prefix1/img/title4.png);}\n"
""));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 10, 371, 71));
        label_6->setStyleSheet(QString::fromUtf8("font: 36pt \"Kunstler Script\";\n"
"background:transparent"));
        gridLayoutWidget_2 = new QWidget(ChangeColor_Window);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(30, 120, 259, 259));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        icebreak = new QPushButton(gridLayoutWidget_2);
        icebreak->setObjectName(QString::fromUtf8("icebreak"));
        icebreak->setMinimumSize(QSize(81, 81));
        icebreak->setMaximumSize(QSize(81, 81));
        icebreak->setStyleSheet(QString::fromUtf8("QPushButton {border-radius: 40px; \n"
"             background-color: #51A8DD;\n"
"             color: white;\n"
"             padding: 10px;}\n"
"QPushButton:pressed {\n"
"             background-color: #51A8DD;\n"
"             box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);}"));

        gridLayout_2->addWidget(icebreak, 0, 0, 1, 1);

        red = new QPushButton(gridLayoutWidget_2);
        red->setObjectName(QString::fromUtf8("red"));
        red->setMinimumSize(QSize(81, 81));
        red->setMaximumSize(QSize(81, 81));
        red->setStyleSheet(QString::fromUtf8("QPushButton {border-radius: 40px; \n"
"             background-color: #E16B8C;\n"
"             color: white;\n"
"             padding: 10px;}\n"
"QPushButton:pressed {\n"
"             background-color: #E16B8C;\n"
"             box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);}"));

        gridLayout_2->addWidget(red, 1, 0, 1, 1);

        yellow = new QPushButton(gridLayoutWidget_2);
        yellow->setObjectName(QString::fromUtf8("yellow"));
        yellow->setMinimumSize(QSize(81, 81));
        yellow->setMaximumSize(QSize(81, 81));
        yellow->setStyleSheet(QString::fromUtf8("QPushButton {border-radius: 40px; \n"
"             background-color: #F6C555;\n"
"             color: white;\n"
"             padding: 10px;}\n"
"QPushButton:pressed {\n"
"             background-color: #F6C555;\n"
"             box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);}"));

        gridLayout_2->addWidget(yellow, 1, 1, 1, 1);

        morandi = new QPushButton(gridLayoutWidget_2);
        morandi->setObjectName(QString::fromUtf8("morandi"));
        morandi->setMinimumSize(QSize(81, 81));
        morandi->setMaximumSize(QSize(81, 81));
        morandi->setStyleSheet(QString::fromUtf8("QPushButton {border-radius: 40px; \n"
"             background-color: #C1CBD7;\n"
"             color: white;\n"
"             padding: 10px;}\n"
"QPushButton:pressed {\n"
"             background-color: #C1CBD7;\n"
"             box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);}"));

        gridLayout_2->addWidget(morandi, 0, 2, 1, 1);

        macaroon = new QPushButton(gridLayoutWidget_2);
        macaroon->setObjectName(QString::fromUtf8("macaroon"));
        macaroon->setMinimumSize(QSize(81, 81));
        macaroon->setMaximumSize(QSize(81, 81));
        macaroon->setStyleSheet(QString::fromUtf8("QPushButton {border-radius: 40px; \n"
"             background-color: #B8F1CC;\n"
"             color: white;\n"
"             padding: 10px;}\n"
"QPushButton:pressed {\n"
"             background-color: #B8F1CC;\n"
"             box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);}"));

        gridLayout_2->addWidget(macaroon, 0, 1, 1, 1);

        green = new QPushButton(gridLayoutWidget_2);
        green->setObjectName(QString::fromUtf8("green"));
        green->setMinimumSize(QSize(81, 81));
        green->setMaximumSize(QSize(81, 81));
        green->setStyleSheet(QString::fromUtf8("QPushButton {border-radius: 40px; \n"
"             background-color: #86C166;\n"
"             color: white;\n"
"             padding: 10px;}\n"
"QPushButton:pressed {\n"
"             background-color: #86C166;\n"
"             box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);}\n"
""));

        gridLayout_2->addWidget(green, 1, 2, 1, 1);

        pink = new QPushButton(gridLayoutWidget_2);
        pink->setObjectName(QString::fromUtf8("pink"));
        pink->setMinimumSize(QSize(81, 81));
        pink->setMaximumSize(QSize(81, 81));
        pink->setStyleSheet(QString::fromUtf8("QPushButton {border-radius: 40px; \n"
"             background-color: #F4C6CD;\n"
"             color: white;\n"
"             padding: 10px;}\n"
"QPushButton:pressed {\n"
"             background-color: #F4C6CD;\n"
"             box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);}"));

        gridLayout_2->addWidget(pink, 2, 0, 1, 1);

        orange = new QPushButton(gridLayoutWidget_2);
        orange->setObjectName(QString::fromUtf8("orange"));
        orange->setMinimumSize(QSize(81, 81));
        orange->setMaximumSize(QSize(81, 81));
        orange->setStyleSheet(QString::fromUtf8("QPushButton {border-radius: 40px; \n"
"             background-color: #F4DC7B;\n"
"             color: white;\n"
"             padding: 10px;}\n"
"QPushButton:pressed {\n"
"             background-color: #F4DC7B;\n"
"             box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);}"));

        gridLayout_2->addWidget(orange, 2, 1, 1, 1);

        purple = new QPushButton(gridLayoutWidget_2);
        purple->setObjectName(QString::fromUtf8("purple"));
        purple->setMinimumSize(QSize(81, 81));
        purple->setMaximumSize(QSize(81, 81));
        purple->setStyleSheet(QString::fromUtf8("QPushButton {border-radius: 40px; \n"
"             background-color: #986DB2;\n"
"             color: white;\n"
"             padding: 10px;}\n"
"QPushButton:pressed {\n"
"             background-color: #986DB2;\n"
"             box-shadow: 2px 2px 5px rgba(0, 0, 0, 0.5);}"));

        gridLayout_2->addWidget(purple, 2, 2, 1, 1);

        verticalLayoutWidget = new QWidget(ChangeColor_Window);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(310, 120, 171, 251));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(verticalLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(ChangeColor_Window);

        QMetaObject::connectSlotsByName(ChangeColor_Window);
    } // setupUi

    void retranslateUi(QDialog *ChangeColor_Window)
    {
        ChangeColor_Window->setWindowTitle(QApplication::translate("ChangeColor_Window", "Dialog", nullptr));
        label_6->setText(QApplication::translate("ChangeColor_Window", "IceBreaker", nullptr));
        icebreak->setText(QString());
        red->setText(QString());
        yellow->setText(QString());
        morandi->setText(QString());
        macaroon->setText(QString());
        green->setText(QString());
        pink->setText(QString());
        orange->setText(QString());
        purple->setText(QString());
        pushButton->setText(QApplication::translate("ChangeColor_Window", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeColor_Window: public Ui_ChangeColor_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGECOLOR_WINDOW_H
