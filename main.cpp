#include "Consumer.h"
#include "Producer.h"
#include "spinboxwindow.h"
#include "textedit.h"

#include <QTextEdit>
#include <QHBoxLayout>
#include <QApplication>
#include <QMutex>

int main(int argc, char **argv)
{
    QMutex mutex;

    QList<int> myQList;
    QApplication app(argc, argv);

    SpinBoxWindow spinboxWindow;
    Producer producer;
    Consumer consumer;
    TextEdit textEdit;

    spinboxWindow.producer_ptr = &producer;
    spinboxWindow.textEdit_ptr = &textEdit;

    producer.QList_ptr = &myQList;
    producer.QMutex_ptr = &mutex;

    consumer.QList_ptr = &myQList;
    consumer.QMutex_ptr = &mutex;

    spinboxWindow.show();

    QObject::connect(&producer, SIGNAL(sendSignal()), &consumer, SLOT(pour()));
    QObject::connect(&consumer, SIGNAL(sendSignal(QString)), &textEdit, SLOT(SetText(QString)));


 //   consumer.pour();

    return app.exec();
}
