// Quick Sort using Recursion

#include<iostream>
using namespace std;

int partition(int arr[], int s, int e) {

    int pivot = arr[s];
    int count = 0;

    for (int i = s+1; i<=e; i++) {

        if (arr[i] <= pivot) {
            count++;
        }
    }

    int pivotIndex = s+count;   // got right place to place pivot
    swap(arr[pivotIndex], arr[s]);

    // left and right part sambhalna hai
    int i = s, j = e;

    while (i<pivotIndex && j>pivotIndex) {
        while(arr[i] < pivot) {
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e) {

    if (s >= e) {
        return;
    }

    // partition karenge
    int p = partition(arr, s, e);

    // left part sorting
    quickSort(arr, s, p-1);

    // right side sorting
    quickSort(arr, p+1, e);
}

int main() {

    int arr[5] = {2,4,1,6,9};
    int n = 5;

    quickSort(arr, 0, n-1);

    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}