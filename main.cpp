#include "Consumer.h"
#include "Producer.h"
#include "spinboxwindow.h"
#include "textedit.h"

#include <QTextEdit>
#include <QHBoxLayout>
#include <QApplication>

int main(int argc, char **argv)
{
    QList<int> myQList;
    QApplication app(argc, argv);

    SpinBoxWindow spinboxWindow;
    Producer producer;
    Consumer consumer;
    TextEdit textEdit;

    spinboxWindow.producer_ptr = &producer;
    spinboxWindow.textEdit_ptr = &textEdit;

    producer.myQList_ptr = &myQList;

    consumer.myQList_ptr = &myQList;

    spinboxWindow.show();

    QObject::connect(&producer, SIGNAL(sendSignal()), &consumer, SLOT(pour()));
    QObject::connect(&consumer, SIGNAL(sendSignal(QString)), &textEdit, SLOT(SetText(QString)));


 //   consumer.pour();

    return app.exec();
}
