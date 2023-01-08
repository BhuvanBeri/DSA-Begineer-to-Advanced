#include<iostream>
using namespace std;

int main() {

    //Initializing pointer and assigning them data...
    //We know pointers store address of variables
    int int_var = 43;
    int *p_int = {&int_var}; // The address of operator (&)

    cout << "Int var: " << int_var << endl;
    cout << "p_int (address in memory): " << p_int << endl;

    // We can change the address stored in a pointer any time
    int int_var1 = 65;
    p_int = &int_var1; // assign different address to pointer
    cout << "p_int (different address in memory): " << p_int << endl;

    // can't cross assign between pointers of different types
    int *p_int1 = nullptr;
    double double_var = 33;
    // p_int = &double_var; // compilation error

    // Dereferencing a pointer: Reading something from the pointer
    int* p_int2 = nullptr;
    int int_data = 56;
    p_int2 = &int_data;

    cout << "Value: " << *p_int2 << endl;   // this way we can read the value of variable whose address was stored in the pointer variable.
    // that is reading the value of address stored in the pointer
}