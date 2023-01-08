// local class is a class defined within a member function.
// function definition for working with local class must be done within class

#include<iostream>
using namespace std;

int x = 200;    // global variable

void fun() {
    class test {

    int x;
    public: 
        void show() {
            x = 100;
            cout << "Local x = " << x << endl;
            cout << "Global x = " << ::x << endl;   // ::variable_name is used to access global variable
        }
    };
    test t; // obj
    t.show();   // calling
}

int main() {

    fun();  // calling function will directly implement class obj invokation as well
}