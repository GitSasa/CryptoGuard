/********************************************************************************
** Form generated from reading UI file 'CustomFrame.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMFRAME_H
#define UI_CUSTOMFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "customstyleablewidget.h"

QT_BEGIN_NAMESPACE

class Ui_CustomFrame
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *mainFrame;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QFrame *bottomLeftFrame;
    QFrame *topLeftFrame;
    QFrame *topRightFrame;
    QFrame *bottomFrame;
    QFrame *bottomRightFrame;
    QFrame *containerFrame;
    QVBoxLayout *verticalLayout_3;
    QFrame *titleBarFrame;
    QHBoxLayout *horizontalLayout;
    QFrame *titleBarContentFrame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QFrame *windowButtonsFrame;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *minimizeButton;
    QToolButton *maximizeButton;
    QToolButton *closeButton;
    QFrame *contentFrame;
    QVBoxLayout *verticalLayout_4;
    QFrame *topFrame;
    QFrame *rightFrame;
    QFrame *leftFrame;

    void setupUi(CustomStyleableWidget *CustomFrame)
    {
        if (CustomFrame->objectName().isEmpty())
            CustomFrame->setObjectName(QStringLiteral("CustomFrame"));
        CustomFrame->resize(950, 600);
        CustomFrame->setMinimumSize(QSize(0, 500));
        verticalLayout = new QVBoxLayout(CustomFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mainFrame = new QFrame(CustomFrame);
        mainFrame->setObjectName(QStringLiteral("mainFrame"));
        mainFrame->setFrameShape(QFrame::NoFrame);
        mainFrame->setFrameShadow(QFrame::Plain);
        verticalLayout_2 = new QVBoxLayout(mainFrame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        bottomLeftFrame = new QFrame(mainFrame);
        bottomLeftFrame->setObjectName(QStringLiteral("bottomLeftFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bottomLeftFrame->sizePolicy().hasHeightForWidth());
        bottomLeftFrame->setSizePolicy(sizePolicy);
        bottomLeftFrame->setMinimumSize(QSize(3, 3));
        bottomLeftFrame->setMaximumSize(QSize(3, 3));
        bottomLeftFrame->setFrameShape(QFrame::NoFrame);
        bottomLeftFrame->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(bottomLeftFrame, 2, 0, 1, 1);

        topLeftFrame = new QFrame(mainFrame);
        topLeftFrame->setObjectName(QStringLiteral("topLeftFrame"));
        sizePolicy.setHeightForWidth(topLeftFrame->sizePolicy().hasHeightForWidth());
        topLeftFrame->setSizePolicy(sizePolicy);
        topLeftFrame->setMinimumSize(QSize(3, 3));
        topLeftFrame->setMaximumSize(QSize(3, 3));
        topLeftFrame->setFrameShape(QFrame::NoFrame);
        topLeftFrame->setFrameShadow(QFrame::Plain);
        topLeftFrame->setLineWidth(1);

        gridLayout->addWidget(topLeftFrame, 0, 0, 1, 1);

        topRightFrame = new QFrame(mainFrame);
        topRightFrame->setObjectName(QStringLiteral("topRightFrame"));
        sizePolicy.setHeightForWidth(topRightFrame->sizePolicy().hasHeightForWidth());
        topRightFrame->setSizePolicy(sizePolicy);
        topRightFrame->setMinimumSize(QSize(3, 3));
        topRightFrame->setMaximumSize(QSize(3, 3));
        topRightFrame->setFrameShape(QFrame::NoFrame);
        topRightFrame->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(topRightFrame, 0, 2, 1, 1);

        bottomFrame = new QFrame(mainFrame);
        bottomFrame->setObjectName(QStringLiteral("bottomFrame"));
        bottomFrame->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bottomFrame->sizePolicy().hasHeightForWidth());
        bottomFrame->setSizePolicy(sizePolicy1);
        bottomFrame->setMinimumSize(QSize(0, 3));
        bottomFrame->setMaximumSize(QSize(16777215, 3));
        bottomFrame->setFrameShape(QFrame::NoFrame);
        bottomFrame->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(bottomFrame, 2, 1, 1, 1);

        bottomRightFrame = new QFrame(mainFrame);
        bottomRightFrame->setObjectName(QStringLiteral("bottomRightFrame"));
        sizePolicy.setHeightForWidth(bottomRightFrame->sizePolicy().hasHeightForWidth());
        bottomRightFrame->setSizePolicy(sizePolicy);
        bottomRightFrame->setMinimumSize(QSize(3, 3));
        bottomRightFrame->setMaximumSize(QSize(3, 3));
        bottomRightFrame->setFrameShape(QFrame::NoFrame);
        bottomRightFrame->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(bottomRightFrame, 2, 2, 1, 1);

        containerFrame = new QFrame(mainFrame);
        containerFrame->setObjectName(QStringLiteral("containerFrame"));
        containerFrame->setFrameShape(QFrame::NoFrame);
        containerFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(containerFrame);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        titleBarFrame = new QFrame(containerFrame);
        titleBarFrame->setObjectName(QStringLiteral("titleBarFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(titleBarFrame->sizePolicy().hasHeightForWidth());
        titleBarFrame->setSizePolicy(sizePolicy2);
        titleBarFrame->setFrameShape(QFrame::StyledPanel);
        titleBarFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(titleBarFrame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 6);
        titleBarContentFrame = new QFrame(titleBarFrame);
        titleBarContentFrame->setObjectName(QStringLiteral("titleBarContentFrame"));
        titleBarContentFrame->setFrameShape(QFrame::StyledPanel);
        titleBarContentFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(titleBarContentFrame);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(titleBarContentFrame);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_3->addWidget(label);


        horizontalLayout->addWidget(titleBarContentFrame);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        windowButtonsFrame = new QFrame(titleBarFrame);
        windowButtonsFrame->setObjectName(QStringLiteral("windowButtonsFrame"));
        windowButtonsFrame->setFrameShape(QFrame::StyledPanel);
        windowButtonsFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(windowButtonsFrame);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        minimizeButton = new QToolButton(windowButtonsFrame);
        minimizeButton->setObjectName(QStringLiteral("minimizeButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(minimizeButton->sizePolicy().hasHeightForWidth());
        minimizeButton->setSizePolicy(sizePolicy3);
        minimizeButton->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_2->addWidget(minimizeButton);

        maximizeButton = new QToolButton(windowButtonsFrame);
        maximizeButton->setObjectName(QStringLiteral("maximizeButton"));
        sizePolicy3.setHeightForWidth(maximizeButton->sizePolicy().hasHeightForWidth());
        maximizeButton->setSizePolicy(sizePolicy3);
        maximizeButton->setFocusPolicy(Qt::TabFocus);
        maximizeButton->setCheckable(true);

        horizontalLayout_2->addWidget(maximizeButton);

        closeButton = new QToolButton(windowButtonsFrame);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        sizePolicy3.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy3);
        closeButton->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_2->addWidget(closeButton);


        horizontalLayout->addWidget(windowButtonsFrame);


        verticalLayout_3->addWidget(titleBarFrame);

        contentFrame = new QFrame(containerFrame);
        contentFrame->setObjectName(QStringLiteral("contentFrame"));
        contentFrame->setFrameShape(QFrame::StyledPanel);
        contentFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(contentFrame);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);

        verticalLayout_3->addWidget(contentFrame);


        gridLayout->addWidget(containerFrame, 1, 1, 1, 1);

        topFrame = new QFrame(mainFrame);
        topFrame->setObjectName(QStringLiteral("topFrame"));
        sizePolicy1.setHeightForWidth(topFrame->sizePolicy().hasHeightForWidth());
        topFrame->setSizePolicy(sizePolicy1);
        topFrame->setMinimumSize(QSize(0, 3));
        topFrame->setMaximumSize(QSize(16777215, 3));
        topFrame->setFrameShape(QFrame::NoFrame);
        topFrame->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(topFrame, 0, 1, 1, 1);

        rightFrame = new QFrame(mainFrame);
        rightFrame->setObjectName(QStringLiteral("rightFrame"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(rightFrame->sizePolicy().hasHeightForWidth());
        rightFrame->setSizePolicy(sizePolicy4);
        rightFrame->setMinimumSize(QSize(3, 0));
        rightFrame->setMaximumSize(QSize(3, 16777215));
        rightFrame->setFrameShape(QFrame::NoFrame);
        rightFrame->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(rightFrame, 1, 2, 1, 1);

        leftFrame = new QFrame(mainFrame);
        leftFrame->setObjectName(QStringLiteral("leftFrame"));
        sizePolicy4.setHeightForWidth(leftFrame->sizePolicy().hasHeightForWidth());
        leftFrame->setSizePolicy(sizePolicy4);
        leftFrame->setMinimumSize(QSize(3, 0));
        leftFrame->setMaximumSize(QSize(3, 16777215));
        leftFrame->setFrameShape(QFrame::NoFrame);
        leftFrame->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(leftFrame, 1, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout->addWidget(mainFrame);


        retranslateUi(CustomFrame);

        QMetaObject::connectSlotsByName(CustomFrame);
    } // setupUi

    void retranslateUi(CustomStyleableWidget *CustomFrame)
    {
        CustomFrame->setWindowTitle(QString());
        label->setText(QApplication::translate("CustomFrame", "Title", nullptr));
        minimizeButton->setText(QString());
        maximizeButton->setText(QString());
        closeButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CustomFrame: public Ui_CustomFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMFRAME_H
