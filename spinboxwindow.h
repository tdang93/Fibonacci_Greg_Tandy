#ifndef SPINBOXWINDOW_H
#define SPINBOXWINDOW_H

#include <QMainWindow>
#include "mainwindow.h"
#include "producer.h"

namespace Ui {
class SpinBoxWindow;
}

class SpinBoxWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SpinBoxWindow(QWidget *parent = 0);
    ~SpinBoxWindow();
    int times;
    MainWindow* mainWindow_ptr = NULL;
    Producer producer;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_spinBox_valueChanged(int spinTimes);

private:
    Ui::SpinBoxWindow *ui;
};

#endif // SPINBOXWINDOW_H