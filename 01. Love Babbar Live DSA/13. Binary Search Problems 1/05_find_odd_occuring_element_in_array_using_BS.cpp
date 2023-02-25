// here all elements occur even no of times except 1.
// all repeating numbers come in pair.
// pairs are not adjacent (that is no 2 same pairs are present side by side)
// there cannot be more than 2 consecutive occurrence of any element.
// find element that appears odd no of times.

// XOR Approach is one way but time complexity problem is there O(n)
// Thus binary search is better.

// this is 3rd type of binary search questions which focus on index.

// Observations:-
// Here we can see that in a pair, first element exist at even index.
// and second element of same pair exists at odd index.
// it is observed that ans is always on even index.

#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> arr) {

    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;

    while(s<=e) {

        if (s==e) {
            // single element
            return s;
        }

        // 2 cases -> mid = even or mid = odd
        if(mid%2==0) {
            if(arr[mid] == arr[mid+1]) {
                s = mid+2;
            }
            else {
                e = mid;
            }
        }
        else {
            if (arr[mid] == arr[mid-1]) {
                s = mid+1;
            }
            else {
                e = mid-1;
            }
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main() {

    vector<int> arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
    int ans = solve(arr);
    cout << "Ans is at index: " << ans << endl;
    cout << "Ans is: " << arr[ans] << endl;
    return 0;
}