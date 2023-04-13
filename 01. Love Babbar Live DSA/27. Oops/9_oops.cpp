// Polymorphism = Existing in Many Forms.

// Types of Polymorphism:
// 1) Compile-Time Polymorphism 
// 2) Run-Time Polymorphism

// Compile time polymorphism is based on:
// 1) Function Overloading 
// 2) Operator Overloading :    HW:- Find on google, allowed operators for operator overloading
                                // HW:- Find on google, how to overload << and >> operators 
#include<iostream>
using namespace std;

class Maths {

    public:
        int sum(int a, int b) {         // sum function is existing in multiple forms
            cout << "I am in first signature " << endl;
            return a+b;                 // hence polymorphism
        }
        int sum(int a, int b, int c) {  // function overloading
            cout << "I am in second signature " << endl;
            return a+b+c;
        }
        int sum(int a, float b) {
            cout << "I am in third signature " << endl;
            return a+b+100;
        }
        // double sum(int a, int b) {       // <- just by changing return type it won't work
        //     return a+b;
        // }
};

int main() {

    Maths obj;
    cout << obj.sum(10,5) << endl << endl;
    cout << obj.sum(10,5,5) << endl << endl;
    cout << obj.sum(10,5.12f) << endl << endl;  // f is used so that it does not consider 5.12 as double
    return 0;
}