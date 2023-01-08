#include<iostream>
using namespace std;

int addNumbers (int first_param, int second_param) {  // datatype  variable_name (datatype parameter name, ...) 

    int result = first_param + second_param;
    return result;
}

int multiplyNumbers (int number1, int number2) {

    return number1 * number2;
}

int main() {

    int first = 4;
    int second = 2;

    int sum = addNumbers(first, second);
    cout << "sum = " << sum << endl;

    cout << "sum = " << addNumbers(34, 63) << endl; // direct output

    cout << "Multiply = " << multiplyNumbers(20,20) << endl; 

}