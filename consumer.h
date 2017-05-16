#ifndef CONSUMER_H
#define CONSUMER_H
#include <QThread>
#include <QMutex>

class Consumer : public QThread
{
    Q_OBJECT
public:
    Consumer();
    ~Consumer();

    void run();
    QMutex* QMutex_ptr = NULL;
    QList<int>* QList_ptr = NULL;
    int send;

signals:
    void sendSignal(QString);

public slots:
    void pour();
};

#endif // CONSUMER_H
