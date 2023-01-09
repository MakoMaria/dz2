#include <iostream>
#include <ctime>
#include "t6.h"
using namespace std;

void task6()
{
    cout << "Task 6" << endl;

    srand((int)time(0));
    const int lenght=14, middle = lenght / 2;
    int s[lenght];
    int moves = 0;

    cout << "Array:\n";
    for (int *i = s; i != s + lenght; i++) //!= -not equal
    {
        *i=(rand()%100); // filling the array with random numbers
        cout << *i << "  "; // *i - link
        // output original array
    }
    cout << "\n";


    for (int *i = s; i != s + middle; i++)
    {
        int tmp = *i;
        *i = *(i + middle);
        *(i + middle) = tmp;
        moves += 3; //count changes
    }
    cout  << endl;
    for (int *i = s; i != s + lenght; i++)
    {
        cout << *i << "  "; //output new array
    }
    cout << endl << moves << endl;
}
