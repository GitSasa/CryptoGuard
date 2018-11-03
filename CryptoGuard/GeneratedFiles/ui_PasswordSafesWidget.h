/********************************************************************************
** Form generated from reading UI file 'PasswordSafesWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDSAFESWIDGET_H
#define UI_PASSWORDSAFESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PasswordSafesWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QToolButton *createPasswordSafeButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *createPasswordSafeLabel;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *openPasswordSafeButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QLabel *openPasswordSafeLabel;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_10;
    QListWidget *passwordSafeList;

    void setupUi(QWidget *PasswordSafesWidget)
    {
        if (PasswordSafesWidget->objectName().isEmpty())
            PasswordSafesWidget->setObjectName(QStringLiteral("PasswordSafesWidget"));
        PasswordSafesWidget->resize(342, 566);
        verticalLayout_3 = new QVBoxLayout(PasswordSafesWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        createPasswordSafeButton = new QToolButton(PasswordSafesWidget);
        createPasswordSafeButton->setObjectName(QStringLiteral("createPasswordSafeButton"));

        horizontalLayout_2->addWidget(createPasswordSafeButton);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        createPasswordSafeLabel = new QLabel(PasswordSafesWidget);
        createPasswordSafeLabel->setObjectName(QStringLiteral("createPasswordSafeLabel"));

        horizontalLayout_4->addWidget(createPasswordSafeLabel);

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        openPasswordSafeButton = new QToolButton(PasswordSafesWidget);
        openPasswordSafeButton->setObjectName(QStringLiteral("openPasswordSafeButton"));

        horizontalLayout_3->addWidget(openPasswordSafeButton);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_7 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        openPasswordSafeLabel = new QLabel(PasswordSafesWidget);
        openPasswordSafeLabel->setObjectName(QStringLiteral("openPasswordSafeLabel"));

        horizontalLayout_5->addWidget(openPasswordSafeLabel);

        horizontalSpacer_8 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);


        verticalLayout_2->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);


        verticalLayout_3->addLayout(horizontalLayout);

        passwordSafeList = new QListWidget(PasswordSafesWidget);
        passwordSafeList->setObjectName(QStringLiteral("passwordSafeList"));
        passwordSafeList->setSortingEnabled(false);

        verticalLayout_3->addWidget(passwordSafeList);


        retranslateUi(PasswordSafesWidget);

        QMetaObject::connectSlotsByName(PasswordSafesWidget);
    } // setupUi

    void retranslateUi(QWidget *PasswordSafesWidget)
    {
        PasswordSafesWidget->setWindowTitle(QApplication::translate("PasswordSafesWidget", "PasswordSafesWidget", nullptr));
        createPasswordSafeButton->setText(QString());
        createPasswordSafeLabel->setText(QApplication::translate("PasswordSafesWidget", "Create", nullptr));
        openPasswordSafeButton->setText(QString());
        openPasswordSafeLabel->setText(QApplication::translate("PasswordSafesWidget", "Open", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PasswordSafesWidget: public Ui_PasswordSafesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDSAFESWIDGET_H
