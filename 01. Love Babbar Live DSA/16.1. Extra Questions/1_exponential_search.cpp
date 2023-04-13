// it is of tc O(n). Goal is to optimise it using binary search and that too on a specific subarray of given array and not all of it.
// to make it even better than O(logn)
// also exponential search works only on sorted array
// it (code) will also be the same for unbounded array

// Applications of this search technique:
// 1. Helpful when we have to search in unbounded array (infinte sorted array)
// 2. Better than binary search when x is near beginning

// TC - O(log(2^logm-1))

#include<iostream>
using namespace std;

int binarySearch(int a[], int start, int end, int x) {  //  TC - O(log(2^logm-1))

    while(start <= end) {
        int mid = (start+end)/2;
        if(a[mid] == x) {
            return mid;
        }
        else if(x>a[mid]) {
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}

int expSearch(int a[], int n, int x) {

    if(a[0] == x) {
        return 0;
    }

    int i = 1;
    while(i<n && a[i]<=x) {                     // TC - O(log m) // where m is index at which it stops (end of subarray)
        i = i*2;    // i*=2 or i = i<<1;
    }
    return binarySearch(a, i/2, min(i, n-1), x);
}

int main() {

    int a[] = {3,4,5,6,11,13,14,15,56,70};
    int n = sizeof(a)/sizeof(int);
    int x = 13;
    int ans = expSearch(a, n, x);
    cout << "ans found at index: " << ans << endl;
    return 0;
}