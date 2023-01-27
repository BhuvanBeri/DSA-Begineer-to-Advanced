#include<iostream>
using namespace std;

int main() {

    float f = 10.5;
    float p = 2.5;
    float* ptr = &f;
    (*ptr)++;   // increments value of f from 10.5 to 11.5
    *ptr = p;   // updates value of f from 11.5 to 2.5
    cout << *ptr << " " << f << " " << p;
}