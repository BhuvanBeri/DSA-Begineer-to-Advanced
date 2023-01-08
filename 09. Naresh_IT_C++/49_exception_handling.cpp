// try, throw, catch.
// try is used to write the error causing program
// whenever error is encountered we throw some value using throw
// the thrown value is caught by catch and will then give solution for that error causing program

#include<iostream>
using namespace std;

int main() {

    int a, b;
    try {   // exception causing code is entered in try block
        cout << "Enter 2 numbers: " << endl;
        cin >> a >> b;
        if (b == 0) {
            throw 0;    // thrown as input for catch block
        }
        cout << "Division = " << a/b << endl;   // else case
    }
    catch (int x) { // int is used because throw thrown 0 which is int.
        cout << "Division not possible" << endl;
    }
    return 0;
}