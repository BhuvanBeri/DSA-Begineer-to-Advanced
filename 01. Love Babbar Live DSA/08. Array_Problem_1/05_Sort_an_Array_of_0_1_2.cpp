#include<iostream>
using namespace std;

int sortZeroOneTwo(int arr[], int size) {

    int one = 0, zero = 0, two = 0;

    for (int i=0; i<size; i++) {
        if (arr[i] == 0) {
            zero++;
        }
        else if (arr[i] == 1) {
            one++;
        }
        else {
            two++;
        }
    }
    int i=0;
    while (zero--) {
        arr[i] = 0;
        i++;
    }
    while (one--) {
        arr[i] = 1;
        i++;
    }
    while (two--) {
        arr[i] = 2;
        i++;
    }
}

int main() {

    int arr[] = {1,2,0,0,2,1,1,2,0};

    sortZeroOneTwo(arr, 9);

    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}