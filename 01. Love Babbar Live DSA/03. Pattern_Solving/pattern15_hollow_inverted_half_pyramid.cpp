#include<iostream>
using namespace std;
// error
int main() {

    int n = 5;

    for (int row=1; row<=n; row++) {
        for (int col=1; col<=n; col++) {
            if (row == 1 || col == 1 || col == n) {
                cout << col << " ";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}