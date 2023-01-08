// abstract base class are used to create base class pointer at runtime to get the dynamic / runtime polymorphism
// pure virtual function is which is declared in class but is not defined in a class or not have any content in the base class
// function when initialized with 0 having virtual keyword, it is called pure virtual function
// pure virtual function is declared in base class without any content in it.
// pure virtual function always initialize with 0 only.

#include<iostream>
using namespace std;

class shape {   // abstract base class = base class having a pure virtual function

    protected:
        float d1, d2; // dimention 1 and 2
    public:
        void getdim() {
            cin >> d1 >> d2;
        }
        virtual float area () = 0;  // this is called pure virtual function. It is used to prevent duplication complexities, like virtual class
};

// now no need to use virtual keyword in redefining virtual function area

class triangle : public shape {

    public:
        float area() {
            return 0.5 * d1 * d2;   // returning are of triangle with d1 and 2 as length and breadth
        }
};

class rectangle : public shape {

    public:
        float area() {
            return d1 * d2; // area of rectangle (l*b)
        }
};

int main() {

    // shape s; this will give error because shape is the abstract base class. abstract base class are not able to be used to create objects. they are used only for inheritance.
    triangle t;
    cout << "Enter triangle base and height" << endl;
    t.getdim();
    cout << "Area = " << t.area() << endl;
    rectangle r;
    cout << "Enter rectangle length and breadth" << endl;
    r.getdim();
    cout << "Area = " << r.area() << endl;
}