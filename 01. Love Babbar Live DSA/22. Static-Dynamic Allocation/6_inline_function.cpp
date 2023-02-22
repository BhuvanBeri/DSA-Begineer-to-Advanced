// used to reduce function call overhead.
// rules: to be used when func contains 1 line of content.
//          for 2-3 lines, it depends on compiler to allow.
//          for more than 3 lines, it is not allowed to use it.

#include<iostream>
using namespace std;

int score = 0; 

inline int func(int x, int y) {
    cout << score << endl;
    score += 3;
    cout << "Three" << endl;
    if(x>y) {
        cout << "X is big " << endl;
    }
    else {
        cout << "Y is big " << endl;
    }
    return x+y;
}

int main() {
    int ans = func(2,3);
    cout << ans << endl;
}