#include<iostream>
using namespace std;

void findUnion(int arr1[], int arr2[], int size1, int size2) {

    int i = 0, j = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            cout << arr1[i] << " ";
            i++;
        }
        else if (arr2[j] < arr1[i]) {
            cout << arr2[j] << " ";
            j++;
        }
        else {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
    // print remaining elements of lengthy array

    while (i<size1) {
        cout << arr1[i] << " ";
        i++;
    }
    while (j<size2) {
        cout << arr2[j] << " ";
        j++;
    }
}

void findIntersection(int arr1[], int arr2[], int size1, int size2) {

    int i=0, j=0;

    while (i<size1 && j<size2) {
        if (arr1[i]==arr2[j]) {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        }
        else {
            j++;
        }
    }
}

int main() {

    int arr1[] = {2, 4, 6, 7, 9};
    int arr2[] = {3, 4, 6, 8};

    findUnion(arr1, arr2, 5, 4);
    cout << endl;
    findIntersection(arr1, arr2, 5, 4);

    return 0; 
    
}