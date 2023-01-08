#include<iostream>
using namespace std;

bool findInArray(int arr[][3], int n, int m, int target) {

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (target == arr[i][j]) {
                return true;
            }
        }
    }
    return false;
}

void colWiseSum(int arr[3][3], int row, int col) {

    int sum = 0;

    for (int i=0; i<col; i++) {
        for (int j=0; j<row; j++) {
            sum += arr[j][i];
        }
        cout << sum << " ";
        sum = 0;
    }
}

int main() {

    // creation of 2d array

    // int Beri[3][3] = {0};
    // int Beri[3][3] = {1,2,3,4,5,6,7,8,9};
    // int Beri[3][3] = {1};
    // int Beri[4][2] = {{1,2}, {2,3}, {3,4}, {4,5}};
    // int Beri[4][2] = {{1}, {2,3}, {3,4}, {4,5}};

    int newArray[3][3] = {5,1,3,4,6,9,10,9,11};

    cout << findInArray(newArray, 3, 3, 9);

    colWiseSum(newArray, 3, 3);

    // input

    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cin >> Beri[i][j];
    //     }
    // }

    // print

    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         cout << Beri[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}