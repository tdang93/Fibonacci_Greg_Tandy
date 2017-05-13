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
    QTextStream cin(stdin);
    cin >> times;
    QTextStream cout(stdout);


    //number of outputs
    for (int i = 0; i < times; ++i)
    {
        if (times == 1)
        {
            *myQList_ptr << first;
            while (!*myQList_ptr->isEmpty())
            {
                cout << *myQList_ptr->takeFirst();
            }
        }
        else if (times == 2)
        {
            *myQList_ptr << first << second;
            cout << *myQList_ptr;
        }
        else
        {
            *myQList_ptr << first << second;
            int outcome = first + second;
            *myQList_ptr << outcome;
            cout << *myQList_ptr;
            first = second;
            second = outcome;
        }
    }
}
