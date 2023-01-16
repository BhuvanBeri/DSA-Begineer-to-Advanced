// TC - Worst Case = O(n^2)
// TC - Best Case  = O(n)
// SC - O(1)
// It is In Place Algorithm
// It is Stable Algorithm


#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {

    for (int i=1; i<n; i++) {   // rounds
        
        int temp = arr[i];
        int j=i-1;
        for ( ; j>=0; j--) {    // shift

            if (arr[j] > temp) {
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j] = temp;
    }
}

int main() {

    int arr[] = {10,1,7,4,8,2};
    int n = 6;

    insertionSort(arr, n);

    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}