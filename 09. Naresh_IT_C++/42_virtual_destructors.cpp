#include<iostream>
using namespace std;

class base {

    public:
        base () {
            cout << "Base class constructor" << endl;
        }
        virtual ~base () {
            cout << "Base class destructor" << endl;
        }
};

class der : public base {

    public:
        der() {
            cout << "Derived class constructor" << endl;
        }
        ~der() {
            cout << "Derived class destructor" << endl;
        }
};

int main() {

    base *b = new der;    // pointer object of base class assigned with derived class.
    delete b;   // base class pointer object will be deleted

    // since base class pointer is destined to base class constructor specifically, it will be executed first and then the normal process of derived class constructor and destructor is executed, but base class destructor won't be executed after execution of derived class constructor.
    // to prevent this we set ~base() as virtual.
}