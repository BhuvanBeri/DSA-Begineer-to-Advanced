// Euclid's Algo - gcd(a,b) = gcd(a-b,b)

// Note: GCD = Greatest Common Divisor & HCF = Highest Common Factor are Same.

#include<iostream>
using namespace std;

int gcd(int a, int b) {

    if(a==0) {
        return b;
    }
    if (b==0) {
        return a;
    }
    while (a != b) {
        if (a>b) {
            a = a-b;
        }
        else {
            b = b-a;
        }
    }
    return a;
}

int main() {

    int a = 8, b = 12;

    cout << "GCD is: " << gcd(a,b);
}