#include<iostream>
using namespace std;

int main() {

    int int_data = 33;
    double double_data = 55;

    //references
    int& ref_int_data = int_data;
    double& ref_double_data = double_data;

    //Printing.
    cout << "int_data: " << int_data << endl;
    cout << "double_data: " << double_data << endl;
    cout << "&int_data: " << &int_data << endl;
    cout << "&double_data: " << &double_data << endl;

    cout << "ref_int_data: " << ref_int_data << endl;
    cout << "ref_double_data: " << ref_double_data << endl;
    cout << "&ref_int_data: " << &ref_int_data << endl;
    cout << "&ref_double_data: " << &ref_double_data << endl;

    cout << "********************************" << endl;
    int_data = 111;
    double_data = 67.2;

    //Printing.
    cout << "int_data: " << int_data << endl;
    cout << "double_data: " << double_data << endl;
    cout << "&int_data: " << &int_data << endl;
    cout << "&double_data: " << &double_data << endl;

    cout << "ref_int_data: " << ref_int_data << endl;
    cout << "ref_double_data: " << ref_double_data << endl;
    cout << "&ref_int_data: " << &ref_int_data << endl;
    cout << "&ref_double_data: " << &ref_double_data << endl;

    cout << "********************************" << endl;

    ref_int_data = 1012;
    ref_double_data = 1000.45;

        //Printing.
    cout << "int_data: " << int_data << endl;
    cout << "double_data: " << double_data << endl;
    cout << "&int_data: " << &int_data << endl;
    cout << "&double_data: " << &double_data << endl;

    cout << "ref_int_data: " << ref_int_data << endl;
    cout << "ref_double_data: " << ref_double_data << endl;
    cout << "&ref_int_data: " << &ref_int_data << endl;
    cout << "&ref_double_data: " << &ref_double_data << endl;
//Thus, reference is like mirror of original, any change in original will be reflected in reference.
//And any change in reference will be reflected in original as well.
    return 0;
}