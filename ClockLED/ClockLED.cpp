#include "ClockLED.h"

// http://doc.qt.io/qt-5/qtserialport-terminal-example.html
/*
* Constructor
*/
ClockLED::ClockLED(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	getPorts();
	
	status = false;
	updateTextfield("Start");

	QObject::connect(ui.ButtonConnect, SIGNAL(pressed()), this, SLOT(connectSerial()));
	QObject::connect(ui.ButtonSend, SIGNAL(pressed()), this, SLOT(sendToQueue()));

	fillCheckboxes();
	QObject::connect(ui.cbSettingBaud, SIGNAL(currentIndexChanged()), this, SLOT(setBaudrate()));
	QObject::connect(ui.cbSettingDatabit, SIGNAL(currentIndexChanged()), this, SLOT(setDatabit()));
	QObject::connect(ui.cbSettingParity, SIGNAL(currentIndexChanged()), this, SLOT(setParity()));
	QObject::connect(ui.cbSettingStopbit, SIGNAL(currentIndexChanged()), this, SLOT(setStopbit()));

	ui.statusBar->showMessage("Disconnected");
}

// http://doc.qt.io/qt-5/qtserialport-creaderasync-example.html
/*
* Receive data from serial port
*/
void ClockLED::receive() {
	QByteArray ba = qsp.readAll();
	updateTextfield(ba);
}

/*
* Send data to serial port
*/
void ClockLED::send() {
	QString output;
	if (status) {
    while (!sendqueue.isEmpty()) {
      QString text = sendqueue.dequeue();
      QByteArray ba = text.toLatin1();
      const char *buffer = ba.data();
      qsp.write(buffer);

      output = "send -> " + text;
    }
	} else {
		output = "send -> not connected";
	}
	
	ui.lineEditSendText->clear();
	updateTextfield(output);
}

/*
* Stores data in queue
*/
void ClockLED::sendToQueue() {
  QString text = ui.lineEditSendText->text();
  if (status) {
    sendqueue.enqueue(text);
  } else {

  }
}

/*
* Get all available ports
*/
void ClockLED::getPorts() {
	portlist = qspi.availablePorts();
	ui.comboBoxSerialPort->clear();
	for each (QSerialPortInfo qspi_temp in portlist)
	{
		QString text = qspi_temp.portName() + " | " + qspi_temp.manufacturer();
		ui.comboBoxSerialPort->addItem(text);
	}
}

/*
* Slot for Connect Button
* Connects to choosen serial port
*/
void ClockLED::connectSerial() {
	if (status == false) {
    // Connect to device
		qsp.setPort(portlist.at(ui.comboBoxSerialPort->currentIndex()));
		status = qsp.open(QIODevice::ReadWrite);
    if (status) {
      // Connection successful
      updateTextfield("Connected");
      ui.statusBar->showMessage("Connected");
      ui.ButtonConnect->setText("Disconnect");

    } else {
      // Connection failed
      updateTextfield("Connection failed");
      ui.statusBar->showMessage("Connection failed");
    }
	} else {
    // Disconnect from device
		if (qsp.isOpen()) {
			qsp.close();
			status = false;
		}
    if (!status) {
      updateTextfield("Disconnected");
      ui.statusBar->showMessage("Disconnected");
      ui.ButtonConnect->setText("Connect");
    } else {
      updateTextfield("Disconnection failed");
      ui.statusBar->showMessage("Disconnection failed");
    }    
	}
}

/*
* Updates text in textfield
*/
void ClockLED::updateTextfield(QString text) {
	outputlist.push_back(text);
	ui.plainTextEditOutput->appendPlainText(text);
}

/*
* Export output to file
*/
void ClockLED::exportOutput() {
	QString filename = "output.txt";
	QFile file(filename);
	if (file.open(QIODevice::ReadWrite)) {
		QTextStream stream(&file);
		for each (QString text in outputlist)
		{
			stream << text << endl;
		}
		file.close();
	}

}

// Settings
// http://doc.qt.io/qt-5/qserialport.html

/* fills the checkboxes */
void ClockLED::fillCheckboxes() {
	QStringList baud = {"1200", "2400", "4800", "9600", "19200", "38400", "57600", "115200"};
	QStringList databit = {"5", "6", "7", "8"};
	QStringList parity = {"NoParity", "EvenParity", "OddParity", "SpaceParity"};
	QStringList stopbit = {"OneStop", "OneAndHalfStop", "TwoStop"};
  QStringList flowcontrol = { "NoFlowControl", "HardwareControl", "SoftwareControl" };

	ui.cbSettingBaud->addItems(baud);
	ui.cbSettingBaud->setCurrentIndex(3);
	setBaudrate();

	ui.cbSettingDatabit->addItems(databit);
	ui.cbSettingDatabit->setCurrentIndex(3);
	setDatabit();

	ui.cbSettingParity->addItems(parity);
	ui.cbSettingParity->setCurrentIndex(0);
	setParity();
	
	ui.cbSettingStopbit->addItems(stopbit);
	ui.cbSettingStopbit->setCurrentIndex(0);
	setStopbit();

  ui.cbSettingFlowcontrol->addItems(flowcontrol);
  ui.cbSettingFlowcontrol->setCurrentIndex(0);
  setFlowcontrol();
}

/* Baudrate */
void ClockLED::setBaudrate() {
	int i = ui.cbSettingBaud->currentIndex();
	switch (i) {
	case 0:
		qsp.setBaudRate(QSerialPort::Baud1200);
		break;
	case 1:
		qsp.setBaudRate(QSerialPort::Baud2400);
		break;
	case 2:
		qsp.setBaudRate(QSerialPort::Baud4800);
		break;
	case 4:
		qsp.setBaudRate(QSerialPort::Baud19200);
		break;
	case 5:
		qsp.setBaudRate(QSerialPort::Baud38400);
		break;
	case 6:
		qsp.setBaudRate(QSerialPort::Baud57600);
		break;
	case 7:
		qsp.setBaudRate(QSerialPort::Baud115200);
		break;
	default:
		qsp.setBaudRate(QSerialPort::Baud9600);
	}
}

/* Databit */
void ClockLED::setDatabit() {
	int i = ui.cbSettingDatabit->currentIndex();
	switch (i) {
	case 0:
		qsp.setDataBits(QSerialPort::Data5);
		break;
	case 1:
		qsp.setDataBits(QSerialPort::Data6);
		break;
	case 2:
		qsp.setDataBits(QSerialPort::Data7);
		break;
	default:
		qsp.setDataBits(QSerialPort::Data8);
	}
}

/* Parity */
void ClockLED::setParity() {
	int i = ui.cbSettingParity->currentIndex();
	switch (i) {
	case 1:
		qsp.setParity(QSerialPort::EvenParity);
		break;
	case 2:
		qsp.setParity(QSerialPort::OddParity);
		break;
	case 3:
		qsp.setParity(QSerialPort::SpaceParity);
		break;
	case 4:
		qsp.setParity(QSerialPort::MarkParity);
		break;
	default:
		qsp.setParity(QSerialPort::NoParity);
	}
}

/* Stopbit */
void ClockLED::setStopbit() {
	int i = ui.cbSettingStopbit->currentIndex();
	switch (i) {
	case 1:
		qsp.setStopBits(QSerialPort::OneAndHalfStop);
		break;
	case 2:
		qsp.setStopBits(QSerialPort::TwoStop);
		break;
	default:
		qsp.setStopBits(QSerialPort::OneStop);
	}
}

/* Stopbit */
void ClockLED::setFlowcontrol() {
  int i = ui.cbSettingFlowcontrol->currentIndex();
  switch (i) {
  case 1:
    qsp.setFlowControl(QSerialPort::HardwareControl);
    break;
  case 2:
    qsp.setFlowControl(QSerialPort::SoftwareControl);
    break;
  default:
    qsp.setFlowControl(QSerialPort::NoFlowControl);
  }
}