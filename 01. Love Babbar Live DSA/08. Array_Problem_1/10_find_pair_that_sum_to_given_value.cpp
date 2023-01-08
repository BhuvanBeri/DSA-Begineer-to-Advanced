#include<iostream>
using namespace std;

void findPair(int arr[], int n, int target) {

    bool pairfound = false;

    for (int i = 0; i < n-1; i++) { // consider every element except last
        for (int j=i+1; j<n; j++) { // consider ith element till last element
            if (arr[i]+arr[j] == target) {
                cout << "Pair found " << arr[i] << " " << arr[j] << endl;
                // return;
                pairfound = true;
            }
        }
    }
    if (pairfound == false) {
        cout << "Pair not found " << endl;
    }
    return;
}

int main() {

    int arr[] = {1, 4, 7, 9, 2};
    
    findPair(arr, 5, 11);
    return 0;
}