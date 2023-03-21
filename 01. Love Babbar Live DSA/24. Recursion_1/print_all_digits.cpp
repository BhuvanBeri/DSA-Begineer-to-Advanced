#include<iostream>
using namespace std;

void printDigits(int n) {

    // base case
    if(n == 0) {
        return;
    }

    int newValueOfN = n/10;
    
    printDigits(newValueOfN);

    int digit = n%10;
    cout << digit << " ";
    
}

int main() {

    int n = 643;

    printDigits(n);

    return 0;
}