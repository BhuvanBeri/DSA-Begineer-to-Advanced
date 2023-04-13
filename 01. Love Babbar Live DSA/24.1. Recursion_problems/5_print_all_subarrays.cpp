// print all subarrays using recursion

#include<iostream>
#include<vector>
using namespace std;

// TC - O(n*n) = O(n^2)
// SC - O(n)

void printSubarray_util(vector<int>& nums, int start, int end) {

    // base case
    if(end == nums.size()) {
        return;
    }

    // 1 case solve
    for(int i=start; i<=end; i++) { // to move end
        cout << nums[i] << " ";
    }
    cout << endl;

    // recursion
    printSubarray_util(nums, start, end+1);
}

void printSubarray(vector<int>& nums) {
    for(int start=0; start<nums.size(); start++) {  // to move start
        int end = start;
        printSubarray_util(nums, start, end);
    }
}

int main() {
    vector<int>nums{1,2,3,4,5};
    printSubarray(nums);
    return 0;
}