/********************************************************************************
** Form generated from reading UI file 'ClockLED.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCKLED_H
#define UI_CLOCKLED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClockLEDClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabCommunication;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QWidget *widgetConnection;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxSerialPort;
    QPushButton *ButtonConnect;
    QWidget *widgetSend;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEditSendText;
    QPushButton *ButtonSend;
    QWidget *widgetOutput;
    QHBoxLayout *horizontalLayout_5;
    QPlainTextEdit *plainTextEditOutput;
    QPushButton *ButtonExport;
    QWidget *tabSettings;
    QVBoxLayout *verticalLayout_2;
    QWidget *widgetSettings;
    QGridLayout *gridLayout;
    QComboBox *cbSettingParity;
    QComboBox *cbSettingStopbit;
    QLabel *lblSettingDatabit;
    QComboBox *cbSettingDatabit;
    QLabel *lblSettingStopbit;
    QLabel *lblSettingParity;
    QLabel *lblSettingBaud;
    QComboBox *cbSettingBaud;
    QSpacerItem *verticalSpacer;
    QLabel *lblSettingFlowcontrol;
    QComboBox *cbSettingFlowcontrol;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ClockLEDClass)
    {
        if (ClockLEDClass->objectName().isEmpty())
            ClockLEDClass->setObjectName(QStringLiteral("ClockLEDClass"));
        ClockLEDClass->resize(623, 483);
        centralWidget = new QWidget(ClockLEDClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tabCommunication = new QTabWidget(centralWidget);
        tabCommunication->setObjectName(QStringLiteral("tabCommunication"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widgetConnection = new QWidget(tab);
        widgetConnection->setObjectName(QStringLiteral("widgetConnection"));
        horizontalLayout = new QHBoxLayout(widgetConnection);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        comboBoxSerialPort = new QComboBox(widgetConnection);
        comboBoxSerialPort->setObjectName(QStringLiteral("comboBoxSerialPort"));

        horizontalLayout->addWidget(comboBoxSerialPort);

        ButtonConnect = new QPushButton(widgetConnection);
        ButtonConnect->setObjectName(QStringLiteral("ButtonConnect"));
        ButtonConnect->setMinimumSize(QSize(100, 0));
        ButtonConnect->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(ButtonConnect);


        verticalLayout->addWidget(widgetConnection);

        widgetSend = new QWidget(tab);
        widgetSend->setObjectName(QStringLiteral("widgetSend"));
        horizontalLayout_4 = new QHBoxLayout(widgetSend);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lineEditSendText = new QLineEdit(widgetSend);
        lineEditSendText->setObjectName(QStringLiteral("lineEditSendText"));

        horizontalLayout_4->addWidget(lineEditSendText);

        ButtonSend = new QPushButton(widgetSend);
        ButtonSend->setObjectName(QStringLiteral("ButtonSend"));
        ButtonSend->setMinimumSize(QSize(100, 0));
        ButtonSend->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(ButtonSend);


        verticalLayout->addWidget(widgetSend);

        widgetOutput = new QWidget(tab);
        widgetOutput->setObjectName(QStringLiteral("widgetOutput"));
        horizontalLayout_5 = new QHBoxLayout(widgetOutput);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        plainTextEditOutput = new QPlainTextEdit(widgetOutput);
        plainTextEditOutput->setObjectName(QStringLiteral("plainTextEditOutput"));

        horizontalLayout_5->addWidget(plainTextEditOutput);


        verticalLayout->addWidget(widgetOutput);

        ButtonExport = new QPushButton(tab);
        ButtonExport->setObjectName(QStringLiteral("ButtonExport"));

        verticalLayout->addWidget(ButtonExport);

        tabCommunication->addTab(tab, QString());
        tabSettings = new QWidget();
        tabSettings->setObjectName(QStringLiteral("tabSettings"));
        verticalLayout_2 = new QVBoxLayout(tabSettings);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        widgetSettings = new QWidget(tabSettings);
        widgetSettings->setObjectName(QStringLiteral("widgetSettings"));
        widgetSettings->setEnabled(true);
        gridLayout = new QGridLayout(widgetSettings);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cbSettingParity = new QComboBox(widgetSettings);
        cbSettingParity->setObjectName(QStringLiteral("cbSettingParity"));

        gridLayout->addWidget(cbSettingParity, 3, 1, 1, 1);

        cbSettingStopbit = new QComboBox(widgetSettings);
        cbSettingStopbit->setObjectName(QStringLiteral("cbSettingStopbit"));

        gridLayout->addWidget(cbSettingStopbit, 4, 1, 1, 1);

        lblSettingDatabit = new QLabel(widgetSettings);
        lblSettingDatabit->setObjectName(QStringLiteral("lblSettingDatabit"));

        gridLayout->addWidget(lblSettingDatabit, 2, 0, 1, 1);

        cbSettingDatabit = new QComboBox(widgetSettings);
        cbSettingDatabit->setObjectName(QStringLiteral("cbSettingDatabit"));

        gridLayout->addWidget(cbSettingDatabit, 2, 1, 1, 1);

        lblSettingStopbit = new QLabel(widgetSettings);
        lblSettingStopbit->setObjectName(QStringLiteral("lblSettingStopbit"));

        gridLayout->addWidget(lblSettingStopbit, 4, 0, 1, 1);

        lblSettingParity = new QLabel(widgetSettings);
        lblSettingParity->setObjectName(QStringLiteral("lblSettingParity"));

        gridLayout->addWidget(lblSettingParity, 3, 0, 1, 1);

        lblSettingBaud = new QLabel(widgetSettings);
        lblSettingBaud->setObjectName(QStringLiteral("lblSettingBaud"));

        gridLayout->addWidget(lblSettingBaud, 1, 0, 1, 1);

        cbSettingBaud = new QComboBox(widgetSettings);
        cbSettingBaud->setObjectName(QStringLiteral("cbSettingBaud"));

        gridLayout->addWidget(cbSettingBaud, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        lblSettingFlowcontrol = new QLabel(widgetSettings);
        lblSettingFlowcontrol->setObjectName(QStringLiteral("lblSettingFlowcontrol"));

        gridLayout->addWidget(lblSettingFlowcontrol, 5, 0, 1, 1);

        cbSettingFlowcontrol = new QComboBox(widgetSettings);
        cbSettingFlowcontrol->setObjectName(QStringLiteral("cbSettingFlowcontrol"));

        gridLayout->addWidget(cbSettingFlowcontrol, 5, 1, 1, 1);


        verticalLayout_2->addWidget(widgetSettings);

        tabCommunication->addTab(tabSettings, QString());

        verticalLayout_3->addWidget(tabCommunication);

        ClockLEDClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ClockLEDClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ClockLEDClass->setStatusBar(statusBar);

        retranslateUi(ClockLEDClass);

        tabCommunication->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ClockLEDClass);
    } // setupUi

    void retranslateUi(QMainWindow *ClockLEDClass)
    {
        ClockLEDClass->setWindowTitle(QApplication::translate("ClockLEDClass", "ClockLED", Q_NULLPTR));
        ButtonConnect->setText(QApplication::translate("ClockLEDClass", "Connect", Q_NULLPTR));
        ButtonSend->setText(QApplication::translate("ClockLEDClass", "Send", Q_NULLPTR));
        ButtonExport->setText(QApplication::translate("ClockLEDClass", "Export", Q_NULLPTR));
        tabCommunication->setTabText(tabCommunication->indexOf(tab), QApplication::translate("ClockLEDClass", "Communication", Q_NULLPTR));
        lblSettingDatabit->setText(QApplication::translate("ClockLEDClass", "Databit", Q_NULLPTR));
        lblSettingStopbit->setText(QApplication::translate("ClockLEDClass", "Stopbit", Q_NULLPTR));
        lblSettingParity->setText(QApplication::translate("ClockLEDClass", "Parity", Q_NULLPTR));
        lblSettingBaud->setText(QApplication::translate("ClockLEDClass", "Baud", Q_NULLPTR));
        lblSettingFlowcontrol->setText(QApplication::translate("ClockLEDClass", "Flowcontrol", Q_NULLPTR));
        tabCommunication->setTabText(tabCommunication->indexOf(tabSettings), QApplication::translate("ClockLEDClass", "Settings", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClockLEDClass: public Ui_ClockLEDClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCKLED_H
