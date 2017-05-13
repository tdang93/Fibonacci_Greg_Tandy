#include "Consumer.h"
#include "Producer.h"

#include <QApplication>
#include <QTextEdit>
#include <QHBoxLayout>

int main(int argc, char **argv)
{
    QList<int> myQList;

    Producer producer;
    producer.myQList_ptr = &myQList;

    producer.fill(10);

    Consumer consumer;
    consumer.myQList_ptr = &myQList;

    return app.exec();
}
