#include "ClockLED.h"

// http://doc.qt.io/qt-5/qtserialport-terminal-example.html
ClockLED::ClockLED(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	getPorts();
	
	status = false;
	ui.plainTextEditOutput->setPlainText("Start");

	QObject::connect(ui.ButtonConnect, SIGNAL(pressed()), this, SLOT(connectSerial()));
}

void ClockLED::receive() {
	QByteArray ba = qsp.readAll();
	ui.plainTextEditOutput->setPlainText(ba);
}

void ClockLED::send() {
	QString text = ui.lineEditSendText->text();
	QByteArray ba = text.toLatin1();
	const char *buffer = ba.data();
	qsp.write(buffer);
}

void ClockLED::getPorts() {
	portlist = qspi.availablePorts();
	ui.comboBoxSerialPort->clear();
	for each (QSerialPortInfo qspi_temp in portlist)
	{
		QString text = qspi_temp.portName() + " | " + qspi_temp.manufacturer();
		ui.comboBoxSerialPort->addItem(text);
	}
}

void ClockLED::connectSerial() {
	if (status == false) {
		qsp.setBaudRate(9600);
		qsp.setPort(portlist.at(ui.comboBoxSerialPort->currentIndex()));
		status = qsp.open(QIODevice::ReadWrite);
	} else {
		if (qsp.isOpen()) {
			qsp.close();
			status = false;
		}
	}
	
	if (status) {
		ui.plainTextEditOutput->setPlainText("Connected");
		ui.ButtonConnect->setText("Disconnect");
		receive();
	}
	else {
		ui.plainTextEditOutput->setPlainText("Disconnected");
		ui.ButtonConnect->setText("Connect");
	}
}
