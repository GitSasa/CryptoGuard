#pragma once

#include <QWidget>

class CustomStyleableWidget : public QWidget
{
	Q_OBJECT

public:
	explicit CustomStyleableWidget(QWidget *parent = 0, Qt::WindowFlags flags = 0);
	~CustomStyleableWidget();

protected:
	void paintEvent(QPaintEvent *e);
};
