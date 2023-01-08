#include<iostream>
using namespace std;

int main() {

    int n = 5;

    for (int row=1; row<=n; row++) {

        for (int sp=1; sp<=n-row; sp++) {
            cout << " ";
        }

        if (row==1) {
            for (int col=1; col<=row; col++) {
                cout << "* ";
            }
        } else {
            cout << "*";
            for (int sp=1; sp<=row*2 - 3; sp++) {
                cout << " ";
            }
            cout << "* ";
        }
        cout << endl;
    }
    for (int row=n; row>=1; row--) {

        for (int sp=1; sp<=n-row; sp++) {
            cout << " ";
        }

        if (row==1) {
            for (int col=1; col<=row; col++) {
                cout << "* ";
            }
        } else {
            cout << "*";
            for (int sp=1; sp<=row*2 - 3; sp++) {
                cout << " ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}