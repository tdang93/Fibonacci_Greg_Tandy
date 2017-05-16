#include "Producer.h"
#include "spinboxwindow.h"
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
        if (i == 0)
        {
            //*myQList_ptr << first;
            myQList_ptr->push_back(first); // Give this a try
        }
        else if (i == 1)
        {
            //*myQList_ptr << second;
            myQList_ptr->push_back(second);
        }
        else
        {
            int outcome = first + second;
            myQList_ptr->push_back(outcome);
            first = second;
            second = outcome;
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
    }
}
