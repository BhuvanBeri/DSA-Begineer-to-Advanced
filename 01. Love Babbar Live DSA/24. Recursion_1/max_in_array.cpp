#include<iostream>
#include<limits.h>
using namespace std;
                                    // use of reference variable.
void findMax(int arr[], int n, int i, int& maxi) {  // referencing this maxi with original maxi of main, to avoid copying only

    // base case
    if(i>=n) {
        return;
    }

    if(arr[i] > maxi) {
        maxi = arr[i];  // 1 case solved
    }

    // baaki recursion sambhaal lega
    findMax(arr, n, i+1, maxi);
}

int main() {

    int arr[] = {10,30,21,44,32,17,19,66};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxi = INT_MIN;
    int i = 0;

    findMax(arr, n, i, maxi);

    cout << "Maximum number in array is: " << maxi << endl;

    return 0;
}