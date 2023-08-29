/********************************************************************************
** Form generated from reading UI file 'add_friend.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_FRIEND_H
#define UI_ADD_FRIEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_friend
{
public:
    QWidget *widget;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonGetNewFriend;
    QLineEdit *lineEditFriendId;
    QPushButton *pushButtonIntoGroup;
    QLineEdit *lineEditGroupId;
    QPushButton *pushButtonCreateGroup;
    QLabel *label_2;

    void setupUi(QWidget *add_friend)
    {
        if (add_friend->objectName().isEmpty())
            add_friend->setObjectName(QString::fromUtf8("add_friend"));
        add_friend->resize(501, 345);
        add_friend->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border:none;\n"
"	background:rgb(235,235,235);\n"
"}"));
        widget = new QWidget(add_friend);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 501, 131));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QString::fromUtf8("#widget{background-image: url(:/new/prefix1/img/title1.png);}\n"
""));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 281, 101));
        label->setStyleSheet(QString::fromUtf8("\n"
"font: 36pt \"Kunstler Script\";\n"
""));
        gridLayoutWidget = new QWidget(add_friend);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 150, 451, 164));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonGetNewFriend = new QPushButton(gridLayoutWidget);
        pushButtonGetNewFriend->setObjectName(QString::fromUtf8("pushButtonGetNewFriend"));
        sizePolicy.setHeightForWidth(pushButtonGetNewFriend->sizePolicy().hasHeightForWidth());
        pushButtonGetNewFriend->setSizePolicy(sizePolicy);
        pushButtonGetNewFriend->setMinimumSize(QSize(100, 35));
        pushButtonGetNewFriend->setMaximumSize(QSize(90, 35));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        pushButtonGetNewFriend->setFont(font);
        pushButtonGetNewFriend->setStyleSheet(QString::fromUtf8("background-color: rgb(46,46,46);\n"
"color: rgb(255, 255, 255);\n"
"border:none;"));

        gridLayout->addWidget(pushButtonGetNewFriend, 0, 1, 1, 1);

        lineEditFriendId = new QLineEdit(gridLayoutWidget);
        lineEditFriendId->setObjectName(QString::fromUtf8("lineEditFriendId"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEditFriendId->sizePolicy().hasHeightForWidth());
        lineEditFriendId->setSizePolicy(sizePolicy1);
        lineEditFriendId->setMinimumSize(QSize(300, 40));
        lineEditFriendId->setStyleSheet(QString::fromUtf8("border-bottom-color:rgb(245,245,245)"));

        gridLayout->addWidget(lineEditFriendId, 0, 0, 1, 1);

        pushButtonIntoGroup = new QPushButton(gridLayoutWidget);
        pushButtonIntoGroup->setObjectName(QString::fromUtf8("pushButtonIntoGroup"));
        sizePolicy.setHeightForWidth(pushButtonIntoGroup->sizePolicy().hasHeightForWidth());
        pushButtonIntoGroup->setSizePolicy(sizePolicy);
        pushButtonIntoGroup->setMinimumSize(QSize(100, 35));
        pushButtonIntoGroup->setMaximumSize(QSize(90, 35));
        pushButtonIntoGroup->setFont(font);
        pushButtonIntoGroup->setStyleSheet(QString::fromUtf8("background-color: rgb(46,46,46);\n"
"color: rgb(255, 255, 255);\n"
"border:none;"));

        gridLayout->addWidget(pushButtonIntoGroup, 1, 1, 1, 1);

        lineEditGroupId = new QLineEdit(gridLayoutWidget);
        lineEditGroupId->setObjectName(QString::fromUtf8("lineEditGroupId"));
        sizePolicy.setHeightForWidth(lineEditGroupId->sizePolicy().hasHeightForWidth());
        lineEditGroupId->setSizePolicy(sizePolicy);
        lineEditGroupId->setMinimumSize(QSize(300, 40));
        lineEditGroupId->setStyleSheet(QString::fromUtf8("border-bottom-color:rgb(245,245,245)"));
        lineEditGroupId->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        lineEditGroupId->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditGroupId, 1, 0, 1, 1);

        pushButtonCreateGroup = new QPushButton(gridLayoutWidget);
        pushButtonCreateGroup->setObjectName(QString::fromUtf8("pushButtonCreateGroup"));
        sizePolicy.setHeightForWidth(pushButtonCreateGroup->sizePolicy().hasHeightForWidth());
        pushButtonCreateGroup->setSizePolicy(sizePolicy);
        pushButtonCreateGroup->setMinimumSize(QSize(100, 35));
        pushButtonCreateGroup->setMaximumSize(QSize(90, 35));
        pushButtonCreateGroup->setFont(font);
        pushButtonCreateGroup->setStyleSheet(QString::fromUtf8("background-color: rgb(46,46\357\274\21446);\n"
"color: rgb(0, 0, 0);\n"
""));

        gridLayout->addWidget(pushButtonCreateGroup, 2, 1, 1, 1);

        label_2 = new QLabel(add_friend);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 280, 61, 61));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/img/ring.svg);"));

        retranslateUi(add_friend);

        QMetaObject::connectSlotsByName(add_friend);
    } // setupUi

    void retranslateUi(QWidget *add_friend)
    {
        add_friend->setWindowTitle(QApplication::translate("add_friend", "AddFriend", nullptr));
        label->setText(QApplication::translate("add_friend", "IceBreaker", nullptr));
        pushButtonGetNewFriend->setText(QApplication::translate("add_friend", "\346\267\273\345\212\240\345\245\275\345\217\213", nullptr));
        lineEditFriendId->setPlaceholderText(QApplication::translate("add_friend", "\345\245\275\345\217\213ID", nullptr));
        pushButtonIntoGroup->setText(QApplication::translate("add_friend", "\346\267\273\345\212\240\347\276\244\350\201\212", nullptr));
        lineEditGroupId->setText(QString());
        lineEditGroupId->setPlaceholderText(QApplication::translate("add_friend", "\347\276\244\350\201\212ID", nullptr));
        pushButtonCreateGroup->setText(QApplication::translate("add_friend", "\345\210\233\345\273\272\347\276\244\350\201\212", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class add_friend: public Ui_add_friend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_FRIEND_H
