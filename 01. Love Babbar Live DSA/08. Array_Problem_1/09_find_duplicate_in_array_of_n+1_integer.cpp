#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findDuplicate(int arr[], int n) {

    sort (arr, arr+n);

    for (int i=0; i<n; i++) {
        if (arr[i] == arr[i+1]) {
            cout << arr[i] << endl;
        }
    }
}

int main() {

    int arr[] = {1,2,4,6,3,4};

    findDuplicate(arr, 6);

    return 0;
}