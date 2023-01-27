#include<iostream>
using namespace std;

int main() {

    double a = 10.54;
    double *d = &a;
    d = d+1;            // being double the address will move by 8 bytes
    cout << d << endl;
}