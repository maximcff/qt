#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QThread>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_sliderOnOff_valueChanged(int value);

    void on_buttonRead_clicked();

    void on_sliderOnOff_2_valueChanged(int value);

    void on_buttonWrite_clicked();

private:
    Ui::MainWindow *ui;
    QSerialPort *serial;
    bool connected;
    bool configModeEnabled;


    int doConnect();
    void doDisconnect();
    int readValues();
    int writeValues();
    void configOn();
    void configOff();
};

#endif // MAINWINDOW_H
