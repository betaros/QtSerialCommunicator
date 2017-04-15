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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClockLEDClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxSerialPort;
    QPushButton *ButtonConnect;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEditSendText;
    QPushButton *ButtonSend;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QPlainTextEdit *plainTextEditOutput;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ClockLEDClass)
    {
        if (ClockLEDClass->objectName().isEmpty())
            ClockLEDClass->setObjectName(QStringLiteral("ClockLEDClass"));
        ClockLEDClass->resize(600, 400);
        centralWidget = new QWidget(ClockLEDClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        comboBoxSerialPort = new QComboBox(widget_2);
        comboBoxSerialPort->setObjectName(QStringLiteral("comboBoxSerialPort"));

        horizontalLayout->addWidget(comboBoxSerialPort);

        ButtonConnect = new QPushButton(widget_2);
        ButtonConnect->setObjectName(QStringLiteral("ButtonConnect"));
        ButtonConnect->setMinimumSize(QSize(100, 0));
        ButtonConnect->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(ButtonConnect);


        verticalLayout->addWidget(widget_2);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEditSendText = new QLineEdit(widget);
        lineEditSendText->setObjectName(QStringLiteral("lineEditSendText"));

        horizontalLayout_2->addWidget(lineEditSendText);

        ButtonSend = new QPushButton(widget);
        ButtonSend->setObjectName(QStringLiteral("ButtonSend"));
        ButtonSend->setMinimumSize(QSize(100, 0));
        ButtonSend->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(ButtonSend);


        verticalLayout->addWidget(widget);

        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        plainTextEditOutput = new QPlainTextEdit(widget_3);
        plainTextEditOutput->setObjectName(QStringLiteral("plainTextEditOutput"));

        horizontalLayout_3->addWidget(plainTextEditOutput);


        verticalLayout->addWidget(widget_3);

        ClockLEDClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ClockLEDClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        ClockLEDClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ClockLEDClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ClockLEDClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ClockLEDClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ClockLEDClass->setStatusBar(statusBar);

        retranslateUi(ClockLEDClass);

        QMetaObject::connectSlotsByName(ClockLEDClass);
    } // setupUi

    void retranslateUi(QMainWindow *ClockLEDClass)
    {
        ClockLEDClass->setWindowTitle(QApplication::translate("ClockLEDClass", "ClockLED", Q_NULLPTR));
        ButtonConnect->setText(QApplication::translate("ClockLEDClass", "Connect", Q_NULLPTR));
        ButtonSend->setText(QApplication::translate("ClockLEDClass", "Send", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClockLEDClass: public Ui_ClockLEDClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCKLED_H
