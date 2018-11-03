#pragma once

#include <QWidget>
#include "ui_PasswordEntriesWidget.h"

class PasswordEntriesWidget : public QWidget
{
	Q_OBJECT

public:
	PasswordEntriesWidget(QWidget *parent = Q_NULLPTR);
	~PasswordEntriesWidget();

private:
	Ui::PasswordEntriesWidget ui;
};
