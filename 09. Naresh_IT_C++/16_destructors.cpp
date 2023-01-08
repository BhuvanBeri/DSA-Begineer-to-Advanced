// to delete memory constructed by constructor we use destructor.
// it is also a special member function.
// it also should be declared in public area.
// it will never have arguments.
// it never participates in destructor overloading.
// constructor and destructor never returns any return value.
// it also make implicit (automatic) calls for new and delete operator.

#include<iostream>
using namespace std;

class sample {          // example

    public:
        sample () {     // constructor

        }
        ~sample () {    // destructor
        
        }
};

class Sample {

    int a, b;
    public:
        Sample () {     // constructor

            a = 10;
            b = 20;
        }
        ~Sample () {    // destructor
        
            cout << "A = " << a << endl;
            cout << "B = " << b << endl;
        }
};

int main() {

    Sample s;   // object created; constructor is invoked.
    // destructor will give output before end of program and delete the memory allocated.
    // as soon as int main bracket is closed, the object will be deleted being a local variable of main block.
    // and destructor will delete the memory allocated to constructor i.e. objects.
}