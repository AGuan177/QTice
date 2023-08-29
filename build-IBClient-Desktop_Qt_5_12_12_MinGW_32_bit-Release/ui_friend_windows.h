/********************************************************************************
** Form generated from reading UI file 'friend_windows.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIEND_WINDOWS_H
#define UI_FRIEND_WINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Friend_Windows
{
public:
    QGridLayout *gridLayout;
    QLabel *labelID;
    QTabWidget *tabWidget;
    QWidget *tab;
    QListWidget *listWidgetFriend;
    QLabel *label_2;
    QWidget *tab_2;
    QListWidget *listWidgetGroup;
    QLabel *label;

    void setupUi(QWidget *Friend_Windows)
    {
        if (Friend_Windows->objectName().isEmpty())
            Friend_Windows->setObjectName(QString::fromUtf8("Friend_Windows"));
        Friend_Windows->resize(257, 800);
        Friend_Windows->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(Friend_Windows);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labelID = new QLabel(Friend_Windows);
        labelID->setObjectName(QString::fromUtf8("labelID"));
        labelID->setStyleSheet(QString::fromUtf8("background:rgba(225,225,225,0.5)"));

        gridLayout->addWidget(labelID, 0, 0, 1, 3);

        tabWidget = new QTabWidget(Friend_Windows);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        listWidgetFriend = new QListWidget(tab);
        listWidgetFriend->setObjectName(QString::fromUtf8("listWidgetFriend"));
        listWidgetFriend->setGeometry(QRect(0, 0, 321, 753));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        listWidgetFriend->setFont(font);
        listWidgetFriend->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/pintree.jpg);"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 0, 61, 61));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/img/chrismastree.svg);"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        listWidgetGroup = new QListWidget(tab_2);
        listWidgetGroup->setObjectName(QString::fromUtf8("listWidgetGroup"));
        listWidgetGroup->setEnabled(true);
        listWidgetGroup->setGeometry(QRect(0, 0, 401, 753));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        listWidgetGroup->setFont(font1);
        listWidgetGroup->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/pintree.jpg);"));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 0, 61, 61));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/img/group.svg);"));
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 3);


        retranslateUi(Friend_Windows);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Friend_Windows);
    } // setupUi

    void retranslateUi(QWidget *Friend_Windows)
    {
        Friend_Windows->setWindowTitle(QApplication::translate("Friend_Windows", "Form", nullptr));
        labelID->setText(QString());
        label_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Friend_Windows", "\346\234\213\345\217\213", nullptr));
        label->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Friend_Windows", " \347\276\244\350\201\212", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Friend_Windows: public Ui_Friend_Windows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIEND_WINDOWS_H
