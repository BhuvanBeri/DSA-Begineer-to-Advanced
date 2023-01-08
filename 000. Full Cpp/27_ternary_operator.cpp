#include<iostream>
using namespace std;

int main() {
/*
    // result = (condition) ? option1 : option2
    // that is.
    if(condition) {
        result = option1;
    }else {
        result = option2;
    }
*/

    int max;
    int a = 35;
    int b = 20;

    max = (a>b) ? a : b;
    max = (a<b) ? a : 22.5f;    // compiler converted float to int (right is converted to type of left)
    cout << "max = " << max << endl;

    return 0;
}