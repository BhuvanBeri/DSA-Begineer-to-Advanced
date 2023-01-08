#include<iostream>
using namespace std;

int main() {

    int n=5;
    for (int row=1; row<=n; row++) {
        for (int col=1; col<=row; col++) {
            cout << char(col+65-1) << " ";
        }
        for (int col=row-1; col>=1; col--) {
            cout << char(col+65-1) << " ";
        }
        cout << endl;
    }
}