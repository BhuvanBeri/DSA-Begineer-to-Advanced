#include<iostream>
using namespace std;

int main() {

    int a[5];
    int *c;
    cout << sizeof(a) << " " << sizeof(c);
    // size of a = 5 * 4 bytes = 20 bytes
    // size of c = int type pointer = 8/4 bytes (fixed) being compiler dependent
}