#include <iostream>
#include <iomanip>
using namespace std;

void sum(int** arr, int n, int m, int& min_index, int& max_index);
//int& - data type is a reference to int

void task12() {
    cout << "Task 12" << endl;
    int n, m;
    cout << "Enter boarders of matrix" << endl;
    cin >> n >> m;
    int** arr = new int* [n]; // allocate memory

    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = rand() % 100; // fill matrix with random numbers
            cout << setw(3) << arr[i][j] ;
        }

        cout << endl;
    }

    int min_index, max_index;
    sum(arr, n, m, min_index, max_index);
    cout << "min line:\n";

    for (int j = 0; j < m; j++)
        cout << arr[min_index][j] << "\t";  //output a string with the minimum\maximum sum of elements

    cout << endl;
    cout << "max line:\n";

    for (int j = 0; j < m; j++)
        cout << arr[max_index][j] << "\t";

    cout << endl;

    for (int i = 0; i < n; i++) // free memory
        delete[] arr[i];

    delete[] arr;
}

void sum(int** arr, int n, int m, int& min_index, int& max_index) {
    int max, min;
    max = INT_MIN;
    min = INT_MAX;// Assigning highest value
    max_index = min_index = -1;

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = 0; j < m; j++) {
            sum += arr[i][j]; // count each raw summa
        }

        cout << i + 1 << " raw summa = " << sum << endl;

        if (sum > max) { //define a string with the minimum\maximum sum of elements
            max = sum;
            max_index = i;
        }

        if (sum < min) {
            min = sum;
            min_index = i;
        }
    }
}
