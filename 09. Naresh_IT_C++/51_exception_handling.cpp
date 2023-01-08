#include<iostream>
using namespace std;

int main() {

    try {
        cout << "Telling any exception" << endl;
        throw 'A';
    }
    // catch (int x) {
    //     cout << "Try block throws " << x << endl; 
    // }
    // catch (char x) {
    //     cout << "Try block throws " << x << endl;
    // }
    // to catch all types of return type based thrown values
    
    catch (...) {   // will work for int, float, char all return types
        cout << "Catched the thrown value " << endl;
    }
}