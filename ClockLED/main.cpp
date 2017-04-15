#include "ClockLED.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ClockLED w;
	w.show();
	return a.exec();
}
