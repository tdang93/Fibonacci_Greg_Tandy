#include "spinboxwindow.h"
#include "ui_spinboxwindow.h"
#include "mainwindow.h"
#include "producer.h"

SpinBoxWindow::SpinBoxWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SpinBoxWindow)
{
    ui->setupUi(this);
}

SpinBoxWindow::~SpinBoxWindow()
{
    delete ui;
}

void SpinBoxWindow::on_buttonBox_accepted()
{
    MainWindow mainWindow;
    mainWindow.show();
    close();
    Producer producer;
    producer.fill(times);
}

void SpinBoxWindow::on_buttonBox_rejected()
{
    close();
}

void SpinBoxWindow::on_spinBox_valueChanged(int spinTimes)
{
    int times = spinTimes;
}
