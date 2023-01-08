// used to automatically initialize the data members when object of the class is created
// once object is created, constructor is invoked automatically
// constructor is a special member function.
// rule 1: constructor name should be same as class name.
// rule 2: constructor never returns any value. and does not have any return data type, not even void.
// rule 3: constructor and destructor, both should be declared in public access specifier.
// rule 4: constructor can and can not have any arguments.
// rule 5: constructor cannot participate in inheritance
// rule 6: cannot find address of constructor and make implicite calls to new and delete operators
// rule 7: constructor is only called once, when object is created. Further callings not allowed.



#include<iostream>
using namespace std;

class test {

    int a, b;
    public: 
        test () {       // constructor (default contructor)
            a = 10;
            b = 20;
        }
        void show () {
            cout << a << " " << b << endl;
        }
};

int main() {

    test t;             // constructor invoked automatically when object of that class is created
    t.show();
}