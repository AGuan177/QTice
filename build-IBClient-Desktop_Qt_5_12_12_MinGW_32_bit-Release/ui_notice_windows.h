/********************************************************************************
** Form generated from reading UI file 'notice_windows.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTICE_WINDOWS_H
#define UI_NOTICE_WINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notice_windows
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *Notice_windows)
    {
        if (Notice_windows->objectName().isEmpty())
            Notice_windows->setObjectName(QString::fromUtf8("Notice_windows"));
        Notice_windows->resize(367, 189);
        pushButton = new QPushButton(Notice_windows);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 371, 191));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/201310910581785207.jpg);"));

        retranslateUi(Notice_windows);

        QMetaObject::connectSlotsByName(Notice_windows);
    } // setupUi

    void retranslateUi(QWidget *Notice_windows)
    {
        Notice_windows->setWindowTitle(QApplication::translate("Notice_windows", "Notice", nullptr));
        pushButton->setText(QApplication::translate("Notice_windows", "\346\216\245\346\224\266\346\266\210\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notice_windows: public Ui_Notice_windows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTICE_WINDOWS_H
