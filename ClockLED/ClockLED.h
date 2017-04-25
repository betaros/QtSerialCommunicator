#pragma once

#include <QtWidgets/QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTextStream>

#include "ui_ClockLED.h"

class ClockLED : public QMainWindow
{
	Q_OBJECT

public:
	ClockLED(QWidget *parent = Q_NULLPTR);

public slots:
	void receive();
	void send();

	void connectSerial();
	bool exportOutput();

	void fillCheckboxes();
	void setBaudrate();
	void setDatabit();
	void setParity();
	void setStopbit();

private:
	Ui::ClockLEDClass ui;
	
	QSerialPort qsp;
	QSerialPortInfo qspi;

	QList<QSerialPortInfo> portlist;
	QList<QString> outputlist;

	bool status;
	
	void updateTextfield(QString text);
	void getPorts();
};
