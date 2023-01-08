#include<iostream>
using namespace std;

class base {

    public:
        base() {    // default constructor;
            cout << "Base class constructor" << endl;
        }
};

class der : public base {
    // automatically base class constructor gets bind to derived class constructor in first line. it will execute first then der class constructor will execute.
    public:
        der() {     // default constructor
        // {here, base class constructor gets bind behind the scene and run from here and then move ahead}
            cout << "Derived class constructor" << endl;
        }
};

int main() {

    der d;  // derived class object created
}