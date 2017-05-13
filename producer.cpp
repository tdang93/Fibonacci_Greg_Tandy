#include "Producer.h"

Producer::Producer()
{

}

Producer::~Producer()
{

}

void Producer::fill(int times)
{
    int first = 0;
    int second = 1;

    //number of outputs
    for (int i = 0; i < times; ++i)
    {
        if (times == 1)
        {
            myQList_ptr->push_front(first);
        }
        else if (times == 2)
        {
            myQList_ptr->push_front(second);
        }
        else
        {
            int outcome = first + second;
            myQList_ptr->push_front(outcome);
            first = second;
            second = outcome;
        }
    }
}
