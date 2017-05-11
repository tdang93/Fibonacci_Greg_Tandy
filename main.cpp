#include "Consumer.h"
#include "Producer.h"

int main(int argc, char **argv)
{
    QList<int> myQList;

    Producer producer;
    producer.myQList_ptr = &myQList;

    Consumer consumer;
    consumer.myQList_ptr = &myQList;

    return app.exec();
}
