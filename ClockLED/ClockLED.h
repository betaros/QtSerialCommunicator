#pragma once

#include <QtWidgets/QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include "ui_ClockLED.h"

class ClockLED : public QMainWindow
{
	Q_OBJECT

public:
	ClockLED(QWidget *parent = Q_NULLPTR);

public slots:
	void receive();
	void send();
	void getPorts();
	void connectSerial();

private:
	Ui::ClockLEDClass ui;
	QSerialPort qsp;
	QList<QSerialPortInfo> portlist;
	QSerialPortInfo qspi;
	bool status;

};
