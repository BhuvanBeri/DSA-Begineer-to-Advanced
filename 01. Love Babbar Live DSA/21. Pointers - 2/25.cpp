#include<iostream>
using namespace std;

int main() {

    int a[] = {1,2,3,4};
    int *p = a++;   // cannot change value of a (a = a+1 not possible being a constant pointer)
                    // runtime error.
    cout << *p << endl;
}