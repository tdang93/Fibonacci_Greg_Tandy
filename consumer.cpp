#include "Consumer.h"

Consumer::Consumer()
{

}

Consumer::~Consumer()
{

}

void Consumer::pour()
{
    QMutex_ptr->lock(); // lock the thread

    QString QS;
    while(!QList_ptr->isEmpty())
    {
        QS += QString::number(QList_ptr->takeFirst());
        QS += " ";
    }
    emit sendSignal(QS);

    QMutex_ptr->unlock(); // unlock the thread
}
