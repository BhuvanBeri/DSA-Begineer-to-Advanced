#include<iostream>
using namespace std;

int main() {

    int a[] = {1,2,3,4};
    int *p = a++;   // <-- error because we tried to increment base address
    int *p = &a++;  // <-- error & is not needed while working with array
    cout << *p << endl;
}