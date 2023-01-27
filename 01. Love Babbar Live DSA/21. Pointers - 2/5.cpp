#include<iostream>
using namespace std;

int main() {

    int *ptr = 0;   // not valid memory because it does not exist
                    // gives segmentation fault until updated
                    // Here *ptr is pointing to nothing
    int a = 10;
    // *ptr = a;    <-- error it must be ptr = &a
    // *ptr = &a;   <-- error
    ptr = &a;
    cout << *ptr << endl;
}