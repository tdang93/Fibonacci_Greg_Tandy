#include "Consumer.h"
#include "Producer.h"

#include <QTextEdit>
#include <QHBoxLayout>
#include <QApplication>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QList<int> myQList;

    Producer producer;
    producer.myQList_ptr = &myQList;
    producer.fill(10);

    Consumer consumer;
    consumer.myQList_ptr = &myQList;
    consumer.pour();

    return app.exec();
}
