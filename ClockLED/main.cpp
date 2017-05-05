#include "ClockLED.h"

/*
* Main Class
* starts the GUI
*/
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ClockLED w;
	w.show();
	return a.exec();
}
