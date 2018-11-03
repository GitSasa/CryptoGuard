#pragma once

#include <QWidget>
#include "ui_NavigationWidget.h"

class NavigationWidget : public QWidget
{
	Q_OBJECT

public:
	NavigationWidget(QWidget *parent = Q_NULLPTR);
	~NavigationWidget();

private:
	Ui::NavigationWidget ui;
};
