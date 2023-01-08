#include<iostream>
using namespace std;

class test {

    public:
        static int a;   // static data member declaration
        void get() {
            // a = 10;
            cout << "a = " << a << endl;
        }
};

// defining static member
int test :: a = 20; 

int main() {

    test t;
    t.get();    // will provide default static value
    test :: a = 100;    // value of a is updated to 100
    cout << "a = " << test :: a << endl;    // it will be 100
    t.get();    // this will also be updated to 100
}