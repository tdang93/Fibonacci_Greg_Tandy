#ifndef CONSUMER_H
#define CONSUMER_H
#include <QThread>

class Consumer : QThread
{
    Q_OBJECT
public:
    Consumer();
    ~Consumer();
    QList<int>* myQList_ptr = NULL;
};

#endif // CONSUMER_H
