#include<iostream>
using namespace std;

int main() {

    int a = 7;
    int *c = &a;
    cout << c << endl;
    cout << *c << endl;
    c = c+3;    // address incremented, holding garbage value
    cout << c << endl;
    cout << *c << endl;
}