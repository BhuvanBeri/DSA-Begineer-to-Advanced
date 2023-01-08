#include<iostream>
using namespace std;

int main() {

    //How we have used pointers so far
    int number = 22;    //stack

    int *p_number = &number;

    cout << "Declaring pointer and assigning address: " << endl;
    cout << "number: " << number << endl;
    cout << "p_number: " << p_number << endl;
    cout << "&number: " << &number << endl;
    cout << "*p_number: " << *p_number << endl;

    int *p_number1; // uninitialized pointer, contains junk address
    int number1 = 12;
    p_number1 = &number1;
    cout << "Uninitialized pointer: " << endl;
    cout << "*p_number1: " << *p_number1 << endl;

    // bad thing is to use uninitialized memory to pointer and directly adding and modifying values in it.

    // other bad thing:
    // int *p_number3 = {}; // it is pointing to null or 0
    // *p_number3 = 33; // we are trying to write direcly in a pointer which is not valid being null.
    // thus this is also bad using dereference pointer to write data in memory of uninitialized memory or null.

    // Dynamic Heap Memory.
    int *p_number4 = nullptr;
    p_number4 = new int;    //Dynamically allocate space for a single int on the heap
                            //This memory belongs to our program from now on. The system 
                            //can't use it for anything else, until we return it.
                            //After this line executes, we will have a valid memory location
                            //allocated. The size of the allocated memory will be such that it 
                            //can store the type pointed to by the pointer.
    
    *p_number4 = 77; //Writting into dynamically allocated memory

    cout << endl;
    cout << "Dynamically allocated memory: " << endl;
    cout << "*p_number4: " << *p_number4 << endl;

    delete p_number4;   // releases dynamically allocated memory back to the OS
                        // and cannot be used again.
                        //If we try to use it again, it will write in junk memory now,
                        //and not in allocated memory giving unexpected results.
    p_number4 = nullptr; // this resets memory to nullptr preventing any error in future.
                         // and easy readability.

    return 0;
}