#include<iostream>
using namespace std;

int main() {

    //Declare and initialize pointer
    // int* p_number = {}; // initialize with nullptr
    // double* p_fractional_number = {};

    // pointer of one datatype can only store values or other pointer of same datatype.

    //Explicitly initialize with nullptr
    int* p_number = {nullptr};
    double* p_fractional_number = {nullptr};    

    //Pointers to different variables are of the same size.
    // size of pointer variable datatype and normal variable datatype will be same.
    cout << "sizeof(int): " << sizeof(int) << endl;
    cout << "sizeof(double): " << sizeof(double) << endl;
    cout << "sizeof(double*): " << sizeof(double*) << endl;
    cout << "sizeof(int*): " << sizeof(int*) << endl;
    cout << "sizeof(p_number): " << sizeof(p_number) << endl;
    cout << "sizeof(p_fractional_number): " << sizeof(p_fractional_number) << endl;

    //It does not matter if we put * symbol anywhere it will run.
    int* p_number2 = {nullptr};
    int * p_number3 = {nullptr};
    int *p_number4 = {nullptr};

    int* p_number5 = {}, other_int_variable = {}; // last one is normal int variable and not a pointer variable
    int* p_number6 = {};
    int other_int_variable = {}; // this way prevents any confusion.

    

    return 0;
}