#include<iostream>
using namespace std;

// long long is used to avoid the problem of large number overflow during multiplication
// only finding integer part.

long long int SquareRootInteger(int n) {

    int s = 0;
    int e = n;  // creating answer range from 0 to given number n
    long long int mid = s + (e-s)/2;

    long long int ans = -1;

    while (s<=e) {
        int square = mid*mid;

        if (square == n) {
            return mid;
        }
        if (square < n) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

// Now for float part to add precision

double morePrecision(int n, int precision, int tempSolution) {

    double factor = 1;
    double ans = tempSolution;

    for (int i=0; i<precision; i++) {
        factor = factor/10; // initially 1 becomes 0.1 then 0.01 then 0.001 for 3 times precision
        for (double j=ans; j*j<n; j=j+factor) { // will start from fixed integer point and new precision added till the point of comparing its square and updating it by more precision needed.
            ans = j;    // suppose 6.1, then 6.13, then 6.132
        }
    }
    return ans;
}

int main() {

    // to find square root of 37
    int tempSolution = SquareRootInteger(37);
    cout << "Answer is: " << morePrecision(37, 3, tempSolution) << endl;
}