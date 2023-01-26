#include<iostream>
using namespace std;

int main() {

    if (cout << "Babbar") {
        cout << "if";
    } else {
        cout << "else";
    }

    cout << "-------------" << endl;

    char sentence[] = "My name is Bhuvan";
    char *p = sentence; // &sentence, sentence is same.
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;
    return 0;
}