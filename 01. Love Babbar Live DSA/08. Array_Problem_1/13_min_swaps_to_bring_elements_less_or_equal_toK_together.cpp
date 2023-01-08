// Find minimum number of swaps required to bring the elements
// less than equal to 'k' together

#include<iostream>
using namespace std;

int minSwaps(int arr[], int n) {

    int i=0, j=n-1, count=0;

    while (i<j) {

        if (arr[i] <= 3) {
            i++;
        } else if (arr[j] > 3) {
            j--;
        } else if (arr[i] > 3 && arr[j] <= 3) {
            swap(arr[i], arr[j]);
            count++;
        }
    }
    return count;
}

int minSwapsUsingSlidingWindowProblem(int arr[], int n, int k) {

    // find window size --> count of numbers <= k
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] <= k) 
            count++;
    }

    // create first window
    int bad = 0;
    for (int i=0; i<count; i++) {
        if(arr[i] > k) 
            bad++;
    }

    int ans = bad;
    // check for remaining windows
    for (int i=0, j=count; j<n; i++, j++) { // i = element to remove, j = element to add

        // check old element
        if (arr[i] > k) {
            bad--;
        }
        if (arr[j] > k) {
            bad++;
        }
        ans = min(ans, bad); // to find minimum of all bads calculated in different sliding windows.
    }
    return ans;
}

int main() {

    int arr[] = {1,2,5,7,3,1};
    cout << "Minimum number of swaps are: " << minSwaps(arr, 6) << endl;
    cout << "After swaps, the newly formed arrays is: ";
    for (int i=0; i<6; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}