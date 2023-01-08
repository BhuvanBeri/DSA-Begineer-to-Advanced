#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int target) {

    int start = 0;
    int end = n-1;
    int mid = start + (end-start) / 2;
    int ans = -1;

    while(start <= end) {

        int middleElement = arr[mid];

        if (middleElement == target) {
            ans = mid;
            end = mid - 1; // movind to left to check in case same number is still present.
        }
        else if (target < middleElement) {
            end = mid - 1;
        }
        else if (target > middleElement) {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int target) {

    int start = 0;
    int end = n-1;
    int mid = start + (end-start) / 2;
    int ans = -1;

    while(start <= end) {

        int middleElement = arr[mid];

        if (middleElement == target) {
            ans = mid;
            start = mid + 1; // movind to right to check in case same number is still present.
        }
        else if (target < middleElement) {
            end = mid - 1;
        }
        else if (target > middleElement) {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main() {

    int arr[] = {3,4,5,5,5,5,8,12};
    cout << "First occurence is at index: " << firstOcc(arr, 8, 5) << endl;
    cout << "Last occurence is at index: " << lastOcc(arr, 8, 5);
}