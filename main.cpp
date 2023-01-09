#include "iostream"
#include "t2.h"
#include "t4.h"
#include "t6.h"
#include "t10.h"
#include "t12.h"
using namespace std;


int main() {

    int n;
    cout << "Enter the number of the task (2, 4, 6, 10 or 12: " << endl;
    cin >> n;
    if (n == 2)
    {
        task2();
    }
    else if (n == 4)
    {
        task4();
    }
    else if (n == 6)
    {
        task6();
    }
    else if (n == 10)
    {
        task10();
    }
    else if (n == 12)
    {
        task12();
    }
    return 0;
}



