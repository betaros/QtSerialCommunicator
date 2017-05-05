#pragma once

#include "Includes.h"
#include "ui_ClockLED.h"

class ClockLED : public QMainWindow
{
	Q_OBJECT

public:
	ClockLED(QWidget *parent = Q_NULLPTR);

public slots:
	void receive();
	void send();
  void sendToQueue();

	void connectSerial();
	void exportOutput();

	void setBaudrate();
	void setDatabit();
	void setParity();
	void setStopbit();
  void setFlowcontrol();

private:
	Ui::ClockLEDClass ui;
	
	QSerialPort qsp;
	QSerialPortInfo qspi;

	QList<QSerialPortInfo> portlist;
	QList<QString> outputlist;

	bool status;
  bool available;
	
	void updateTextfield(QString text);
	void getPorts();
	void fillCheckboxes();

  QQueue<QString> sendqueue;
};
