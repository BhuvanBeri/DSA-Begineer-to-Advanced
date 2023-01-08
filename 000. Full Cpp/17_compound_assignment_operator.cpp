#include<iostream>
using namespace std;

int main() {


    int value = 45;

    cout << "Value: " << value << endl; // 45

    value += 5; // value = value + 5 = 50
    cout << "Value: " << value << endl; // 50

    value -= 30;
    cout << "Value: " << value << endl; // 20

    value /= 2;
    cout << "Value: " << value << endl; // 10

    value %= 5;
    cout << "Value: " << value << endl; // 0

    value *= 2;
    cout << "Value: " << value << endl; // 0

    return 0;
}