#include<iostream>
using namespace std;

int main() {

    int n = 5;

    for (int row=1; row<=n; row++) {

        for (int col=1; col<=row; col++) {

            if (col == row || col == 1) {
                cout << col << " ";
            }
            else if (row == 1 || row == n) {
                cout << col << " ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}