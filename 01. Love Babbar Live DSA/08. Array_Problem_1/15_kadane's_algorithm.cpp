// used to find Largest Sum Contiguous Subarray

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int LargestSumContiguous(int arr[], int size) {

    int sum = 0;
    int Max_Value = INT_MIN;  // to get largest sum contiguous subarray

    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
        Max_Value = max(Max_Value, sum);
        if (sum < 0) {
            sum = 0;
        }
    }
    return Max_Value;
}

int main() {

    int arr[] = {-2,-3,4,-1,-2,1,5,-3};

    cout << "Largest sum of contiguous subarray is: " << LargestSumContiguous(arr, 8) << endl;

    return 0;
}