#include<iostream>
using namespace std;

int main() {

    int a = 7;
    int b = 17;
    int *c = &b;
    *c = 7;     // updates value of b stored in address on which pointer c points to.
    cout << a << " " << b << endl;
}