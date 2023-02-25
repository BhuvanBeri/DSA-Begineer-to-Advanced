// as we know quotient * divisor + remainder = dividend.
// to make it efficient we will user quotient * divisor <= dividend.

#include<iostream>
#include<vector>
using namespace std;

int solve(int dividend, int divisor) {

    int s = 0;
    int e = abs(dividend);  // abs is used to ignore -ve input

    int mid = s + (e-s)/2;
    int ans = 1;

    while(s<=e) {

        if(abs(mid*divisor) == abs(dividend)) {
            ans = mid
            break;
        }

        if(abs(mid*divisor) > abs(dividend)) {
            e = mid-1;
        }
        else {
            ans = mid;
            // right search
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }

    // to deal with +ve and -ve inputs individually.

    if ((divisor <0 && dividend <0) || (divisor>0 && dividend>0)) {
        return ans;
    }
    else {
        return -ans;
    }
}

int main() {

    int dividend = 47;
    int divisor = 6;

    int ans = solve(dividend, divisor);
    cout << "Ans is " << ans << endl;
    return 0;
}