// Dry Run on copy

#include<iostream>
using namespace std;

void func1(int** q) {
    q = q+1;
}

void func2(int** q) {
    *q = *q+1;
}

void func3(int** q) {
    **q = **q+1;
}

int main() {

    int a = 5;
    int *p = &a;
    int **q = &p;

    cout << "Before" << endl;
    cout << "q: " << q << endl;     // address of p
    cout << "*q: " << *q << endl;   // address of a
    cout << "**q: " << **q << endl; // value of a

    func1(q);

    cout << "After func1: " << endl;    // no change
    cout << "q: " << q << endl;
    cout << "*q: " << *q << endl;
    cout << "**q: " << **q << endl;

    func2(q);
    
    cout << "After func2: " << endl;    // no change
    cout << "q: " << q << endl;
    cout << "*q: " << *q << endl;   // address of a updated by 4 bytes
    cout << "**q: " << **q << endl; // any random value of a due to change of address

    func3(q);

    cout << "After func3: " << endl;
    cout << "q: " << q << endl;
    cout << "*q: " << *q << endl;       // address incremented again by 1
    cout << "**q: " << **q << endl;     // change in random value

}