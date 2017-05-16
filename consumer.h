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

//    void run();
    QMutex* QMutex_ptr = NULL;
    QList<unsigned long long>* QList_ptr = NULL;
    int send;

    void pour();
signals:
    void sendSignal(QString);

public slots:
//    void pour();
    void run();
};

#endif // CONSUMER_H
