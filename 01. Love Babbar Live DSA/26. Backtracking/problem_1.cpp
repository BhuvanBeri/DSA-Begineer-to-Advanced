// backtracking use the concept of recusion and time complexity wise backtracking is even worse until optimized

#include<iostream>      // Permutation time complexity - O(N!) - why? = for first iteration we do 3 recursive calls, for next we do 2 calls, for 3rd we do 1 call. i.e. like a factorial.
using namespace std;

void printPermutation(string &str, int i) { // sent string by reference and not copy of the string.
                            // it will work fine without reference too but to work with backtracking, it is needed.
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
        // backtracking - why? = dry run to understand, since we are using referenced string, changes will be saved
        // thus to prevent to get same string twice in some instances, we will do addition swap to-
        // To recreate the original input string
        swap(str[i], str[j]);
    }
}

int main() {

    string str = "abc";
    int i = 0;
    printPermutation(str, i);
    return 0;
}