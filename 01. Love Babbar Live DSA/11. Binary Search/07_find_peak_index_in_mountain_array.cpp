// brute force --> to use linear search and find max value.

// for binary search approach, it mush be monotonic in nature i.e. either inc or dec order.
// here we get 2 different parts 1 is inc, other is dec order forming a mountain if plotted on graph.
// wher peak is always highest than left side and right side.
// binary search --> plot in graph form
// ex: [0,10,5,2] --> 0<10>5>2 that is peak in 10. in graph too 10 will be at top.
// ie if mid = 10 and greater than arr[i+1] than e = mid, else if mid < i+1 than move it up, i.e. s = mid+1;
// ex: [3,4,5,1] --> here peak is 5

#include<iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int n) {

    int s = 0;
    int e = n-1;

    int mid = s+(e-s)/2;

    while (s<e) {

        if (arr[mid] < arr[mid+1]) {
            s = mid+1;
        }
        else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return e;
}

int main() {

    int arr[] = {0,10,5,2};
    int arr1[] = {3,4,5,1};
    cout << peakIndexInMountainArray(arr,4) << endl;
    cout << peakIndexInMountainArray(arr1,4) << endl;
}