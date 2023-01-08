#include<iostream>
using namespace std;

int main() {

    int n = 5;

    do {    // will print atleast 1 time even when condition is not true
        cout << "Friday! " << n << endl;
        n++;
    } while (n < 4);
}