/********************************************************************************
** Form generated from reading UI file 'PasswordEntriesWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDENTRIESWIDGET_H
#define UI_PASSWORDENTRIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PasswordEntriesWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QToolButton *createPasswordEntryButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QLabel *createPasswordEntryLabel;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *searchLineEdit;
    QLabel *sortLabel;
    QComboBox *sortComboBox;
    QListWidget *passwordEntryList;

    void setupUi(QWidget *PasswordEntriesWidget)
    {
        if (PasswordEntriesWidget->objectName().isEmpty())
            PasswordEntriesWidget->setObjectName(QStringLiteral("PasswordEntriesWidget"));
        PasswordEntriesWidget->resize(641, 524);
        verticalLayout_3 = new QVBoxLayout(PasswordEntriesWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        createPasswordEntryButton = new QToolButton(PasswordEntriesWidget);
        createPasswordEntryButton->setObjectName(QStringLiteral("createPasswordEntryButton"));

        horizontalLayout_2->addWidget(createPasswordEntryButton);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        createPasswordEntryLabel = new QLabel(PasswordEntriesWidget);
        createPasswordEntryLabel->setObjectName(QStringLiteral("createPasswordEntryLabel"));

        horizontalLayout_5->addWidget(createPasswordEntryLabel);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        searchLineEdit = new QLineEdit(PasswordEntriesWidget);
        searchLineEdit->setObjectName(QStringLiteral("searchLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchLineEdit->sizePolicy().hasHeightForWidth());
        searchLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(searchLineEdit);

        sortLabel = new QLabel(PasswordEntriesWidget);
        sortLabel->setObjectName(QStringLiteral("sortLabel"));

        horizontalLayout->addWidget(sortLabel);

        sortComboBox = new QComboBox(PasswordEntriesWidget);
        sortComboBox->setObjectName(QStringLiteral("sortComboBox"));

        horizontalLayout->addWidget(sortComboBox);


        verticalLayout_3->addLayout(horizontalLayout);

        passwordEntryList = new QListWidget(PasswordEntriesWidget);
        passwordEntryList->setObjectName(QStringLiteral("passwordEntryList"));

        verticalLayout_3->addWidget(passwordEntryList);


        retranslateUi(PasswordEntriesWidget);

        QMetaObject::connectSlotsByName(PasswordEntriesWidget);
    } // setupUi

    void retranslateUi(QWidget *PasswordEntriesWidget)
    {
        PasswordEntriesWidget->setWindowTitle(QApplication::translate("PasswordEntriesWidget", "PasswordEntriesWidget", nullptr));
        createPasswordEntryButton->setText(QString());
        createPasswordEntryLabel->setText(QApplication::translate("PasswordEntriesWidget", "Create Entry", nullptr));
        searchLineEdit->setInputMask(QString());
        searchLineEdit->setPlaceholderText(QApplication::translate("PasswordEntriesWidget", "Search", nullptr));
        sortLabel->setText(QApplication::translate("PasswordEntriesWidget", "Sort by:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PasswordEntriesWidget: public Ui_PasswordEntriesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDENTRIESWIDGET_H
