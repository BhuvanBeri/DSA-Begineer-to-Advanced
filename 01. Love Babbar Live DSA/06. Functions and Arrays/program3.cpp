#include<iostream>
using namespace std;

void printsquares (int num) {

    for (int i=1; i<=num; i++) {
        cout << i*i << " ";
        
    }
    cout << endl;
}

void printeven (int num) {

    for (int i=2; i<=num; i=i+2) {
        cout << i << " ";
        
    }
    cout << endl;
}

int printfact(int num) {

    int fact = 1;
    for (int i=num; i>=1; i--) {
        fact = fact * i;
    }
    return fact;
}

int main() {

    int n = 5;
    printeven(n);
    printsquares(n);
    cout << printfact(n);
}

