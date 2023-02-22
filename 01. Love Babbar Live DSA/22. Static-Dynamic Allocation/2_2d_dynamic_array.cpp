#include<iostream>
using namespace std;

int main() {    // 2*4 size 2d array dynamically

    int n;
    int m;
    cout << "Enter the value of m and n: " << endl;
    cin >> m >> n;

    // creating 2d array of m*n
    int** arr = new int* [m];

    for (int i=0; i<m; i++) {
        arr[i] = new int [n];
    }

    // input
    cout << "Enter input: " << endl;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }
    //print
    cout << "Printing array: " << endl;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }

    // deleting
    for (int i=0; i<m; i++) {
        delete []arr[i];    // deleted inner array
    }
    delete []arr;   // deleted outer array too
}