/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QListView *listView;
    QLabel *label;
    QPushButton *download_log;
    QPushButton *clear_log;
    QPushButton *kick_user;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QString::fromUtf8("MyWidget"));
        MyWidget->resize(800, 600);
        MyWidget->setAutoFillBackground(false);
        MyWidget->setStyleSheet(QString::fromUtf8("background-color:#F8C3CD"));
        gridLayoutWidget = new QWidget(MyWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(70, 50, 651, 401));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(gridLayoutWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        textBrowser->setMinimumSize(QSize(100, 0));
        textBrowser->setSizeIncrement(QSize(100, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        textBrowser->setFont(font);
        textBrowser->setStyleSheet(QString::fromUtf8("background-color:#FEDFE1 "));

        gridLayout->addWidget(textBrowser, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        listView = new QListView(gridLayoutWidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(50);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy1);
        listView->setMinimumSize(QSize(50, 0));
        QFont font2;
        font2.setPointSize(11);
        listView->setFont(font2);
        listView->setStyleSheet(QString::fromUtf8("background-color:#FEDFE1 "));

        gridLayout->addWidget(listView, 2, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        download_log = new QPushButton(MyWidget);
        download_log->setObjectName(QString::fromUtf8("download_log"));
        download_log->setGeometry(QRect(70, 480, 161, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        download_log->setFont(font3);
        clear_log = new QPushButton(MyWidget);
        clear_log->setObjectName(QString::fromUtf8("clear_log"));
        clear_log->setGeometry(QRect(310, 480, 161, 51));
        clear_log->setFont(font3);
        kick_user = new QPushButton(MyWidget);
        kick_user->setObjectName(QString::fromUtf8("kick_user"));
        kick_user->setGeometry(QRect(560, 480, 161, 51));
        kick_user->setFont(font3);

        retranslateUi(MyWidget);

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", nullptr));
        label_2->setText(QApplication::translate("MyWidget", "\345\234\250  \347\272\277  \347\224\250  \346\210\267", nullptr));
        label->setText(QApplication::translate("MyWidget", "\346\234\215  \345\212\241  \345\231\250  \346\227\245  \345\277\227", nullptr));
        download_log->setText(QApplication::translate("MyWidget", "\344\270\213\350\275\275\346\227\245\345\277\227", nullptr));
        clear_log->setText(QApplication::translate("MyWidget", "\346\270\205\351\231\244\346\227\245\345\277\227", nullptr));
        kick_user->setText(QApplication::translate("MyWidget", "\345\274\272\345\210\266\344\270\213\347\272\277", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
