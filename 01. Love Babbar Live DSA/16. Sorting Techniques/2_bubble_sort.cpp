// TC - Worst Case = O(N^2)
// TC - Best Case  = O(N)
// SC - O(1)
// It is Stable Algorithm
// It is better than selection sort in best case scenario
// It is In-Place Algorithm. (In Place Algo is that which does not use extra space to sort the array).

#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {

    bool swapped = false;

    for (int i=0; i<n-1; i++) {     // for rounds

        for (int j=0; j<n-i-1; j++) {   // for comparing

            if (arr[j] > arr[j+1]) {

                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false) { // this is done so that in best case scenario
            break;              // code becomes of time complexity O(n); Else normal TC = O(n^2)
        }
    }
    return;
}

int main() {

    int arr[] = {-2,45,0,11,-9};
    int n = 5;

    bubbleSort(arr, n);

    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}