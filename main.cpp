#include "Consumer.h"
#include "Producer.h"
#include "spinboxwindow.h"
#include "mainwindow.h"

#include <QTextEdit>
#include <QHBoxLayout>
#include <QApplication>

int main(int argc, char **argv)
{
//    QList<int> myQList;
    QApplication app(argc, argv);

    Producer producer;
    MainWindow mainWindow;
    SpinBoxWindow spinboxWindow;
//    producer.myQList_ptr = &myQList;

//    producer.fill();

//    Consumer consumer;
//    consumer.myQList_ptr = &myQList;
    spinboxWindow.show();

    return app.exec();
}
