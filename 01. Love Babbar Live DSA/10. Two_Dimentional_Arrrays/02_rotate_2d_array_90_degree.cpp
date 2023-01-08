#include<iostream>
using namespace std;

void transpose(int arr[3][3], int row, int col) {

    for (int i=0; i<row; i++) {
        for (int j=0; j<i; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void reverseArray(int arr[3][3], int row, int col) {
    for (int i=0; i<row; i++) {
        int start = 0;
        int end = col-1;
        while(start < end) {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
}

int main () {

    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    // to rotate 2d array by 90 degree
    // first we will transpose array and
    // then reverse the array

    transpose(arr, 3, 3);
    reverseArray(arr, 3, 3);


    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}