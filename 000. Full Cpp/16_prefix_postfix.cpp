#include<iostream>
using namespace std;

int main() {

    int value = 5;

    // value++;   // post increment --> if done first then in next line output will be 6
    cout << value++ << endl; // but giving output directly with post increment will change value to 6 after it has outputted 5

    value = 5; // reset value

    // value--; // post decrement
    cout << value-- << endl;

    value = 5;

    // ++value; // pre increment
    cout << ++value << endl;

    value = 5;

    // --value; // pre decrement
    cout << --value << endl;

    return 0;
}