#ifndef SPINBOXWINDOW_H
#define SPINBOXWINDOW_H

#include <QMainWindow>

namespace Ui {
class SpinBoxWindow;
}

class SpinBoxWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SpinBoxWindow(QWidget *parent = 0);
    ~SpinBoxWindow();

private:
    Ui::SpinBoxWindow *ui;
};

#endif // SPINBOXWINDOW_H