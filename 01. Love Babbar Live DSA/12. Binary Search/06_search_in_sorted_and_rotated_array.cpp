// ex: [7,9,1,2,3] is sorted and rotated array. simply find if given number is present in array or not.
// thus use concept of pivot here to search the given target value
// if arr[pivot] <= target <= arr[n-1] == use B.S. in this line else use B.S. in line 1

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int pivotIndex(int arr[], int n) {
    
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        }
        else {
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
    // or return e; both are at pivot point so return any, no problem.
}

bool binarySearch(int arr[], int s, int e, int target) {

    int start = s;
    int end = e;

    int mid = start + (end - start)/2;  // to find mid value while taking care of integer overflow problem as well.
    // or mid = start/2 + end/2;

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

int findPositionOfTarget(int arr[], int n, int target) {

    int pivot = pivotIndex(arr, n);
    // B.S. on second line
    if (target >= arr[pivot] && target <= arr[n-1]) {
        return binarySearch(arr, pivot, n-1, target);
    }
    // B.S. on first line
    else {
        return binarySearch(arr, 0, pivot-1, target);
    }
}

int main () {

    int arr[] = {7,9,1,2,3};
    cout << "Position of target 9 is Index: " << findPositionOfTarget(arr, 5, 9);
}