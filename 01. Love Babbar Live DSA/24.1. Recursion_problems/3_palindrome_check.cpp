// check if a string is a palindrome or not using recursion

#include<iostream>
#include<string>
using namespace std;

// TC - O(n)
// SC - O(n)

bool isPalindrome(string& s, int start, int end) {

    // base case
    if(start >= end) {
        return true;
    }

    // one case solution
    if(s[start] != s[end]) {
        return false;
    }

    return isPalindrome(s, start+1, end-1); // if true
}

int main() {

    string s;
    cin >> s;
    cout << isPalindrome(s, 0, s.size()-1);
    return 0;
}