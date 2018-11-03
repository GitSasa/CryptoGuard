#include "CryptoGuard.h"

CryptoGuard::CryptoGuard(QWidget *parent, Qt::WindowFlags flags)
	: QMainWindow(parent, flags)
{
	m_customFrame = new CustomFrame(this, flags);
	m_navigationWidget = new NavigationWidget();
	m_passwordSafesWidget = new PasswordSafesWidget();
	m_passwordEntriesWidget = new PasswordEntriesWidget();
	m_actionWidget = new ActionWidget();

	setMinimumSize(QSize(800, 500));
	setMaximumSize(QSize(1920, 1080));
	setCentralWidget(m_customFrame);

	QFrame* contentFrame = m_customFrame->getContentFrame();

	QVBoxLayout* vertLayout = (QVBoxLayout*)contentFrame->layout();
	vertLayout->addWidget(m_navigationWidget);
	QHBoxLayout* horLayout = new QHBoxLayout();
	vertLayout->addLayout(horLayout);
	horLayout->addWidget(m_passwordSafesWidget);
	horLayout->addWidget(m_passwordEntriesWidget);
	vertLayout->addWidget(m_actionWidget);
}
