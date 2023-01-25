#include<iostream>
using namespace std;

// brute force
int exponential(int a, int b) {    // a^b 
    int ans = 1;
    for (int i=0; i<b; i+1) {
        ans = ans * a;
    }
    return ans;
}

// optimized = TC - O(log b)
int fast_exponential(int a, int b) {

    int res = 1;
    while (a>0) {
        // odd
        if (a&1) {
            res = res * a;
        }
        a = a*a;
        b = b>>1; // or b = b/2
    } 
    return res;
}

int main() {

    int a = 2;
    int b = 3;
    cout << "Ans is: " << exponential(a,b);
    cout << "Ans is: " << fast_exponential(a,b);
}