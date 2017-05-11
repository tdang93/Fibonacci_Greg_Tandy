#include "Consumer.h"
#include "Producer.h"

#include <QTextEdit>
#include <QHBoxLayout>

int main(int argc, char **argv)
{
    QList<int> myQList;

    Producer producer;
    producer.myQList_ptr = &myQList;

    producer.fill();

    Consumer consumer;
    consumer.myQList_ptr = &myQList;

    return app.exec();
}
