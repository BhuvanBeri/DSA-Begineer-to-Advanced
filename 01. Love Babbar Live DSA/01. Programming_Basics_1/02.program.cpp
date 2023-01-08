#include<iostream>
using namespace std;

int main() {
    
    int a = 5;
    cout << "Value of a is: " << a << endl;

    bool b = true;
    cout << "Value of b is: " << b << endl;
    
    float f = 1.2;
    cout << "Value of f is: " << f << endl;

    cout << "Size of float f is: " << sizeof(f) << endl;
    cout << "Size of bool b is: " << sizeof(b) << endl;
    cout << "Size of int a is: " << sizeof(a) << endl;

    char ch = 'd';
    cout << "Value of ch is: " << ch << endl;
    cout << "Size of char ch is: " << sizeof(ch) << endl;

    return 0;
}