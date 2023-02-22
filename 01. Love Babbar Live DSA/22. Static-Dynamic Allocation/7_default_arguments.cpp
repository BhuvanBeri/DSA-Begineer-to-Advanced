#include<iostream>
using namespace std;

int func(int x, int y, int z=1) {   // default argument must
    return x+y+z;               // always be given right to left
}

int main() {

    cout << func(2,3);
}