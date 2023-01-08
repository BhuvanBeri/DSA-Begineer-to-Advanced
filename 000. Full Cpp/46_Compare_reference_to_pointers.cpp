#include<iostream>
using namespace std;

int main() {

    //Declare pointer and reference.
    double double_value = 12.34;
    double& ref_double_value = double_value; //Reference to double_value
    double* p_double_value = &double_value; //Pointer to double_value

    //Reading.
    cout << "double_value: " << double_value << endl;
    cout << "ref_double_value: " << ref_double_value << endl;
    cout << "p_double_value: " << p_double_value << endl;
    cout << "*p_double_value: " << *p_double_value << endl;

    //Writting through pointer
    *p_double_value = 15.44; // since we derefrenced and changed value in pointer, it will change original value

    cout << endl;
    cout << "double_value: " << double_value << endl;
    cout << "ref_double_value: " << ref_double_value << endl;
    cout << "p_double_value: " << p_double_value << endl;
    cout << "*p_double_value: " << *p_double_value << endl;

    //Writting through reference
    ref_double_value = 18.44; //Change in reference variable will directly change original value
    cout << endl;
    cout << "double_value: " << double_value << endl;
    cout << "ref_double_value: " << ref_double_value << endl;
    cout << "p_double_value: " << p_double_value << endl;
    cout << "*p_double_value: " << *p_double_value << endl;

    double some_other_double = 78.45;
    ref_double_value = some_other_double; // this will work but wrongly, because reference one set, always remains constant to one variable
// even on assigning new variable the address of first variable will be remaining and its value will change unintentionally.
// Thus we never use same reference variable to have new variable referenced to it.
    cout << "Making the reference variable something else..." << endl;
    cout << endl;
    cout << "double_value: " << double_value << endl;
    cout << "ref_double_value: " << ref_double_value << endl; 
    cout << "p_double_value: " << p_double_value << endl; // address will still be previous one of first variable. On which change of new variable got implemented.
    cout << "*p_double_value: " << *p_double_value << endl;

    cout << "***********************************" << endl;

    //Make the pointer point to something else
    p_double_value = &some_other_double;    //This is valid because it will work on new address.
    cout << "Making the [pointer] point something else..." << endl;
    cout << endl;
    cout << "double_value: " << double_value << endl;
    cout << "ref_double_value: " << ref_double_value << endl; 
    cout << "p_double_value: " << p_double_value << endl; // address will still be changed.
    cout << "*p_double_value: " << *p_double_value << endl;
    

    return 0;
}