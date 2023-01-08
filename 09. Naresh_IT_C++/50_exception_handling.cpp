#include<iostream>
using namespace std;

int main() {

    try {
        cout << "Before throw " << endl;
        throw 1;
        cout << "After throw " << endl;
    }
    catch (int x) {
        cout << x << " is printed" << endl;
    }
    cout << "Thank You" << endl;
}