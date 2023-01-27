// Double Pointers

#include<iostream>
using namespace std;

int main() {

    int a = 5;
    int* p = &a;    // same as int *p = &a (p is a pointer to integer data)

    int** q = &p;   // q is a pointer to int* data.

    cout << "&a: " << &a << endl;   // address of a in hexadecimal form
    cout << "a: " << a << endl;     // value in a = 5
    cout << "*a: " << *a << endl;   // error, normal variable can't use dereference function of a pointer

    cout << "&p: " << &p << endl;   // address of p
    cout << "p: " << p << endl;     // address of a
    cout << "*p: " << *p << endl;   // value stored at address of a pointed by p

    cout << "&q: " << &q << endl;   // address of q
    cout << "q: " << q << endl;     // address of p
    cout << "*q: " << *q << endl;   // value stored at address of P
    cout << "**q: " << **q << endl; // value stored at address of P having value stored at address of A = 5

    

}