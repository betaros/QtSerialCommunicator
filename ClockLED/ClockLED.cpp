#include "ClockLED.h"

// http://doc.qt.io/qt-5/qtserialport-terminal-example.html
ClockLED::ClockLED(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	getPorts();
	
	status = false;
	updateTextfield("Start");

	QObject::connect(ui.ButtonConnect, SIGNAL(pressed()), this, SLOT(connectSerial()));
}

void ClockLED::receive() {
	QByteArray ba = qsp.readAll();
	updateTextfield(ba);
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
		updateTextfield("Connected");
		ui.ButtonConnect->setText("Disconnect");
		receive();
	} else {
		updateTextfield("Disconnected");
		ui.ButtonConnect->setText("Connect");
	}
}

void ClockLED::updateTextfield(QString text) {
	outputlist.push_back(text);
	ui.plainTextEditOutput->appendPlainText(text);
}

bool ClockLED::exportOutput() {
	QString filename = "output.txt";
	QFile file(filename);
	if (file.open(QIODevice::ReadWrite)) {
		QTextStream stream(&file);
		for each (QString text in outputlist)
		{
			stream << text << endl;
		}
	}
	return false;
}