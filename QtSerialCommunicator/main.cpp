#include "qtserialcommunicator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtSerialCommunicator w;
    w.show();

    return a.exec();
}
