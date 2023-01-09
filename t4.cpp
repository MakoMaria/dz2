#include <iostream>
#include <cstdlib>
#include <utility>
#include <ctime>
using namespace std;

void task4()
{
    cout << "Task 4" << endl;

    srand((int)time(0));
    const int n=12;
    int a[n];

    cout << "Array:\n";
    for (int i = 0; i < n; i++)
    {
        a[i]=(rand()%100); // filling the array with random numbers
        cout << a[i] << "  ";
    }
    cout << "\n";

    int count=0;  //sorting array with bubble sort
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (a[j] < a[j+1])
            {
                swap(a[j], a[j+1]);
                count++; // count changes
            }

    if(count)
    {
        cout << "Sorted array:\n";
        for (int i = 0; i < n; i++)
            cout << a[i] << "  ";
        cout << "\n";
    }
    else cout << "array is sorted\n";

    cout << "count=" << count << "\n";

    system("pause");
}
