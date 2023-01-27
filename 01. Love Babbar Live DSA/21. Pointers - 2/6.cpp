#include<iostream>
using namespace std;

int main() {

    char ch = 'a';
    char *ptr = &ch;
    ch++;
    cout << *ptr << endl;   // b 
    cout << ptr << endl;    // b and garbage value until '\0' is met.
}