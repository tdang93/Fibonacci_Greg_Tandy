#include "Producer.h"
#include "spinboxwindow.h"
#include <QTextStream>

Producer::Producer()
{

}

Producer::~Producer()
{

}

Producer::run()
{

}

void Producer::fill(int times)
{
    QMutex_ptr->lock(); // lock the thread

    int first = 0;
    int second = 1;

    //number of outputs
    for (int i = 0; i < times; ++i)
    {
        if(times < 1)
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
            int outcome = first + second;
            QList_ptr->push_back(outcome);
            first = second;
            second = outcome;
        }   
    }
    emit sendSignal();

    QMutex_ptr->unlock(); // unlock the thread
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
