// Advantages of Pointer:
// 1. Memory Efficient --> just passing pointer in func and decreasing same space being used due to making copy of whole data instead of just 1 pointer having int type data thus 8 byte.


#include<iostream>
using namespace std;

void dummy(int arr[], int n) {
    cout << "Size of arr: ";
    cout << sizeof(arr) << endl;    // output = 4 or 8. output is this because base address holds int type data. and its size is 4 or 8 based on device.
    // because a pointer is passed.

}

void dumm(int *arr, int n) {    // passing pointer. Same as above code. Copy will be passed.

    cout << "size of arr: ";
    cout << sizeof(arr) << endl;
}

int main() {

    int arr[] = {1,2,3};
    cout << arr << endl;    // stores hexadecimal address.
    cout << &arr << endl;
    cout << &arr[0] << endl;    // 3 ways to get base address

    cout << *arr << endl;   // dereferenced base address value.
    cout << *(arr+0) << endl;   // 2 ways to get value of base address

    cout << *(arr+1) << endl;
    cout << *(arr+2) << endl;
    cout << *(arr+3) << endl;   // this is not present in arr, so random output.

    int i = 0;
    cout << i[arr] << endl; // formula => i[arr] = *(arr+i). Gives output 1 from arr[] = {1,2,3};

    int a[] = {1,2,3,4,5};
    dummy(a, 5);
    dumm(a,5);
}