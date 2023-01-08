#include<iostream>
using namespace std;

int main() {

    int num; 
    cout << "Enter value of num" << endl;
    cin >> num;

    switch (num) {
        case 0: cout << "I am in case 0" << endl;
                break;
        case 7: cout << "I am in case 7" << endl;
                break;
        default: cout << "I am in case default" << endl;
    }

    return 0;
}