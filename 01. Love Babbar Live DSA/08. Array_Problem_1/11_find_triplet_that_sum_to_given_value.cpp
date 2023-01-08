#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
    // using two pointer approach
    // i.e. first sort the array. then fix one loop and inside it, use to pointing variables at different ends of array.
    // then add 3 values (1 of loop, other 2 of variables pointing to different values in the array)
    // if equal to target value = print.
    // if total of 3 < target value = move left side (l++)
    // if total of 3 > target value = move right side (r--)

void findtriplet(int arr[], int n, int target) {

    int l, r;
    bool foundtriplet = false;

    sort (arr, arr+n);

    for (int i=1; i<n-2; i++) {

        l = i+1; // next to i of loop part of array
        r = n-1; // last element of array

        while (l < r) {
            if (arr[i] + arr[l] + arr[r] == target) {
                cout << "Triplet is " << arr[i] << " " << arr[l] << " " << arr[r] << endl;
                foundtriplet = true;
                return;
            }
            else if (arr[i] + arr[l] + arr[r] < target) {
                l++;
            }
            else {  // arr[i] + arr[l] + arr[r] > target
                r--;
            }
        }
    }
    if (foundtriplet == false) {
        cout << "Triplet not found" << endl;
    }
}

int main() {

    int arr[] = {1,4,45,6,10,8};
    int sum = 22;
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    findtriplet(arr, arr_size, sum);

    return 0;
}