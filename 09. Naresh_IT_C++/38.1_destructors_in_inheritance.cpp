#include<iostream>
using namespace std;

class base {

    public:
        ~base() {
            cout << "Destructor of base class" << endl;
        }
};

class der : public base {

    public:
        ~der() {
            cout << "Destructor of der class" << endl;
            // destructor of base class will execute after execution of destructor of derived class
        }
};

int main() {

    der d;
}