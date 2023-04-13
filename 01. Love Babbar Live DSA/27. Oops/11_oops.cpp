// runtime polymorphism = function/method overriding

#include<iostream>
using namespace std;

class animal {
    public:
        animal() {
            cout << "I am inside animal constructor" << endl;
        }
        virtual void speak() {
            cout << "Speaking" << endl;
        }
};

class dog:public animal{
    public:
        dog() {
            cout << "I am inside dog constructor" << endl;
        }
        void speak() {                      // function or method overriding = that is redefining same function or implementing ourself even after inheriting
            cout << "Barking" << endl;
        }
};

int main() {

    // animal a;
    // a.speak();

    // cout << endl;
    // dog aa;
    // aa.speak();

    // animal* a = new animal();
    // a->speak();

    // dog* d = new dog();
    // d->speak();

    // upCasting
    // animal* a = new dog();  // parent class pointer and object of dog class
    // always without virtual keyword, function/method of pointer will be called
    // with virtual keyword, function/method of object will be called
    // a->speak(); // it will always call parent class's function. to call function of child class we will use "virtual" keyword with function of parent class to call function of child class at runtime. Thus, runtime polymorphism

    // downCasting = depends from compiler to compiler, might run might not run
    // dog* b = new animal();
    // dog* b = (dog* )new animal();   // alternative of above code to avoid error
    // answer will be changed with and without virtual keyword
    // b->speak();

                // in heap memory obj is created so constructor calls will work according to the same
    animal* a = new animal();
    cout << endl;
    
    dog* d = new dog();
    cout << endl;

    animal* b = new dog(); 
    cout << endl;

    dog* c = (dog*)new animal();
    cout << endl;

    return 0;
}