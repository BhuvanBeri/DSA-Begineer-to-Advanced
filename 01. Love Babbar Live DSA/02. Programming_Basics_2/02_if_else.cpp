#include<iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter the value of num" << endl;
    cin >> num;

    if (num > 5) {
        cout << "Num is greater than 5" << endl;
    } else if (num < 5 && num >= 0) {
        cout << "Num is not greater than 5" << endl;
    } else {
        cout << "Num is less than 0" << endl;
    }   
}