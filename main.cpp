#include "Consumer.h"
#include "Producer.h"

#include <QTextEdit>
#include <QHBoxLayout>
#include <QApplication>

int main(int argc, char **argv)
{
//    QList<int> myQList;
    QApplication app(argc, argv);

    Producer producer;
//    producer.myQList_ptr = &myQList;

//    producer.fill();

//    Consumer consumer;
//    consumer.myQList_ptr = &myQList;
    producer.fill(1);

    return app.exec();
}
