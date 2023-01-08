#include<iostream>
using namespace std;

void swapAlternates(int arr[], int size) {

    for (int i=0; i<size; i=i+2) {
        if (i+1 < size) {
            swap (arr[i], arr[i+1]);
        }
    }
    
}

int main() {

    int arr[] = {2,7,5,6,9,8};
    swapAlternates(arr, 6);
    for (int i=0; i<6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}