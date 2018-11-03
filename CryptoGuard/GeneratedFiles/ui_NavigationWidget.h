/********************************************************************************
** Form generated from reading UI file 'NavigationWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVIGATIONWIDGET_H
#define UI_NAVIGATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NavigationWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *logoImageLabel;
    QToolButton *undoButton;
    QToolButton *redoButton;
    QSpacerItem *horizontalSpacer;
    QToolButton *settingsButton;

    void setupUi(QWidget *NavigationWidget)
    {
        if (NavigationWidget->objectName().isEmpty())
            NavigationWidget->setObjectName(QStringLiteral("NavigationWidget"));
        NavigationWidget->resize(733, 156);
        horizontalLayout = new QHBoxLayout(NavigationWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        logoImageLabel = new QLabel(NavigationWidget);
        logoImageLabel->setObjectName(QStringLiteral("logoImageLabel"));

        horizontalLayout->addWidget(logoImageLabel);

        undoButton = new QToolButton(NavigationWidget);
        undoButton->setObjectName(QStringLiteral("undoButton"));

        horizontalLayout->addWidget(undoButton);

        redoButton = new QToolButton(NavigationWidget);
        redoButton->setObjectName(QStringLiteral("redoButton"));

        horizontalLayout->addWidget(redoButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        settingsButton = new QToolButton(NavigationWidget);
        settingsButton->setObjectName(QStringLiteral("settingsButton"));

        horizontalLayout->addWidget(settingsButton);


        retranslateUi(NavigationWidget);

        QMetaObject::connectSlotsByName(NavigationWidget);
    } // setupUi

    void retranslateUi(QWidget *NavigationWidget)
    {
        NavigationWidget->setWindowTitle(QApplication::translate("NavigationWidget", "NavigationWidget", nullptr));
        logoImageLabel->setText(QString());
        undoButton->setText(QApplication::translate("NavigationWidget", "Undo", nullptr));
        redoButton->setText(QApplication::translate("NavigationWidget", "Redo", nullptr));
        settingsButton->setText(QApplication::translate("NavigationWidget", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NavigationWidget: public Ui_NavigationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVIGATIONWIDGET_H
