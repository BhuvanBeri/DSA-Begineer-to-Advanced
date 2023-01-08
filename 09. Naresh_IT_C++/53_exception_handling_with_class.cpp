#include<iostream>
using namespace std;

class test {

    public:
        test() {
            cout << "I am the constructor" << endl;
        }
        ~test() {
            cout << "I am the destructor" << endl;
        }
};
// whenever obj of class is created inside try block, and it has destructor in it. than destructor will be executed directly before reaching catch.

int main() {

    try {
        cout << "Welcome to exception handling" << endl;
        test t; // obj created
        throw 10;
        cout << "Testing destructor" << endl;
    }
    catch (...) {
        cout << "Thank you" << endl;
    }
}