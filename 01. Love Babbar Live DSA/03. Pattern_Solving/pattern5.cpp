#include<iostream>
using namespace std;

int main() {

    int n = 4;

    for (int row = 1; row <= 4; row++) {

        for (int space = 1; space <= row-1; space++) {
            cout << " ";
        }
        
        for (int col = 1; col <= n-row+1; col++) {
            cout << "*";
        }
        cout << endl;
    }
}