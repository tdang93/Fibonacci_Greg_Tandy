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
        myQList_ptr->takeFirst();
    }
}
