/********************************************************************************
** Form generated from reading UI file 'ActionWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIONWIDGET_H
#define UI_ACTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ActionWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *actionLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *clipboardTimeLabel;

    void setupUi(QWidget *ActionWidget)
    {
        if (ActionWidget->objectName().isEmpty())
            ActionWidget->setObjectName(QStringLiteral("ActionWidget"));
        ActionWidget->resize(709, 38);
        horizontalLayout = new QHBoxLayout(ActionWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        actionLabel = new QLabel(ActionWidget);
        actionLabel->setObjectName(QStringLiteral("actionLabel"));

        horizontalLayout->addWidget(actionLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        clipboardTimeLabel = new QLabel(ActionWidget);
        clipboardTimeLabel->setObjectName(QStringLiteral("clipboardTimeLabel"));

        horizontalLayout->addWidget(clipboardTimeLabel);


        retranslateUi(ActionWidget);

        QMetaObject::connectSlotsByName(ActionWidget);
    } // setupUi

    void retranslateUi(QWidget *ActionWidget)
    {
        ActionWidget->setWindowTitle(QApplication::translate("ActionWidget", "ActionWidget", nullptr));
        actionLabel->setText(QApplication::translate("ActionWidget", "Action performed", nullptr));
        clipboardTimeLabel->setText(QApplication::translate("ActionWidget", "Password in Clipboard: 10s", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ActionWidget: public Ui_ActionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIONWIDGET_H
