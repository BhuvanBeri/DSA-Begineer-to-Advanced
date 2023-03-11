#include<iostream>
using namespace std;

int main() {

    int *ptr = 0;
    int a = 10;
    *ptr = a;   // still no address is provided to ptr
    cout << *ptr << endl;
}