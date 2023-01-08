#include<iostream>
using namespace std;

int main() {


    bool a = true;
    bool b = false;
    bool c = true;

    cout << std::boolalpha << endl;
    cout << (a&&b) << endl; // and operator
    cout << (a&&c) << endl;
    cout << (a&&b&&c) << endl;

    cout << (a||b) << endl; // or operator
    cout << (a||c) << endl;
    cout << (a||b||c) << endl;

    cout << (!a) << endl; // not operator
    cout << (!b) << endl;
    cout << (!c) << endl;

    return 0;
}