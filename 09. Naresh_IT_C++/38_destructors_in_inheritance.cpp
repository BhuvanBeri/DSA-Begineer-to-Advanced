#include<iostream>
using namespace std;

class base {

    public:
        ~base(){
            cout << "Base class destructor" << endl;
        }
};

class der : public base {

    public: // derived class destructor will execute before execution of base class destructor
        ~der() {
            cout << "Derived class destructor" << endl;
            //{Here, base class destructor gets bind with derived class destructor and is thus executed after execution of derived class destructor}
        }
};

int main() {

    der d;
}