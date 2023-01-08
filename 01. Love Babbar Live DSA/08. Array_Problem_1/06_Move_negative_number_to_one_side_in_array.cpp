#include<iostream>
using namespace std;

void moveNegative(int arr[], int n) {

    int i=0;
    for (int j=0; j<n; j++) {
        if (arr[j] < 0) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
}

int main() {

    int arr[] = {4, 2, -1, 5, -2, 3};
    
    moveNegative(arr, 6);

    for (int i=0; i<6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}   