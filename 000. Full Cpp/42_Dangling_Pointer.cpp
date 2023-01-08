#include<iostream>
using namespace std;

int main() {

    //Case 1: Uninitialized pointer
    int *p_number; //Dangling unitialized pointer:- Dangling pointer is a pointer pointing to non valid memory location.

    //Case 2: Deleted pointer
    delete p_number;
    // cout << "Deleted pointer" << *p_number << endl; // crash again

    //Case 3: Multiple pointers pointing to same memory.
    int *p_number3 = new int {20};
    int *p_num4 = p_number3;

    cout << "p_number3: " << p_number3 << *p_number3 << endl;
    cout << "p_num4: " << p_num4 << *p_num4 << endl;

    //Deleting p_number3
    //delete p_number3;

    //p_num4 points to deleted memory. Dereferencing it will lead to
    // have undefined behaviour : Crash/garbage.

    //Solutions:
    //Solution 1: Initialize your pointers immediately upon declaration.
    //Solution : Check nullptr before use.
    if (p_num4 != nullptr) {
        cout << "*p_num4 = " << *p_num4 << endl;
    } else {
        cout<< "Invalid address" << endl;
    }

    // Solution 2: Reset pointer to nullptr after deleting pointer memory allocated.
    // For multiple pointer pointing

    //Solution 3: For multiple pointers pointing to the same address, Make sure there is one
    //clear pointer (Master Pointer) that owns the memory (Responsible for releasing when necessary)
    //Other pointers should be able to dereference when the master pointer is valid.
}