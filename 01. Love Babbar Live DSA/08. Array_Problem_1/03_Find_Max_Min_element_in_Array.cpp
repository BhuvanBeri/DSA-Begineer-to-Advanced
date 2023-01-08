#include<iostream>
#include<limits.h>
using namespace std;

int getMaxFromArray(int arr[], int size) {

    int ans = INT_MIN;
    for (int i = 0; i < size; i++) {
        ans = max(ans, arr[i]);
    }
    return ans;
}

int getMinFromArray(int arr[], int size) {

    int ans = INT_MAX;
    for (int i = 0; i < size; i++) {
        ans = min(ans, arr[i]);
    }
    return ans;
}

int main() {

    int arr[] = {3, 5, 2, 8, 9, 4};
    cout << "Max element in array is " << getMaxFromArray(arr, 6) << endl;
    cout << "Min element in array is " << getMinFromArray(arr, 6) << endl;
    return 0;
}