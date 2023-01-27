#include<iostream>
using namespace std;

int main() {

    int a = 7;
    int *c = &a;
    c = c+1;    // address incremented, holding garbage value
    cout << a << " " << *c << endl;
}