// ex: [1,2,3,7,9] --> it is sorted and then rotated array
// ie: [7,9,1,2,3] --> it is sorted but in 2 parts 7,9 and 1,2,3.
// Pivot can be either 9 or 1 here.
// if ploted on graph 7,9 are in lets say line 1, and rest 3 on line 2.
// But comparing starting point of both line it is seen that line 1 is holding big elements than line 2.
// line 2 elements are lower than line 1 starting element as well.
// if mid element is >=arr[0] index than it is seen to be in line 1 being big element.
// that time start = mid + 1 is done.
// but if mid element is < arr[0] index than it is small element and lies in line 2.
// then do end = mid. This is not done mid-1 because it will revert back to previous mid.
// this will be done until start is less than end.
// if both are now equal or s>e than the loop breaks and any (s or e) can be returned
// because the loop will break only when both reach same point as mid.

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
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

int main () {

    int arr[] = {8,10,17,1,3};
    cout << "Pivot is at index: " << pivotIndex(arr, 6) <<endl;
}