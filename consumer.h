#ifndef CONSUMER_H
#define CONSUMER_H
#include <QThread>

class Consumer : public QThread
{
    Q_OBJECT
public:
    Consumer();
    ~Consumer();
    QList<int>* myQList_ptr = NULL;
    void pour();
    int send;
signals:
    void sendSignal(int);
};

#endif // CONSUMER_H
