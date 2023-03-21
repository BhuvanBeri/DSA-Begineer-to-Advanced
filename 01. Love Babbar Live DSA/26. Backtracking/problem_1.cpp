// backtracking use the concept of recusion and time complexity wise backtracking is even worse until optimized

#include<iostream>
using namespace std;

void printPermutation(string &str, int i) { // sent string by reference and not copy of the string.

    // base case
    if(i >= str.length()) {
        cout << str << " ";
        return;
    }

    // swapping
    for (int j=i; j<str.length(); i++) {
        swap(str[i], str[j]);
        // recursion call
        printPermutation(str, i+1);
        // backtracking - why? = 
        swap(str[i], str[j]);
    }
}

int main() {

    string str = "abc";
    int i = 0;
    printPermutation(str, i);
    return 0;
}