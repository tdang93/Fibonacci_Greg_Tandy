#ifndef PRODUCER_H
#define PRODUCER_H
#include <QThread>

class Producer : QThread
{
    Q_OBJECT
public:
    Producer();
    ~Producer();
    QList* QList_ptr = NULL;
};

#endif // PRODUCER_H
