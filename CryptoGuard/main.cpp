#include "CryptoGuard.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CryptoGuard w;

	QString styleSheet;
	QFile file(":/skin/application.css");
	if (file.open(QIODevice::ReadOnly))
	{
		styleSheet = file.readAll();
		file.close();
	}

	w.setStyleSheet(styleSheet);

	w.show();
	return a.exec();
}