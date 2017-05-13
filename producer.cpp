#include "Producer.h"
#include <QTextStream>

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
            *myQList_ptr << first;
        }
        else if (times == 2)
        {
            *myQList_ptr << first << second;
        }
        else
        {
            *myQList_ptr << first << second;
            int outcome = first + second;
            *myQList_ptr << outcome;
            while (!myQList_ptr->isEmpty())
            first = second;
            second = outcome;
        }
    }
}
