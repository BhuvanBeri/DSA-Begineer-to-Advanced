// does not allow to change object values

#include<iostream>
using namespace std;

class test1 {   // without constant

    int a, b;
    public:
        void read() {
            a = 10;
            b = 20;
        }
        void show() {
            a = 30;
            b = 40;
            cout << "a: " << a << ", b: " << b << endl;
        }
};

class test {    // with constant

    int a, b;
    public:
        void read() {
            a = 10;
            b = 20;
        }
        void show() const {
            // a = 30;  // error will be here
            // b = 40;  // because modification is restricted
            cout << "a: " << a << ", b: " << b << endl;
        }
};

int main() {

    test t;
    t.read();
    t.show();

}