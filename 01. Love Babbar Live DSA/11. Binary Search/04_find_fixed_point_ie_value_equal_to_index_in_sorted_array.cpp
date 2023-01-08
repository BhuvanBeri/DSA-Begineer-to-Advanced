// fixed point => value = index

#include<iostream>
using namespace std;

int fixedPoint(int arr[], int n) {

    int start = 0;
    int end = n-1;

    int mid = start + (end - start)/2;

    while (start <= end) {

        if (arr[mid] == mid) {
            return mid;
        }
        else if (mid < arr[mid]) {
            end = mid -1;
        }
        else if (mid > arr[mid]) {
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main() {

    int arr[] = {-10, -5, 0, 3, 7};
    cout << "Fixed point is at index: " << fixedPoint(arr, 5) << endl;
    return 0;
}