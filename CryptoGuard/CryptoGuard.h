#pragma once

#include <QtWidgets/QMainWindow>
#include "CustomFrame.h"

class CryptoGuard : public QMainWindow
{
	Q_OBJECT

public:
	explicit CryptoGuard(QWidget *parent = 0, Qt::WindowFlags flags = 0);

protected:
	CustomFrame * m_customFrame;
};
