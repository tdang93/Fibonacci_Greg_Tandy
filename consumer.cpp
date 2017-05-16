#include "Consumer.h"

Consumer::Consumer()
{

}

Consumer::~Consumer()
{

}

void Consumer::pour()
{
    QString QS;
    while(!myQList_ptr->isEmpty())
    {
        QS += myQList_ptr->takeFirst();
        QS += " ";
    }
    emit sendSignal(QS);
}
