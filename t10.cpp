#include <iostream>
#include <ctime>
#include "t10.h"
using namespace std;

void task10() {
    cout << "Task 10" << endl;

    srand((int)time(0));
    size_t n, m;
    cout <<"Size of array 1 " << endl;
    cin >> n;
    cout <<"Size of array 2 "<< endl;
    cin >> m;

    double*a = new double[n], max_a=0;
    double*b = new double[m], max_b=0;

    for (size_t i = 0; i < n; i++) // fill array a with random elements
    {
        a[i]=rand()%11 + 1;
        cout <<a[i]<<" ";
        if (i==0 || a[i]>max_a) max_a=a[i]; //choose the biggest
    }
    cout <<"  "<<"max element = "<<max_a<<"\n";

    for (size_t i = 0; i < m; i++) //fill array b with random elements
    {
        b[i]=rand()%21 + 1;
        cout <<b[i]<<" ";
        if (i==0 || b[i]>max_b) max_b=b[i]; //choose the biggest
    }
    cout <<"  "<<"max element = "<< max_b;

    cout <<"\nNew arrays\n";
    for (size_t i = 0; i < n; i++)
    {
        if (a[i]==max_a) a[i]=max_b; //change elements between arrays
        cout << a[i] <<" ";
    }
    cout <<"\n";

    for (size_t i = 0; i < m; i++)
    {
        if (b[i]==max_b) b[i]=max_a;
        cout << b[i] <<" ";
    }
    cout <<"\n";

    delete[]b;
    delete[]a;
    system("pause");

}
