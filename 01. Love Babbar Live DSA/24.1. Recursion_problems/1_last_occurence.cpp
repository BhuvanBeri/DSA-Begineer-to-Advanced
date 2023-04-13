// Find last occurence of a character recursively
// method 1 = search from left to right
// method 2 = search from right to left
// method 3 = use stl function strrchr()

#include<iostream>
using namespace std;

// TC = O(n)
// SC = O(n)

// method - 1
void lastOcc(string& s, char x, int i, int& ans) {

    // base case
    if(i >= s.size()) {
        return;
    }

    // solution
    if(s[i] == x) {
        ans = i;
    }
    // recursive call
    lastOcc(s, x, i+1, ans);
}

// method - 2
void lastOcc_2(string& s, char x, int i, int& ans) {

    // base case
    if(i < 0) {
        return;
    }

    // solution
    if(s[i] == x) {
        ans = i;
        return;
    }
    // recursive call
    lastOcc_2(s, x, i-1, ans);
}

int main() {

    string s;
    cout << "Enter string: ";
    cin >> s;

    char x;
    cout << "Enter element to search for its last occurence: ";
    cin >> x;
    int ans = -1;
    // lastOcc(s, x, 0, ans);
    lastOcc_2(s, x, s.size() - 1, ans);
    cout << ans << endl;
}