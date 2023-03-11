#include<iostream>
using namespace std;

int climbStairs(int n) {

    // Base Case : Stopping Condition
    if(n == 0 || n == 1)   {    // If at stair 0 or 1. (No. of ways to reach stair 0 and 1)
        return 1;
    }

    int ans = climbStairs(n-1) + climbStairs(n-2);

    return ans;
}

int main() {

    int n;
    cout << "Enter numbers of stairs: ";
    cin >> n;

    cout << "Number of ways available to reach " << n << " stairs: " << climbStairs(n) << endl;

    return 0;
}