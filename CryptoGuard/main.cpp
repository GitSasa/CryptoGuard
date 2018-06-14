#include "CryptoGuard.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CryptoGuard w;
	w.show();
	return a.exec();
}
