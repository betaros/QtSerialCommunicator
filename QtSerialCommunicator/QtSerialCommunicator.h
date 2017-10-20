#include "includes.h"
#include "ui_QtSerialCommunicator.h"

class QtSerialCommunicator : public QMainWindow
{
    Q_OBJECT

public:
    QtSerialCommunicator(QWidget *parent = Q_NULLPTR);

public slots:
    void receive();
    void send();

    void connectSerial();
    void exportOutput();

    void setBaudrate();
    void setDatabit();
    void setParity();
    void setStopbit();
  void setFlowcontrol();

private:
    Ui::QtSerialCommunicatorClass ui;

    QSerialPort qsp;
    QSerialPortInfo qspi;

    QList<QSerialPortInfo> portlist;
    QList<QString> outputlist;

    bool status;
    bool available;

    void updateTextfield(QString text);
    void getPorts();
    void fillCheckboxes();

    QStringList baud = { "1200", "2400", "4800", "9600", "19200", "38400", "57600", "115200" };
    QStringList databit = { "5", "6", "7", "8" };
    QStringList parity = { "NoParity", "EvenParity", "OddParity", "SpaceParity" };
    QStringList stopbit = { "OneStop", "OneAndHalfStop", "TwoStop" };
    QStringList flowcontrol = { "NoFlowControl", "HardwareControl", "SoftwareControl" };
};
