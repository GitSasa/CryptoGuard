#pragma once

#include <QWidget>
#include "ui_PasswordSafesWidget.h"

class PasswordSafesWidget : public QWidget
{
	Q_OBJECT

public:
	PasswordSafesWidget(QWidget *parent = Q_NULLPTR);
	~PasswordSafesWidget();

private:
	Ui::PasswordSafesWidget ui;
};
