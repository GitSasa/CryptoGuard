#include "CustomStyleableWidget.h"

#include <qstylepainter.h>
#include <qstyleoption.h>

CustomStyleableWidget::CustomStyleableWidget(QWidget *parent, Qt::WindowFlags flags)
	: QWidget(parent, flags)
{
}

CustomStyleableWidget::~CustomStyleableWidget()
{
}

void CustomStyleableWidget::paintEvent(QPaintEvent *e)
{
	QStyleOption opt;
	opt.init(this);
	QPainter p(this);
	style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
