#include<iostream>
using namespace std;

int main() {

    int n = 5;
    int num {15}; // other way to initialize value to a variable.
    int numi = 2.9; // will take only 2
    int numbr {2.7}; // this will give warning message and then take 2 in its storage.
    int numbri (2.8); // this type of initialization won't give warning message and will directly take 2 for storage. This type of initialization () is called functional initialization

    cout << n << " " << num << " " << numi << endl;

    cout << sizeof(int) << " is the size of int datatype" << endl;

    int total = num + numi; // declaring total variable and initializing variables as value in it.
    cout << "Sum of num and numi: " << total << endl;
}