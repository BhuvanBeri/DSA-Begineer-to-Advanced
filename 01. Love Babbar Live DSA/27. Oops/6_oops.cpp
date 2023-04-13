// Multiple Inheritance (example horse + donkey = mule or tiger + lion = liger)
// HW: read about diamond problem

#include<iostream>
using namespace std;

class A {
    public:
    int physics;
    // int chemistry;   <- results in ambiguity (confusion for compiler) Ans of diamond problem
    int chemistry;
    A() {
        chemistry = 101;
    }

};

class B {
    public:
    int chemistry;
    B() {
        chemistry = 410;
    }
};

class C:public A, public B {    // Multiple Inheritance
    public:
    int maths;
};

int main() {

    C obj;
    // cout << obj.physics << " " << obj.chemistry << " " << obj.maths << endl;
    cout << obj.A::chemistry << " " << obj.maths << endl;   // providing proper scopes to avoid diamond problem or ambiguity
    return 0;
}