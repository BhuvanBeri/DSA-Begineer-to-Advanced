#include<iostream>
using namespace std;

int main() {

    // It is also possible to initialize the pointer with a valid
    // address up on declaration. Not with a nullptr.
    int *p_number1 = new int; // Memory location contains junk value
    int *p_number2 = new int (22); //Use direct initializion
    int *p_number3 = new int {23}; //Use uniform initializion

    cout << endl;
    cout << "Initialize with valid memory address at declaration " << endl;
    cout << "p_number1 = " << p_number1 << endl;
    cout << "*p_number1 = " << *p_number1 << endl; //Junk Value

    cout << "p_number2 = " << p_number2 << endl;
    cout << "*p_number2 = " << *p_number2 << endl;

    cout << "p_number3 = " << p_number3 << endl;
    cout << "*p_number3 = " << *p_number3 << endl;

    //Remember to release the memory
    delete p_number1;   // also remember not to use delete on same pointer twice 
    // delete p_number1; // compiler won't stop us but on running, it will kill the program at this line.
    p_number1 = nullptr;

    delete p_number2;
    p_number2 = nullptr;

    delete p_number3;
    p_number3 = nullptr;

    // Can resuse pointers
    p_number1 = new int {81};   // reallocated new memory with new data.
    cout << "*p_number1 = " << *p_number1 << endl;

    delete p_number1;
    p_number1 = nullptr;

    // cout << "*p_number1 = " << *p_number1 << endl; // won't print anything because it points to null and compiler will crash coming to this line.

    return 0;
}