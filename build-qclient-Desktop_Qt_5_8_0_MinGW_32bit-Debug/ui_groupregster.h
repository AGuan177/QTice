/********************************************************************************
** Form generated from reading UI file 'groupregster.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPREGSTER_H
#define UI_GROUPREGSTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupRegster
{
public:
    QLabel *label;
    QLineEdit *lineEditGroupName;
    QPushButton *pushButtonCreateGroup;
    QWidget *widget;
    QPushButton *logo;
    QToolButton *toolButton;
    QLabel *label_2;

    void setupUi(QWidget *GroupRegster)
    {
        if (GroupRegster->objectName().isEmpty())
            GroupRegster->setObjectName(QStringLiteral("GroupRegster"));
        GroupRegster->resize(496, 334);
        GroupRegster->setStyleSheet(QLatin1String("QLineEdit{\n"
"	border:none;\n"
"	background:rgb(235,235,235);\n"
"}"));
        label = new QLabel(GroupRegster);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, -20, 501, 331));
        label->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/blue.jpg);"));
        lineEditGroupName = new QLineEdit(GroupRegster);
        lineEditGroupName->setObjectName(QStringLiteral("lineEditGroupName"));
        lineEditGroupName->setGeometry(QRect(40, 170, 271, 51));
        pushButtonCreateGroup = new QPushButton(GroupRegster);
        pushButtonCreateGroup->setObjectName(QStringLiteral("pushButtonCreateGroup"));
        pushButtonCreateGroup->setGeometry(QRect(350, 160, 100, 60));
        pushButtonCreateGroup->setMinimumSize(QSize(100, 60));
        pushButtonCreateGroup->setMaximumSize(QSize(100, 60));
        pushButtonCreateGroup->setStyleSheet(QLatin1String("background-color: rgb(46,46,46);\n"
"color: rgb(255, 255, 255);\n"
"border:none;"));
        widget = new QWidget(GroupRegster);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 511, 101));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QLatin1String("background-color: rgb(7,193,96);\n"
""));
        logo = new QPushButton(widget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(20, 10, 61, 61));
        toolButton = new QToolButton(widget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(30, 20, 47, 21));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 20, 241, 51));
        label_2->setStyleSheet(QStringLiteral("font: 75 italic 36pt \"Adobe Arabic\";"));

        retranslateUi(GroupRegster);

        QMetaObject::connectSlotsByName(GroupRegster);
    } // setupUi

    void retranslateUi(QWidget *GroupRegster)
    {
        GroupRegster->setWindowTitle(QApplication::translate("GroupRegster", "GroupRegster", Q_NULLPTR));
        label->setText(QString());
        lineEditGroupName->setPlaceholderText(QApplication::translate("GroupRegster", "\347\276\244\345\220\215", Q_NULLPTR));
        pushButtonCreateGroup->setText(QApplication::translate("GroupRegster", "\345\210\233\345\273\272", Q_NULLPTR));
        logo->setText(QString());
        toolButton->setText(QApplication::translate("GroupRegster", "...", Q_NULLPTR));
        label_2->setText(QApplication::translate("GroupRegster", "IceBreaker", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GroupRegster: public Ui_GroupRegster {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPREGSTER_H
