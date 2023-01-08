#include<iostream>
using namespace std;

class bank {
    int acc_no;
    char name[20];
    float bal;
    public:
        void getacc() {
            cout << "Enter acc_no, name, and bal" << endl;
            cin >> acc_no >> name >> bal;
        }
        void putacc() {
            cout << "Acc_no = " << acc_no << endl;
            cout << "Name = " << name << endl;
            cout << "Bal = " << bal << endl;
            cout << "A/c created" << endl;
        }
};

int main() {
    bank b;
    b.getacc();
    b.putacc();
}