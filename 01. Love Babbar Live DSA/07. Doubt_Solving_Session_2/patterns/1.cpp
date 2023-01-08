#include<iostream>
using namespace std;

void printPattern(int n) {

    for (int row=1; row<=n; row++) {

        if (row==1) {
            cout << "*";
        } else {
            cout << "*";
            int count = 1;
            while (count != row-1) {
                cout << count << " ";
                count++;
            }
            while (count > 0) {
                cout << count << " ";
                count--;
            }
            cout << "*";
        }
        cout << endl;
    }
}

int main() {

    int n = 4;
    printPattern(n);
}