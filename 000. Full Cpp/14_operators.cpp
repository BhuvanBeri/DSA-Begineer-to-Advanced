#include<iostream>
using namespace std;

int main() {

    int num1 = 10;
    int num2 = 7;

    num1 = 10.0; // even though the input is now in double form, however its datatype is int, thus only 10 will be considered.
    num2 = 2.0;

    int result = num1 + num2;   // addition.
    cout << "result = " << result << endl;

    result = num2 - num1; // subtraction
    cout << "result = " << result << endl;

    result = num1 / num2; // division --> gives quotient.
    cout << "result = " << result << endl;

    result = num1 % num2; // modulus --> gives remainder.
    cout << "result = " << result << endl;

    result = num1 * num2; // multiplication
    cout << "result = " << result << endl; 

    return 0;
}