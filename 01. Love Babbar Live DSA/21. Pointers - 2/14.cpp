#include<iostream>
using namespace std;
int main() {

    char b[] = "xyz";
    char *c = &b[0];
    cout << c << endl;    // xyz because it is default that pointer address for char type gives entire string in place of address.
}