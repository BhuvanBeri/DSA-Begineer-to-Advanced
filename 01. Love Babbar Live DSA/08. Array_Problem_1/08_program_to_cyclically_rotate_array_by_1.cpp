#include<iostream>
using namespace std;

void rotateArray(int arr[], int n) {

    int x = arr[n-1];   // storing arrays last value in x
    
    for (int i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = x;
}

int main() {

    int arr[] = {1,2,3,4,5};

    rotateArray(arr, 5);

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}