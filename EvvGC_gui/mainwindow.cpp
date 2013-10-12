#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    serial = new QSerialPort(this);
    connected = false;
    configModeEnabled = false;
}

MainWindow::~MainWindow()
{
    doDisconnect();
    delete serial;

    delete ui;
}

void MainWindow::on_sliderOnOff_valueChanged(int value)
{
    if(value == 0)
    {
        doDisconnect();
    }
    else if (value == 1)
    {
        doConnect();
    }
}

void MainWindow::on_sliderOnOff_2_valueChanged(int value)
{
    if(value == 0)
    {
        configOff();
        ui->labelStatus_2->setText("off");
    }
    else if (value == 1)
    {
        configOn();
        ui->labelStatus_2->setText("on");
    }
}

int MainWindow::doConnect()
{
    serial->setPortName("/dev/ttyUSB0");
    if(serial->open(QIODevice::ReadWrite))
    {
        serial->setBaudRate(9600);
        serial->setDataBits(QSerialPort::Data8);
        serial->setStopBits(QSerialPort::OneStop);
        serial->setParity(QSerialPort::NoParity);
        serial->setFlowControl(QSerialPort::NoFlowControl);

        connected = true;
        ui->labelStatus->setText("Port is opened");
        return 1;

    }
    else
    {
        doDisconnect();
        ui->labelStatus->setText("Error opening serial port");
        return 0;
    }
}

void MainWindow::doDisconnect()
{
    serial->close();
    connected = false;

    ui->labelStatus->setText("Port is closed");
    ui->sliderOnOff->setValue(0);


}

void MainWindow::configOn()
{
    if (! connected ) return ;

    serial->write("i");

    configModeEnabled = true;
}

void MainWindow::configOff()
{
    if (! connected ) return ;

    serial->write("j");

    configModeEnabled = false;
}

int MainWindow::readValues()
{
    if(! connected ) return 0;
    if(! configModeEnabled) return 0;

    serial->write("g");

    QThread::usleep(130);

    char buf[20];

    serial->read(buf,14);
    if(buf[0] == 'x')
    {
        ui->spinPitchP->setValue(buf[1] / 100.0f);
        ui->spinRollP->setValue(buf[2] / 100.0f);
        ui->spinYawP->setValue(buf[3] / 100.0f);

        ui->spinPitchD->setValue(buf[4] / 100.0f);
        ui->spinRollD->setValue(buf[5] / 100.0f);
        ui->spinYawD->setValue(buf[6] / 100.0f);

        ui->spinPitchPower->setValue(buf[7]);
        ui->spinRollPower->setValue(buf[8]);
        ui->spinYawPower->setValue(buf[9]);

        if(buf[10] == '0')
            ui->checkRC->setChecked(false);
        else
            ui->checkRC->setChecked(true);

        if(buf[11] == '0')
            ui->checkAutopan->setChecked(false);
        else
            ui->checkAutopan->setChecked(true);

        ui->spinRollCalibration->setValue((buf[12] - 100.0f)/ 10.0f);

        return 1;
    }
    return 0;

}


int MainWindow::writeValues()
{
    if(! connected ) return 0;
    if(! configModeEnabled) return 0;

    serial->write("h");

    char buf[20];

    buf[0] = int(ui->spinPitchP->value()) * 100;
    buf[1] = int(ui->spinRollP->value()) * 100;
    buf[2] = int(ui->spinYawP->value()) * 100;

    buf[3] = int(ui->spinPitchD->value()) * 100;
    buf[4] = int(ui->spinRollD->value()) * 100;
    buf[5] = int(ui->spinYawD->value()) * 100;

    buf[6] = int(ui->spinPitchPower->value());
    buf[7] = int(ui->spinRollPower->value());
    buf[8] = int(ui->spinYawPower->value());

    if( ui->checkRC->isChecked() )
            buf[9] = '1';
    else
            buf[9] = '0';

    if( ui->checkAutopan->isChecked() )
            buf[10] = '1';
    else
            buf[10] = '0';

    buf[11] = int(ui->spinYawPower->value())*10+100;

    serial->write(buf,12);

    return 1;
}



void MainWindow::on_buttonRead_clicked()
{
    if(readValues())
        ui->labelStatus->setText("Read OK");
    else
        ui->labelStatus->setText("Can't read");
}



void MainWindow::on_buttonWrite_clicked()
{
    if(writeValues())
        ui->labelStatus->setText("Write OK");
    else
        ui->labelStatus->setText("Can't write");
}
