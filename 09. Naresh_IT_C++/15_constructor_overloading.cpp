// overloading is defining functions or objects with same name by changine order/ number / type of arguments
// constructor overloading is defining several constructors within same class by changing number/type/order of arguments.
// it is a polymorphic feature of c++

#include<iostream>
using namespace std;

class circle {

    float r;
    public:
        circle() {  // default constructor
            r = 5;
        }
        circle (float r) {  // parameterized constructor
            this -> r = r;
        }                   // constructor overloading
        void showarea() {
            cout << "Area= " << 3.14*r*r << endl;
        }
};

int main() {

    circle c1;
    circle c2(10);
    c1.showarea();
    c2.showarea();
}