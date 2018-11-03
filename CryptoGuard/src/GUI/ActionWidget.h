#pragma once

#include <QWidget>
#include "ui_ActionWidget.h"

class ActionWidget : public QWidget
{
	Q_OBJECT

public:
	ActionWidget(QWidget *parent = Q_NULLPTR);
	~ActionWidget();

private:
	Ui::ActionWidget ui;
};
