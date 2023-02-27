// TC-O(n^2) for both best, worst case scenarios
// SC-O(1)
// Overall selection sort is the worst algorithm for sorting

// stable algo is that algo in which order of elements is preserved
// In case of Selection Sort --> Not Stable Algorithm

#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {

    for (int i=0; i<n-1; i++) { // one loop of i from 0 to n-1, cause last one is unnecessary repeat
        int minIndex = i;       // assigning minIndex initially to value at index i

        for (int j=i+1; j<n; j++) { // second loop of j will be from i+1 index to n
            if (arr[minIndex] > arr[j]) {   // if in j loop, minIndex finds new min value it will be assigned
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);    // finally for that outer loop, if minIndex is changed, it will swap the value with loop ith index.
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