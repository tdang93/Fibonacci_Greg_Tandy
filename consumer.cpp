#include "Consumer.h"

Consumer::Consumer()
{

}

Consumer::~Consumer()
{

}

void Consumer::pour()
{
    while(!myQList_ptr->isEmpty())
    {
        int send = myQList_ptr->takeFirst();
        emit sendSignal(send);
    }
}
