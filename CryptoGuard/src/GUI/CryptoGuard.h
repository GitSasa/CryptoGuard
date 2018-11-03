#pragma once

#include <QtWidgets/QMainWindow>
#include "CustomFrames/CustomFrame.h"
#include "NavigationWidget.h"
#include "PasswordSafesWidget.h"
#include "PasswordEntriesWidget.h"
#include "ActionWidget.h"

class CryptoGuard : public QMainWindow
{
	Q_OBJECT

public:
	explicit CryptoGuard(QWidget *parent = 0, Qt::WindowFlags flags = 0);

protected:
	CustomFrame* m_customFrame;
	NavigationWidget* m_navigationWidget;
	PasswordSafesWidget* m_passwordSafesWidget;
	PasswordEntriesWidget* m_passwordEntriesWidget;
	ActionWidget* m_actionWidget;
};
