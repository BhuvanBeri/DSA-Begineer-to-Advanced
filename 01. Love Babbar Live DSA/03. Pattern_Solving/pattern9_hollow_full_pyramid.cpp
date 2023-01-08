#include<iostream>
using namespace std;

int main() {

    int n = 6;

    for (int row=1; row<=n; ++row) {

        for (int sp=1; sp<=n-row; ++sp) {
            cout << " "; 
        }
        if (row==1 || row==n) {
            for (int col=1; col<=row; ++col) {
                cout << "* ";
            }
        }
        else {
            
            cout << "*";
            for (int sp=1; sp<=row*2-3; ++sp) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
}