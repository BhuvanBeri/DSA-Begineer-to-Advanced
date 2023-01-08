#include<iostream>
using namespace std;

int main() {

    int var1 = 123;
    cout << "var1: " << var1 << endl;

    var1 = 55; // reassigning new value to var1
    cout << "new value in var1: " << var1 << endl;
    cout << endl;
    cout << "-----------------------" << endl;

    double var2 = 44.55;
    cout << "var2: " << var2 << endl;

    var2 = 99.99;
    cout << "new value in var2: " << var2 << endl;
    cout << endl;
    cout << "-----------------------" << endl;

    bool state = false;
    cout << std::boolalpha << std::endl;
    cout << "state: " << state << endl;
    
    state = true;
    cout << "changed state: " << state << endl;

    

    return 0;
}