#include<iostream>
using namespace std;

int partition(int arr[], int s, int e) {
    // step 1: choose pivotElement (it can be startIndex, endIndex or random selected too)
    int pivotIndex = s; // taking starting index element as pivot element
    int pivotElement = arr[s];

    // step 2: find right position of pivot element and place it there
    int count = 0;
    for(int i=s+1; i<=e; i++) {
        if(arr[i] <= pivotElement) {
            count++;
        }
    }

    // when we come out of loop, we will have right position Index of pivot element
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]); // to place pivotElement to its real pivot location i.e. left to it is having
    // elements lower than pivotElement and right to it having elements larger than it.
    pivotIndex = rightIndex;    // updating it.

    // Step 3: left side smaller no and right side larger no.
    int i = s;
    int j = e;

    while(i<pivotIndex && j>pivotIndex) {
        while(arr[i] <= pivotElement) {
            i++;
        }
        while(arr[j] > pivotElement) {
            j--;
        }

        // 2 cases are possible here->
        // A -> found elements to swap because they are not like we wanted in line 20
        // B -> No need to swap as it is already like we wanted i.e. line 20

        if(i<pivotIndex && j>pivotIndex) {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e) {

    if(s>=e) {  // (base case)
        return;
    }

    // partition logic, return pivotIndex
    int p = partition(arr, s, e);

    // recursive call
    // pivot element -> left
    quickSort(arr, s, p-1);

    // pivot element -> right
    quickSort(arr, p+1, e);

}

int main() {

    int arr[] = {8,1,2,3,20,50,30};
    int n = 7;

    int s = 0;
    int e = n-1;
    quickSort(arr, s, e);   // will also work for duplicate cases

    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}