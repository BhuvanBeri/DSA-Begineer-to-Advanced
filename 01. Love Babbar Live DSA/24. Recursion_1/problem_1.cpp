// you have to tell the minimum number of elements required to reach target sum.
// also known as min number of coins to reach target

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(vector<int>& arr, int target) {

    // base case
    if(target == 0) {
        return 0;
    }
    if (target < 0) {   // invalid case, do not update mini
        return INT_MAX;
    }

    // 1 case solve krlo
    int mini = INT_MAX;
    for(int i=0; i<arr.size(); i++) {
        int ans =  solve(arr, target-arr[i]);
        if(ans != INT_MAX)
            mini = min(mini, ans+1);
    }

    return mini;
}

int main() {

    vector<int> arr{1,2};
    int target = 5;
    int ans = solve(arr, target);
}