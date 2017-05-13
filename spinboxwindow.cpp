#include "spinboxwindow.h"
#include "ui_spinboxwindow.h"

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
