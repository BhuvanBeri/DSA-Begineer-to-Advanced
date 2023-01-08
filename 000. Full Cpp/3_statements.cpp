#include<iostream>
using namespace std;

int main() {

    int first_number {3}; // statement 
    int second_number {7};
    int third_number = 2; // another way of initializing a variable with datatype and value

    cout << "First number: " << first_number << endl;
    cout << "Second number: " << second_number << endl;
    cout << "Third number: " << third_number << endl;

    int sum = first_number + second_number + third_number;
    cout << "Sum: " << sum << endl;

    return 0;
}