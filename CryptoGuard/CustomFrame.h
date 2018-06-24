#pragma once

#include "CustomStyleableWidget.h"
#include "ui_CustomFrame.h"
#include <QtGui>
#include <QtWidgets>

class CustomFrame : public CustomStyleableWidget
{
	Q_OBJECT

public:
	explicit CustomFrame(QWidget *parent = 0, Qt::WindowFlags flags = 0);
	~CustomFrame();

public slots:
	void enableMinimizeControls(bool enabled);
	void enableMaximizeControls(bool enabled);
	void enableResizeControls(bool enabled);

protected:
	virtual bool eventFilter(QObject *target, QEvent *event);

private slots:
	void setMaximized(bool maximized);

private:
	void displayResizeControls(bool displayed);
	void updateResizeHandlePosition();

	Ui::CustomFrame ui;

	QWidget* m_parent;

	bool m_isMinimizeEnabled;
	bool m_isMaximizeEnabled;
	bool m_isResizeEnabled;

	// Window Transform
	bool m_isMaximizedWidgetGrabbed;
	bool m_isMousePressed;
	int	m_moveX, m_moveY, m_resizeX, m_resizeY;
	QPoint m_posMousePressed;
	QRect m_geoMousePressed;

	// Window controls
	QWidgetList	m_moveHandles;
	QWidgetList	m_resizeSections;
	QLabel* m_resizeHandle;

	static const char* RESIZE_SECTION;
};
