#include<iostream>
using namespace std;

void printfibonacci(int n) {

    int a = -1;
    int b = 1;

    for (int i=0; i<n; i++) {
        int sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
}

int main () {

    int n = 7;

    printfibonacci(n);
}