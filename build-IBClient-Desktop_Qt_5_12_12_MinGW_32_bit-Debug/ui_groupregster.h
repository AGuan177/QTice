/********************************************************************************
** Form generated from reading UI file 'groupregster.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPREGSTER_H
#define UI_GROUPREGSTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupRegster
{
public:
    QLabel *label;
    QLineEdit *lineEditGroupName;
    QWidget *widget;
    QLabel *label_2;
    QPushButton *pushButtonCreateGroup;

    void setupUi(QWidget *GroupRegster)
    {
        if (GroupRegster->objectName().isEmpty())
            GroupRegster->setObjectName(QString::fromUtf8("GroupRegster"));
        GroupRegster->resize(496, 334);
        GroupRegster->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border:none;\n"
"	background:rgb(235,235,235);\n"
"}"));
        label = new QLabel(GroupRegster);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, -20, 501, 331));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/blue.jpg);"));
        lineEditGroupName = new QLineEdit(GroupRegster);
        lineEditGroupName->setObjectName(QString::fromUtf8("lineEditGroupName"));
        lineEditGroupName->setGeometry(QRect(40, 180, 261, 41));
        widget = new QWidget(GroupRegster);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 511, 101));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QString::fromUtf8("#widget{background-image: url(:/new/prefix1/img/title3.png);}"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 261, 61));
        label_2->setStyleSheet(QString::fromUtf8("font: 36pt \"Kunstler Script\";\n"
""));
        pushButtonCreateGroup = new QPushButton(GroupRegster);
        pushButtonCreateGroup->setObjectName(QString::fromUtf8("pushButtonCreateGroup"));
        pushButtonCreateGroup->setGeometry(QRect(340, 180, 100, 35));
        sizePolicy.setHeightForWidth(pushButtonCreateGroup->sizePolicy().hasHeightForWidth());
        pushButtonCreateGroup->setSizePolicy(sizePolicy);
        pushButtonCreateGroup->setMinimumSize(QSize(100, 35));
        pushButtonCreateGroup->setMaximumSize(QSize(90, 35));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        pushButtonCreateGroup->setFont(font);
        pushButtonCreateGroup->setStyleSheet(QString::fromUtf8("background-color: rgb(46,46\357\274\21446);\n"
"color: rgb(0, 0, 0);\n"
""));

        retranslateUi(GroupRegster);

        QMetaObject::connectSlotsByName(GroupRegster);
    } // setupUi

    void retranslateUi(QWidget *GroupRegster)
    {
        GroupRegster->setWindowTitle(QApplication::translate("GroupRegster", "GroupRegster", nullptr));
        label->setText(QString());
        lineEditGroupName->setPlaceholderText(QApplication::translate("GroupRegster", "\347\276\244\345\220\215", nullptr));
        label_2->setText(QApplication::translate("GroupRegster", "IceBreaker", nullptr));
        pushButtonCreateGroup->setText(QApplication::translate("GroupRegster", "\345\210\233\345\273\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupRegster: public Ui_GroupRegster {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPREGSTER_H
