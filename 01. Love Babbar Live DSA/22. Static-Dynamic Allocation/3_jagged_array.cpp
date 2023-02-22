// A jagged array is an array that can have a different number of columns in each of its rows.

// A dynamic array is an array that is declared in heap memory, and, unlike static arrays, we can change its size at runtime.

#include<iostream>
using namespace std;

int main() {

    int m, n;
    cout << "Enter value of m and n: " << endl;
    cin >> m >> n;

    // creating 2d array jagged of m*n

    int** arr = new int* [m]; // outer array
    for (int i=0; i<m; i++) {
        arr[i] = new int [n[i]];   // inner array created, connected to outer array.
    }

    cout << "Enter elements of 2d Array: " << endl;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Printing array: " << endl;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    // deleting array allocation
    for (int i=0; i<m; i++) {
        delete []arr[i];    // deleted inner array
    }
    delete []arr;           // deleted outer array
}