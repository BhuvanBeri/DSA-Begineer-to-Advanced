#include<iostream>
using namespace std;

int main() {

    int i = 5;

    // reference variable

    int &j = i;

    cout << i << endl;
    i++;
    cout << j << endl;
    j++;
    cout << i << endl;

    // dynamic array

    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    int *arr = new int[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Printing the array " << endl;
    for (int i=0; i<n; i++) {
        cout << arr[i] << endl;
    }

    delete []arr;

    return 0;
}