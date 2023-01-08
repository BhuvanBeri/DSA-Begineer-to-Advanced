#include<iostream>
using namespace std;

int spiralMatrix (int arr[4][4], int n) {

    int count = 0;
    int total = (n * n);

    int starting_row = 0, starting_col = 0, end_row = n-1, end_col = n-1;

    while (count < total) {

        for (int i=starting_col; i<end_col; i++) {
            cout << arr[starting_row][i] << " ";
            count++;
        }
        starting_row++;
        for (int i=starting_row; i<end_row; i++) {
            cout << arr[i][end_col] << " ";
            count++;
        }
        end_col--;
        for (int i=end_col; i>starting_col; i--) {
            cout << arr[end_row][i] << " ";
            count++;
        }
        end_row--;
        for (int i=end_row; i>starting_row; i--) {
            cout << arr[i][starting_col] << " ";
            count++;
        }
        starting_col++;
    }
}

int main() {
    int arr[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    spiralMatrix(arr, 4);
}