#include <iostream>
#include "t2.h"
using namespace std;


void swap(int *ptra, int *ptrb){
    int change = *ptra;
    *ptra = *ptrb;
    *ptrb = change;
}
void task2() {
    cout << "Task 2" << endl;

    int a = 0;
    cout << "Put in a" << endl;
    cin >> a;
    int b = 0;
    cout << "Put in b" << endl;
    cin >> b;
    int *ptra = &a;
    int *ptrb = &b;
    swap(ptra, ptrb);

    cout << a << endl;
    cout << b << endl;
}