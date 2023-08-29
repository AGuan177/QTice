/********************************************************************************
** Form generated from reading UI file 'controlwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLWIDGET_H
#define UI_CONTROLWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *drawLineBtn;
    QSpacerItem *horizontalSpacer;
    QToolButton *cancelBtn;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *finishBtn;

    void setupUi(QWidget *ControlWidget)
    {
        if (ControlWidget->objectName().isEmpty())
            ControlWidget->setObjectName(QString::fromUtf8("ControlWidget"));
        ControlWidget->resize(200, 35);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ControlWidget->sizePolicy().hasHeightForWidth());
        ControlWidget->setSizePolicy(sizePolicy);
        ControlWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(7,193,96);"));
        horizontalLayout = new QHBoxLayout(ControlWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        drawLineBtn = new QToolButton(ControlWidget);
        drawLineBtn->setObjectName(QString::fromUtf8("drawLineBtn"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/control_04.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        drawLineBtn->setIcon(icon);
        drawLineBtn->setIconSize(QSize(25, 25));
        drawLineBtn->setAutoRaise(true);

        horizontalLayout_2->addWidget(drawLineBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        cancelBtn = new QToolButton(ControlWidget);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/control_12.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        cancelBtn->setIcon(icon1);
        cancelBtn->setIconSize(QSize(25, 25));
        cancelBtn->setAutoRaise(true);

        horizontalLayout_2->addWidget(cancelBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        finishBtn = new QToolButton(ControlWidget);
        finishBtn->setObjectName(QString::fromUtf8("finishBtn"));
        finishBtn->setIcon(icon1);
        finishBtn->setIconSize(QSize(25, 25));
        finishBtn->setAutoRaise(true);

        horizontalLayout_2->addWidget(finishBtn);


        horizontalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ControlWidget);

        QMetaObject::connectSlotsByName(ControlWidget);
    } // setupUi

    void retranslateUi(QWidget *ControlWidget)
    {
        ControlWidget->setWindowTitle(QApplication::translate("ControlWidget", "Form", nullptr));
#ifndef QT_NO_TOOLTIP
        drawLineBtn->setToolTip(QApplication::translate("ControlWidget", "\347\224\273\347\254\224", nullptr));
#endif // QT_NO_TOOLTIP
        drawLineBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        cancelBtn->setToolTip(QApplication::translate("ControlWidget", "\351\200\200\345\207\272\346\210\252\345\233\276", nullptr));
#endif // QT_NO_TOOLTIP
        cancelBtn->setText(QString());
#ifndef QT_NO_TOOLTIP
        finishBtn->setToolTip(QApplication::translate("ControlWidget", "\351\200\200\345\207\272\346\210\252\345\233\276", nullptr));
#endif // QT_NO_TOOLTIP
        finishBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ControlWidget: public Ui_ControlWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLWIDGET_H
