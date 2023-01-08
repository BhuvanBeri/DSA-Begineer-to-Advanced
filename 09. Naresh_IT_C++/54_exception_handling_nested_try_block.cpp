#include<iostream>
using namespace std;

int main() {

    try {
        cout << "Welcome" << endl;
        try {
            cout << "To inner try block" << endl;
            throw 10;
        }
        catch (int x) {
            cout << "inner throw working" << endl;
            throw x;
        }
    }
    catch (int y) {
        cout << "to outer try block" << endl;
    }
}