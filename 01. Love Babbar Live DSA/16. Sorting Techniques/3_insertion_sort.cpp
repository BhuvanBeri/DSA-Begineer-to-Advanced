// TC - Worst Case = O(n^2)
// TC - Best Case  = O(n)
// SC - O(1)
// It is In Place Algorithm
// It is Stable Algorithm


#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> arr) {

    for (int i=1; i<arr.size(); i++) {   // rounds without involving 1st element at index 0
        
        int temp = arr[i];  // Step 1 = Fetch
        int j=i-1;  // Step 2 = Compare

        for ( ; j>=0; j--) {    

            if (arr[j] > temp) {    // Step 3 = shift arr[j] to arr[j+1]
                arr[j+1] = arr[j];
            }
            else {                  // if sorted already, break out of loop for this round
                break;
            }
        }
        arr[j+1] = temp;  // Step 4 = enter the copied value to its right place after all that shifting, etc.
    }
    for (int i=0; i<arr.size(); i++) {
        cout << arr[i] << " ";
    }
}

int main() {

    vector<int> arr = {10,1,7,6,14,9};

    insertionSort(arr);

    return 0;
}