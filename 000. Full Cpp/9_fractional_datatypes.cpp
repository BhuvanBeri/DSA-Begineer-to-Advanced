#include<iostream>
#include<iomanip>
using namespace std;

// difference between double and float is majorly based on their precision.

int main() {

    float num1 = 1.2323456789; // can handle fewer numbers than double.
    double num2 = 4.1234512345678123456; // can provide precision to more numbers than float.
    long double num3 = 6.12345345123456789123456;  // increases precision even more than double.

    cout << sizeof(num1) << " is size of float datatype" << endl;
    cout << sizeof(num2) << " is size of double datatype" << endl;
    cout << sizeof(num3) << " is size of long double datatype" << endl;

    // we can do num1/0 and get infinity as output without runtime error. but not a good coding practice 
    
    double number {3.498e-11}; // multiply with 10, except 11.
    cout << "Answer of number is: " << number << endl; 

    // precision.

    cout << std::setprecision(20); //gives precision. only these number of values will be given, not more.
    cout << "Number 1 is: " << num1 << endl; // 7 digits, after wards other numbers are junk.
    cout << "Number 2 is: " << num2 << endl; // 15 digits
    cout << "Number 3 is: " << num3 << endl; // 15+ digits
    cout << std::setprecision(3) << "At precision 3: " << num1 << endl; // gives only 3 numbers for output.
    
    // Nan
    double numb1 = {};
    double numb2 = {};
    cout << "0/0: " << numb1/numb2 << endl; 

    return 0;
}