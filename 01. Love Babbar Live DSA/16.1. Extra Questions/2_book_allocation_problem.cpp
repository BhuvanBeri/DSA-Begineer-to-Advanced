// VERY VERY IMPORTANT
// read gfg practice problem of same name to get the question


// array has been given pages of different book in every array index.
// these pages are to be alloted to numbers of kids given
// allocate in a continous matter and try to minimize the max number of pages allocated to a student.
// find a permutation in which max no of pages allocated to a student is minimum of all different permutations available.

// if no. of students > no. of books then return -1 because each student should be allocated atleast 1 book

#include<iostream>
#include<numeric>
using namespace std;

bool isPossibleSolution(int arr[], int n, int m, int sol) {
    int pageSum = 0;
    int c = 1;
    for(int i=0; i<n; i++) {
        if(arr[i] > sol) {
            return false;
        }
        if((pageSum + arr[i]) > sol) {
            c++;
            pageSum = arr[i];
            if(c > m) {
                return false;
            }
        }
        else {
            pageSum += arr[i];
        }
    }
    return true;
}

int findPages(int arr[], int n, int m) {

    if(m>n) {
        return -1;
    }
    int start = 0;
    int end = accumulate(arr, arr-n, 0);  // accumulate is used to get sum (start address, end address, initial sum)

    int ans = -1;

    while(start <= end) {
        int mid = (start + end) >> 1; // start + end / 2;
        if(isPossibleSolution(arr, n, m, mid)){
            ans = mid;
            end = mid-1;
        } 
        else {
            start = mid+1;  // if not a possible solution 
        }
    }
    return ans;
}

int main() {

    int arr[] = {12,34,67,90};
    int n = sizeof(arr)/sizeof(int);
    int m;  // max number of students
    cout << "Enter max number of students available: ";
    cin >> m;

    cout << findPages(arr, n, m) << endl;
}