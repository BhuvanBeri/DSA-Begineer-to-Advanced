#include<iostream>
using namespace std;

int main() {

    int n = 5;

    for (int row=1; row<=n; row++) {
        
        for (int sp=1; sp<=n-row; sp++) {
            cout << " ";
        }
        for (int col=1; col<=row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row=1; row<=n; row++) {
        for (int sp=1; sp<=row-1; sp++) {
            cout << " ";
        }
        for (int col=1; col<=n-row+1; col++) {
            cout << "* ";
        }
        cout << endl;
    }
}