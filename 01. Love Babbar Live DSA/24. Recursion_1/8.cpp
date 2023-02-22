// Merge Sort using Recursion

#include<iostream>
using namespace std;

void merge(int *arr, int s, int e) {

    int mid = s+ (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int k = s;
    for (int i = 0; i<len1; i++) {
        first[i] = arr[k++];
    }

    int k = mid+1;
    for (int i=0; i<len2; i++) {
        second[i] = arr[k++];       // storing second part of array
    }

    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = 5;

    while(index1 < len1 && index2 < len2) {

        if(first[index] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }
    while (index2 < len2) {
        arr[mainArrayIndex++] = second[index2++];
    }
}

void mergeSort(int *arr, int s, int e) {

    if (s >= e) {
        return;
    }

    int mid = s+(e-s)/2;

    mergeSort(arr, s, mid); // leftpart sorted

    mergeSort(arr, mid+1, e);   // rightpart sorted

    merge(arr, s, e);   // merge
}

int main() {

    int arr[5] = {2,5,1,6,9};
    int n = 5;

    mergerSort(arr, 0, n-1);

    for (int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}