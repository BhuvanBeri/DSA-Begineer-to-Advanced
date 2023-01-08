// used for retriving the current object address
// and distinguish local data members and member function variable names

#include<iostream>
using namespace std;

class test {

    int a, b;   // data members
    public:
        void show () { 
            a = 10;
            b = 20;
            cout << "Object addres is: " << this;   // returns current object address (memory address)
            cout << endl;
            cout << "a = " << this -> a << endl;
            cout << "b = " << this -> b << endl;    // returns address of current object (b)
        }
};

int main() {

    test t;
    t.show();
}