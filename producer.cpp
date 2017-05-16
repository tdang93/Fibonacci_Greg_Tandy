#include "Producer.h"
#include "spinboxwindow.h"
#include <QTextStream>

Producer::Producer()
{

}

Producer::~Producer()
{

}

void Producer::run()
{
    fill(times);
}

void Producer::fill(int times)
{
    QMutex_ptr->lock(); // lock the thread

    unsigned long long first = 0;
    unsigned long long second = 1;

    //number of outputs
    for (int i = 0; i < times; ++i)
    {
        if(times < 1) // keep this here for input validation. it prevents infinite looping which crashes the program!
        {
            break;
        }
        if (i == 0)
        {
            //*myQList_ptr << first;
            QList_ptr->push_back(first); // Give this a try
        }
        else if (i == 1)
        {
            //*myQList_ptr << second;
            QList_ptr->push_back(second);
        }
        else
        {
            unsigned long long outcome = first + second;
            QList_ptr->push_back(outcome);
            first = second;
            second = outcome;
        }   
    }
    QMutex_ptr->unlock(); // unlock the thread

    emit sendSignal();
}
//    //number of outputs
//    if (times == 1)
//    {
//        //*myQList_ptr << first;
//        myQList_ptr->push_back(first); // Give this a try
//    }
//    else if (times == 2)
//    {
//        //*myQList_ptr << first << second;
//        myQList_ptr->push_back(second);
//    }
//    else
//    {
//        *myQList_ptr << first << second;
//        for (int i = 0; i < times - 1; ++i)
//        {
//            int outcome = first + second;
//            myQList_ptr->push_back(outcome);
//            first = second;
//            second = outcome;
//        }
