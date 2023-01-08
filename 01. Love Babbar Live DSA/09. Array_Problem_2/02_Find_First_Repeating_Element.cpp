#include<iostream>
#include<unordered_map>
using namespace std;

int firstRepeating(int arr[], int n) {

    // step1: store count of numbers
    unordered_map<int, int> count;
    for (int i = 0; i < n; i++) {
        int currentElement = arr[i];
        count[currentElement]++;
    }

    // step2: traverse array and find the ans
    for (int i=0; i<n; i++) {
        int currentElement = arr[i];
        if(count[currentElement] > 1) {
            return currentElement;
        }
    }
    return -1;
}

int main() {

    int arr[] = {10,5,3,4,3,5,6};
    cout << firstRepeating(arr, 7);
    return 0;
}