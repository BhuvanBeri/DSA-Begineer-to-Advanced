#include<iostream>
using namespace std;

void linearSearch(int arr[], int n, int key) {

    for (int i = 0; i < n; i++) {

        if (key == arr[i]) {
            cout << "Element found at index " << i << endl;
            return;
        }
    }
    cout << "Element not found" << endl;
}

int main() {

    int arr[] = {5, 7, 1, 4, 9};

    linearSearch(arr, 5, 7);

    return 0;
}