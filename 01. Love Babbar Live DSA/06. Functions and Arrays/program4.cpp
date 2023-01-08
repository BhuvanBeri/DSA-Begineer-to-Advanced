#include<iostream>
using namespace std;

void printarray(int arr[], int size) {

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Array uses pass by reference (address of original array is passed to array in function and changes affects original array the same way).
// Functions use pass by value (copies are created, no effect on original values).

int main() {

    int arr[5] = {1,2,3,4,5}; 
    printarray(arr, 5);
    return 0;
}