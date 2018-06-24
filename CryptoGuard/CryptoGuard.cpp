#include "CryptoGuard.h"

CryptoGuard::CryptoGuard(QWidget *parent, Qt::WindowFlags flags)
	: QMainWindow(parent, flags)
{
	m_customFrame = new CustomFrame(this, flags);
	setMinimumSize(QSize(800, 500));
	setMaximumSize(QSize(1920, 1080));
	setCentralWidget(m_customFrame);
}
