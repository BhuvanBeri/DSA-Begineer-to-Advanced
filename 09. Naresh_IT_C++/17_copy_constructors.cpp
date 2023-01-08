// it is used to initialize the current object values with another object value.
// it is like zerox copy. duplicating object values.
// they have reference type (class type) parameters

#include<iostream>
using namespace std;

class sample {

    int a, b;
    public:
        sample (int a, int b) {     // parameterized constructor
            this -> a = a;
            (*this).b = b;
        }
        sample (sample &old) {  // copy constructor with old object reference
            a = old.a;          // old objects data is copied to new object's (a) variable
            b = old.b;
        }
        void print () {
            cout << "a = " << a << endl;
            cout << "b = " << b << endl;
        }
};

int main() {

    sample s1(10, 20);  // invokes parameterized constructor
    // now copying s1 data to s2
    sample s2(s1);      // s1 data is passed to s2. s1 is object.
    s1.print();
    s2.print();
}