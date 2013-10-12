/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *spinPitchP;
    QLabel *label_2;
    QDoubleSpinBox *spinPitchD;
    QLabel *label_3;
    QDoubleSpinBox *spinPitchPower;
    QGroupBox *groupBox_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QDoubleSpinBox *spinRollP;
    QLabel *label_8;
    QDoubleSpinBox *spinRollD;
    QLabel *label_9;
    QDoubleSpinBox *spinRollPower;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_13;
    QDoubleSpinBox *spinRollCalibration;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QDoubleSpinBox *spinYawP;
    QLabel *label_11;
    QDoubleSpinBox *spinYawD;
    QLabel *label_12;
    QDoubleSpinBox *spinYawPower;
    QCheckBox *checkRC;
    QCheckBox *checkAutopan;
    QPushButton *buttonRead;
    QPushButton *buttonWrite;
    QSlider *sliderOnOff;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QSlider *sliderOnOff_2;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *labelStatus_2;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_14;
    QLabel *labelStatus;
    QMenuBar *menuBar;
    QMenu *menuEvvGC_GUI;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(629, 391);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 50, 327, 66));
        horizontalLayout_5 = new QHBoxLayout(groupBox);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        spinPitchP = new QDoubleSpinBox(groupBox);
        spinPitchP->setObjectName(QStringLiteral("spinPitchP"));
        spinPitchP->setMinimum(0.01);
        spinPitchP->setMaximum(2);
        spinPitchP->setSingleStep(0.01);

        horizontalLayout->addWidget(spinPitchP);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        spinPitchD = new QDoubleSpinBox(groupBox);
        spinPitchD->setObjectName(QStringLiteral("spinPitchD"));
        spinPitchD->setMinimum(0.01);
        spinPitchD->setMaximum(2);
        spinPitchD->setSingleStep(0.01);

        horizontalLayout->addWidget(spinPitchD);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        spinPitchPower = new QDoubleSpinBox(groupBox);
        spinPitchPower->setObjectName(QStringLiteral("spinPitchPower"));
        spinPitchPower->setMinimum(1);
        spinPitchPower->setSingleStep(0.1);

        horizontalLayout->addWidget(spinPitchPower);


        horizontalLayout_5->addLayout(horizontalLayout);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 120, 521, 71));
        widget = new QWidget(groupBox_3);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(13, 30, 287, 25));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_2->addWidget(label_7);

        spinRollP = new QDoubleSpinBox(widget);
        spinRollP->setObjectName(QStringLiteral("spinRollP"));
        spinRollP->setMinimum(0.01);
        spinRollP->setMaximum(2);
        spinRollP->setSingleStep(0.01);

        horizontalLayout_2->addWidget(spinRollP);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_2->addWidget(label_8);

        spinRollD = new QDoubleSpinBox(widget);
        spinRollD->setObjectName(QStringLiteral("spinRollD"));
        spinRollD->setMinimum(0.01);
        spinRollD->setMaximum(2);
        spinRollD->setSingleStep(0.01);

        horizontalLayout_2->addWidget(spinRollD);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_2->addWidget(label_9);

        spinRollPower = new QDoubleSpinBox(widget);
        spinRollPower->setObjectName(QStringLiteral("spinRollPower"));
        spinRollPower->setMinimum(1);
        spinRollPower->setSingleStep(0.1);

        horizontalLayout_2->addWidget(spinRollPower);

        widget1 = new QWidget(groupBox_3);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(340, 30, 176, 25));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(widget1);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_3->addWidget(label_13);

        spinRollCalibration = new QDoubleSpinBox(widget1);
        spinRollCalibration->setObjectName(QStringLiteral("spinRollCalibration"));
        spinRollCalibration->setMinimum(-45);
        spinRollCalibration->setMaximum(45);
        spinRollCalibration->setSingleStep(0.01);

        horizontalLayout_3->addWidget(spinRollCalibration);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 190, 327, 66));
        horizontalLayout_6 = new QHBoxLayout(groupBox_4);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_4->addWidget(label_10);

        spinYawP = new QDoubleSpinBox(groupBox_4);
        spinYawP->setObjectName(QStringLiteral("spinYawP"));
        spinYawP->setMinimum(0.01);
        spinYawP->setMaximum(2);
        spinYawP->setSingleStep(0.01);

        horizontalLayout_4->addWidget(spinYawP);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_4->addWidget(label_11);

        spinYawD = new QDoubleSpinBox(groupBox_4);
        spinYawD->setObjectName(QStringLiteral("spinYawD"));
        spinYawD->setMinimum(0.01);
        spinYawD->setMaximum(2);
        spinYawD->setSingleStep(0.01);

        horizontalLayout_4->addWidget(spinYawD);

        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_4->addWidget(label_12);

        spinYawPower = new QDoubleSpinBox(groupBox_4);
        spinYawPower->setObjectName(QStringLiteral("spinYawPower"));
        spinYawPower->setMinimum(1);
        spinYawPower->setSingleStep(0.1);

        horizontalLayout_4->addWidget(spinYawPower);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        checkRC = new QCheckBox(centralWidget);
        checkRC->setObjectName(QStringLiteral("checkRC"));
        checkRC->setGeometry(QRect(420, 210, 85, 20));
        checkAutopan = new QCheckBox(centralWidget);
        checkAutopan->setObjectName(QStringLiteral("checkAutopan"));
        checkAutopan->setGeometry(QRect(420, 240, 85, 20));
        buttonRead = new QPushButton(centralWidget);
        buttonRead->setObjectName(QStringLiteral("buttonRead"));
        buttonRead->setGeometry(QRect(30, 270, 81, 22));
        buttonWrite = new QPushButton(centralWidget);
        buttonWrite->setObjectName(QStringLiteral("buttonWrite"));
        buttonWrite->setGeometry(QRect(130, 270, 81, 22));
        sliderOnOff = new QSlider(centralWidget);
        sliderOnOff->setObjectName(QStringLiteral("sliderOnOff"));
        sliderOnOff->setGeometry(QRect(140, 20, 40, 16));
        sliderOnOff->setMinimumSize(QSize(40, 16));
        sliderOnOff->setMaximum(1);
        sliderOnOff->setOrientation(Qt::Horizontal);
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(117, 20, 17, 14));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(186, 20, 17, 14));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(439, 20, 17, 14));
        sliderOnOff_2 = new QSlider(centralWidget);
        sliderOnOff_2->setObjectName(QStringLiteral("sliderOnOff_2"));
        sliderOnOff_2->setGeometry(QRect(393, 20, 40, 16));
        sliderOnOff_2->setMinimumSize(QSize(40, 16));
        sliderOnOff_2->setMaximum(1);
        sliderOnOff_2->setOrientation(Qt::Horizontal);
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(370, 20, 17, 14));
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(50, 20, 45, 14));
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(270, 20, 81, 16));
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(359, 310, 45, 14));
        labelStatus_2 = new QLabel(centralWidget);
        labelStatus_2->setObjectName(QStringLiteral("labelStatus_2"));
        labelStatus_2->setGeometry(QRect(410, 310, 93, 14));
        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(20, 310, 146, 16));
        horizontalLayout_7 = new QHBoxLayout(widget2);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(widget2);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_7->addWidget(label_14);

        labelStatus = new QLabel(widget2);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));

        horizontalLayout_7->addWidget(labelStatus);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 629, 19));
        menuEvvGC_GUI = new QMenu(menuBar);
        menuEvvGC_GUI->setObjectName(QStringLiteral("menuEvvGC_GUI"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuEvvGC_GUI->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "EvvGC GUI", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Pitch", 0));
        label->setText(QApplication::translate("MainWindow", "P:", 0));
        label_2->setText(QApplication::translate("MainWindow", "D:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Power:", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Roll", 0));
        label_7->setText(QApplication::translate("MainWindow", "P:", 0));
        label_8->setText(QApplication::translate("MainWindow", "D:", 0));
        label_9->setText(QApplication::translate("MainWindow", "Power:", 0));
        label_13->setText(QApplication::translate("MainWindow", "Roll Calibration:", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Yaw", 0));
        label_10->setText(QApplication::translate("MainWindow", "P:", 0));
        label_11->setText(QApplication::translate("MainWindow", "D:", 0));
        label_12->setText(QApplication::translate("MainWindow", "Power:", 0));
        checkRC->setText(QApplication::translate("MainWindow", "RC", 0));
        checkAutopan->setText(QApplication::translate("MainWindow", "AutoPan", 0));
        buttonRead->setText(QApplication::translate("MainWindow", "Read", 0));
        buttonWrite->setText(QApplication::translate("MainWindow", "Write", 0));
        label_15->setText(QApplication::translate("MainWindow", "Off", 0));
        label_16->setText(QApplication::translate("MainWindow", "On", 0));
        label_17->setText(QApplication::translate("MainWindow", "On", 0));
        label_18->setText(QApplication::translate("MainWindow", "Off", 0));
        label_19->setText(QApplication::translate("MainWindow", "Port:", 0));
        label_20->setText(QApplication::translate("MainWindow", "ConfigMode", 0));
        label_21->setText(QApplication::translate("MainWindow", "Config", 0));
        labelStatus_2->setText(QApplication::translate("MainWindow", "off", 0));
        label_14->setText(QApplication::translate("MainWindow", "Status:", 0));
        labelStatus->setText(QApplication::translate("MainWindow", "Not connected", 0));
        menuEvvGC_GUI->setTitle(QApplication::translate("MainWindow", "EvvGC GUI", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
