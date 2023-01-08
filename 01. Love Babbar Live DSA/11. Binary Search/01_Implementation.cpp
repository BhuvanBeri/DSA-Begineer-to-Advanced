#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int n, int target) {

    int start = 0;
    int end = n-1;

    int mid = start + (end - start)/2;  // to find mid value while taking care of integer overflow problem as well.
    // or mid = start/2 + end/2;

    sort(arr, arr+n); // sorted the array

    while (start <= end) {

        if (arr[mid] == target) {
            return true;
        }
        else if (target < arr[mid]) {
            end = mid - 1;
        }
        else if (target > arr[mid]) {
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return false;
}

int main() {

    int arr[] = {4,5,8,6,17,12,9};

    if ( binarySearch(arr, 7, 5) ) {
        cout << "Element found" << endl;
    } else {
        cout << "No element found" << endl;
    }

    return 0;
}