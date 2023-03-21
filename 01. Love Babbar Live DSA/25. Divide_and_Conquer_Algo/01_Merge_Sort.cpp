// use divide and conquer
// find mid and break array in two halves
// use recursion to sort both halves
// then merge both halves and sorted array is completed.

#include<iostream>
using namespace std;

void merge(int* arr, int s, int e) {

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int arr[e];
    int* left = new int[len1];  // creating array dynamically;
    int* right = new int[len2]; // created 2 dynamic arrays to be used for merging

    // copy values
    int k = s;
    for (int i=0; i<len1; i++) {
        left[i] = arr[k]; 
        k++;
    }

    k = mid+1;
    for(int i = 0; i<len2; i++) {
        right[i] = arr[k];
        k++;
    }

    // merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while(leftIndex < len1 && rightIndex < len2) {

        if(left[leftIndex] < right[rightIndex]) {
            arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else {
            arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }

    // copy logic for left array

    while(leftIndex < len1) {
        arr[mainArrayIndex++] = left[leftIndex++];
    }

    // copy logic for right array

    while(rightIndex < len2) {
        arr[mainArrayIndex++] = right[rightIndex++];
    }

    // delete left and right newly created array
}

void mergeSort(int* arr, int s, int e) {    // when we normally pass array, its only starting address is passed (thus passed by reference and storing a pointer here)
                // we can use int arr[] too it will work just fine but to take full array we use int* arr

    // base case
    // s == e -> single element
    // s > e -> invalid array

    if(s>=e) {
        return;
    }
    int mid = (s+e)/2; 
    // left part sort krdo recursion se
    mergeSort(arr, s, mid);

    // right part sort krdo recursion se
    mergeSort(arr, mid+1, e);

    // now merge 2 sorted arrays
    merge(arr, s, e);
}

int main() {

    int arr[] = {4,5,13,2,12};
    int n = 5;

    int s = 0;
    int e = n-1;
    mergeSort(arr, s, e);

    for (int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}