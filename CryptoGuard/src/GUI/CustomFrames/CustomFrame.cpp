#include "CustomFrame.h"

const char* CustomFrame::RESIZE_SECTION = "resizeSection";

CustomFrame::CustomFrame(QWidget* parent, Qt::WindowFlags flags)
	: CustomStyleableWidget(parent, flags | Qt::FramelessWindowHint)
{
	ui.setupUi(this);

	m_parent = parent;
	m_parent->installEventFilter(this);
	m_parent->setWindowFlags(this->windowFlags());
	//m_parent->setAttribute(Qt::WA_TranslucentBackground);

	m_isMaximizedWidgetGrabbed = false;
	m_isMousePressed = false;
	m_moveX = m_moveY = m_resizeX = m_resizeY = 0;

	// ------- SIGNALS SLOTS --------
	connect(ui.closeButton, &QPushButton::pressed, m_parent, &QWidget::close);
	connect(ui.minimizeButton, &QPushButton::pressed, m_parent, &QWidget::showMinimized);
	connect(ui.maximizeButton, &QPushButton::toggled, this, &CustomFrame::setMaximized);

	// ------- WINDOW CONTROLS --------
	m_parent->setWindowFlags(m_parent->windowFlags() | Qt::WindowCloseButtonHint | Qt::WindowSystemMenuHint);

	//Resize
	m_resizeHandle = new QLabel(ui.mainFrame);
	m_resizeHandle->setObjectName(QString::fromUtf8("resizeHandle"));
	m_resizeHandle->setProperty(RESIZE_SECTION, Qt::BottomRightSection);
	updateResizeHandlePosition();

	ui.topLeftFrame->setProperty(RESIZE_SECTION, Qt::TopLeftSection);
	ui.topFrame->setProperty(RESIZE_SECTION, Qt::TopSection);
	ui.topRightFrame->setProperty(RESIZE_SECTION, Qt::TopRightSection);
	ui.leftFrame->setProperty(RESIZE_SECTION, Qt::LeftSection);
	ui.rightFrame->setProperty(RESIZE_SECTION, Qt::RightSection);
	ui.bottomLeftFrame->setProperty(RESIZE_SECTION, Qt::BottomLeftSection);
	ui.bottomFrame->setProperty(RESIZE_SECTION, Qt::BottomSection);
	ui.bottomRightFrame->setProperty(RESIZE_SECTION, Qt::BottomRightSection);

	m_resizeSections.clear();
	m_resizeSections.append(ui.topLeftFrame);
	m_resizeSections.append(ui.topFrame);
	m_resizeSections.append(ui.topRightFrame);
	m_resizeSections.append(ui.leftFrame);
	m_resizeSections.append(ui.rightFrame);
	m_resizeSections.append(ui.bottomLeftFrame);
	m_resizeSections.append(ui.bottomFrame);
	m_resizeSections.append(ui.bottomRightFrame);

	m_moveHandles.clear();
	m_moveHandles.append(ui.titleBarFrame);

	// Order of window controls in the widget stack
	m_resizeHandle->raise();
	ui.topRightFrame->stackUnder(m_resizeHandle);
	ui.bottomRightFrame->stackUnder(ui.topRightFrame);
	ui.topLeftFrame->stackUnder(ui.bottomRightFrame);
	ui.bottomLeftFrame->stackUnder(ui.topLeftFrame);
	ui.topFrame->stackUnder(ui.bottomLeftFrame);
	ui.bottomFrame->stackUnder(ui.topFrame);
	ui.rightFrame->stackUnder(ui.bottomFrame);
	ui.leftFrame->stackUnder(ui.rightFrame);

	enableMinimizeControls(true);
	enableMaximizeControls(true);
	enableResizeControls(true);
}

CustomFrame::~CustomFrame()
{	
}

QFrame* CustomFrame::getContentFrame()
{
	return ui.contentFrame;
}

void CustomFrame::setMaximized(bool maximized)
{
	if (m_isMaximizeEnabled)
	{
		if (maximized)
		{
			// Save the Mouse Posistion and the Widget Geometry because no event gets fired after maximize button click
			m_posMousePressed = QCursor::pos();
			m_geoMousePressed = m_parent->geometry();

			displayResizeControls(false);
			m_parent->showMaximized();
		}
		else
		{
			if (m_isResizeEnabled)
				displayResizeControls(true);
			m_parent->showNormal();
		}
	}
}

void CustomFrame::enableMinimizeControls(bool enabled)
{
	if (enabled)
	{
		m_parent->setWindowFlags(m_parent->windowFlags() | Qt::WindowMinimizeButtonHint | Qt::WindowMaximizeButtonHint);
		ui.minimizeButton->show();
		ui.minimizeButton->setDisabled(false);
		m_isMinimizeEnabled = true;
	}
	else
	{
		m_parent->setWindowFlags(m_parent->windowFlags() & ~Qt::WindowMinimizeButtonHint & ~Qt::WindowMaximizeButtonHint);
		ui.minimizeButton->hide();
		ui.minimizeButton->setDisabled(true);
		m_isMinimizeEnabled = false;
	}
}

void CustomFrame::enableMaximizeControls(bool enabled)
{
	if (enabled)
	{
		ui.maximizeButton->show();
		ui.maximizeButton->setDisabled(false);
		m_isMaximizeEnabled = true;
	}
	else
	{
		ui.maximizeButton->hide();
		ui.maximizeButton->setDisabled(true);
		m_isMaximizeEnabled = true;
	}
}

void CustomFrame::enableResizeControls(bool enabled)
{
	if (enabled)
	{
		m_isResizeEnabled = true;
		displayResizeControls(true);
	}
	else
	{
		m_isResizeEnabled = false;
		displayResizeControls(false);
	}
}

bool CustomFrame::eventFilter(QObject * target, QEvent * event)
{
	QResizeEvent* resizeEvent = dynamic_cast<QResizeEvent*>(event);
	QShowEvent* showEvent = dynamic_cast<QShowEvent*>(event);
	if (resizeEvent || showEvent) {
		updateResizeHandlePosition();
	}

	QMouseEvent* mouseEvent = dynamic_cast<QMouseEvent*>(event);
	if (mouseEvent) {
		QEvent::Type eventType = event->type();

		if (mouseEvent->button() == Qt::LeftButton) // MouseMove events have Qt::NoButton!
		{
			if (eventType == QEvent::MouseButtonPress)
			{
				if (!ui.maximizeButton->isChecked()) // is not maximized?
				{
					m_isMousePressed = true;
					m_moveX = m_moveY = m_resizeX = m_resizeY = 0;
					m_posMousePressed = mouseEvent->globalPos();
					m_geoMousePressed = m_parent->geometry();

					QWidget *pressTarget = this->childAt(mouseEvent->pos());
					if (pressTarget != NULL && (pressTarget == m_resizeHandle || m_resizeSections.contains(pressTarget)) && m_isResizeEnabled)
					{
						Qt::WindowFrameSection resizingSection = (Qt::WindowFrameSection)pressTarget->property(RESIZE_SECTION).toInt();

						switch (resizingSection)
						{
						case Qt::TopLeftSection:
							m_moveX = m_moveY = 1;
							m_resizeX = m_resizeY = -1;
							break;
						case Qt::TopSection:
							m_moveY = 1;
							m_resizeY = -1;
							break;
						case Qt::TopRightSection:
							m_moveY = m_resizeX = 1;
							m_resizeY = -1;
							break;
						case Qt::LeftSection:
							m_moveX = 1;
							m_resizeX = -1;
							break;
						case Qt::RightSection:
							m_resizeX = 1;
							break;
						case Qt::BottomLeftSection:
							m_moveX = m_resizeY = 1;
							m_resizeX = -1;
							break;
						case Qt::BottomSection:
							m_resizeY = 1;
							break;
						case Qt::BottomRightSection:
						default:
							m_resizeX = m_resizeY = 1;
							break;
						}
					}
					else if (m_moveHandles.contains(pressTarget))
					{
						m_moveX = 1;
						m_moveY = 1;
					}
				}
				else // is maximized?
				{
					if (m_moveHandles.contains(this->childAt(mouseEvent->pos())))
					{
						m_isMaximizedWidgetGrabbed = true;
						m_isMousePressed = true;
						m_moveX = 1;
						m_moveY = 1;
					}
				}
			}
			else if (eventType == QEvent::MouseButtonRelease)
			{
				m_isMousePressed = false;
				m_moveX = m_moveY = m_resizeX = m_resizeY = 0;
			}
			else if (eventType == QEvent::MouseButtonDblClick)
			{
				// Check if the double click happened on a window move handle
				if (m_moveHandles.contains(this->childAt(mouseEvent->pos())))
				{
					ui.maximizeButton->click();
					m_isMaximizedWidgetGrabbed = false;
				}
			}
		}
		else if (eventType == QEvent::MouseMove)
		{
			if (m_isMaximizedWidgetGrabbed)
			{
				ui.maximizeButton->click();
				m_isMaximizedWidgetGrabbed = false;

				// Adjust old mouse position in order to move the widget centered in x direction to the new mouse position
				int distanceToLeft = m_posMousePressed.x() - m_geoMousePressed.left();
				int distanceToTop = m_posMousePressed.y() - m_geoMousePressed.top();
				int widgetHalfWidth = m_geoMousePressed.width() / 2;
				int titleBarHalfHeight = ui.titleBarFrame->height() / 2;
				m_posMousePressed += QPoint(widgetHalfWidth - distanceToLeft, titleBarHalfHeight - distanceToTop);

				// Get positions within current screen
				int currentScreenNumber = qApp->desktop()->screenNumber(mouseEvent->globalPos());
				QRect currentScreenGeo = qApp->desktop()->screen(currentScreenNumber)->geometry();
				QPoint screenMousePos = mouseEvent->globalPos() - currentScreenGeo.topLeft();

				// Adjust old mouse position in order to limit the widget to the screen bounds
				distanceToLeft = screenMousePos.x();
				int distanceToRight = currentScreenGeo.width() - screenMousePos.x();
				distanceToTop = screenMousePos.y();

				if (distanceToLeft < widgetHalfWidth)
					m_posMousePressed -= QPoint(widgetHalfWidth - distanceToLeft, 0);
				else if(distanceToRight < widgetHalfWidth)
					m_posMousePressed += QPoint(widgetHalfWidth - distanceToRight, 0);

				if (distanceToTop < titleBarHalfHeight)
					m_posMousePressed -= QPoint(0, titleBarHalfHeight - distanceToTop);
			}

			if (m_isMousePressed)
			{
				QPoint offset = mouseEvent->globalPos() - m_posMousePressed;
				QRect newGeo = m_geoMousePressed.translated(m_moveX * offset.x(), m_moveY * offset.y()).adjusted(0, 0, m_resizeX * offset.x(), m_resizeY * offset.y());
				if (m_parent->minimumWidth() > newGeo.size().width()
					|| m_parent->maximumWidth() < newGeo.size().width())
				{
					newGeo.setLeft(m_parent->geometry().left());
					newGeo.setRight(m_parent->geometry().right());
				}
				if (m_parent->minimumHeight() > newGeo.size().height()
					|| m_parent->maximumHeight() < newGeo.size().height())
				{
					newGeo.setTop(m_parent->geometry().top());
					newGeo.setBottom(m_parent->geometry().bottom());
				}
				m_parent->setGeometry(newGeo);
			}
		}
	}

	return CustomStyleableWidget::eventFilter(target, event);
}

void CustomFrame::displayResizeControls(bool displayed)
{
	if (displayed)
	{
		m_resizeHandle->show();
		m_resizeHandle->setCursor(Qt::SizeFDiagCursor);
		ui.topLeftFrame->setCursor(Qt::SizeFDiagCursor);
		ui.topFrame->setCursor(Qt::SizeVerCursor);
		ui.topRightFrame->setCursor(Qt::SizeBDiagCursor);
		ui.leftFrame->setCursor(Qt::SizeHorCursor);
		ui.rightFrame->setCursor(Qt::SizeHorCursor);
		ui.bottomLeftFrame->setCursor(Qt::SizeBDiagCursor);
		ui.bottomFrame->setCursor(Qt::SizeVerCursor);
		ui.bottomRightFrame->setCursor(Qt::SizeFDiagCursor);
	}
	else
	{
		m_resizeHandle->hide();
		m_resizeHandle->setCursor(Qt::ArrowCursor);
		ui.topLeftFrame->setCursor(Qt::ArrowCursor);
		ui.topFrame->setCursor(Qt::ArrowCursor);
		ui.topRightFrame->setCursor(Qt::ArrowCursor);
		ui.leftFrame->setCursor(Qt::ArrowCursor);
		ui.rightFrame->setCursor(Qt::ArrowCursor);
		ui.bottomLeftFrame->setCursor(Qt::ArrowCursor);
		ui.bottomFrame->setCursor(Qt::ArrowCursor);
		ui.bottomRightFrame->setCursor(Qt::ArrowCursor);
	}
}

void CustomFrame::updateResizeHandlePosition()
{
	int handleTop = ui.mainFrame->height() - m_resizeHandle->height();
	m_resizeHandle->move(ui.mainFrame->width() - m_resizeHandle->width(), handleTop);
}
