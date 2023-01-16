// TC-O(n^2) for both best, worst case scenarios
// SC-O(1)
// Overall selection sort is the worst algorithm for sorting

// stable algo is that algo in which order of elements is preserved
// In case of Selection Sort --> Not Stable Algorithm

#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {

    for (int i=0; i<n; i++) {
        int minIndex = i;

        for (int j=i+1; j<n; j++) {
            if (arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {

    int arr[] = {7,5,4,2};
    int n = 4;

    selectionSort(arr, 4);

    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}