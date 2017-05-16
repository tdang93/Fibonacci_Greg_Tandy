#include "spinboxwindow.h"
#include "ui_spinboxwindow.h"
#include "textedit.h"
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
    textEdit_ptr->clear();

    //producer_ptr->fill(times);
    producer_ptr->times = this->times;
    producer_ptr->run();

    textEdit_ptr->show();
}

void SpinBoxWindow::on_buttonBox_rejected()
{
    close();
}

void SpinBoxWindow::on_spinBox_valueChanged(int spinTimes)
{
    times = spinTimes;
}
