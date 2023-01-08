#include<iostream>
using namespace std;

int main() {

    //Non const reference
    cout << endl;
    cout << "Non const reference: " << endl;
    int age = 27;
    int& ref_age = age;

    cout << "age: " << age << endl;
    cout << "ref_age: " << ref_age << endl;

    //Can modify original variable through reference
    cout << endl;
    cout << "Modify original variable through reference: " << endl;
    ref_age++; //modify through reference
    cout << "age: " << age << endl;
    cout << "ref_age: " << ref_age << endl;

    cout << endl;
    cout << "************************************";
    // Const reference
    int age = 27;   // age being const or not does not affect ref_age.
    const int& ref_age = age; // it being const will not allow it to be modified.
    //Simulating reference behavior with pointers
    // const int* const p_age = &age;
    // *p_age = 45; // this will give same compiler error.

    return 0;
}