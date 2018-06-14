#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CryptoGuard.h"

class CryptoGuard : public QMainWindow
{
	Q_OBJECT

public:
	CryptoGuard(QWidget *parent = Q_NULLPTR);

private:
	Ui::CryptoGuardClass ui;
};
