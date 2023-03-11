#include<iostream>
using namespace std;

void print(int arr[], int n, int i) {

    // base case
    if(i>=n) {
        return;
    }

    cout << arr[i] << " ";  // 1st case solve krdia
    // baaki recursion sambhaal lega
    print(arr, n, i+1); // or ++i will work the same too
}

int main() {

    int arr[5] = {10,20,30,40,50};
    int n = 5;

    int i = 0;  // index;
    print(arr, n, i);

    return 0;
}