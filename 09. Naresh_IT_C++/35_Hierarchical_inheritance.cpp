// 1 base class with several derived class

#include<iostream>
using namespace std;

class acc {

    int accno;
    char name[20];
    public:
        void getacc() {
            cout << "Enter accno, name" << endl;
            cin >> accno >> name;
        }
        void putacc() {
            cout << "Accno " << accno << endl;
            cout << "Name: " << name << endl;
        }
};

class saving : public acc {

    float bal;
    public:
        void getbal() {
            cout << "Enter balance" << endl;
            cin >> bal;
            if (bal < 500) {
                cout << "min bal 500" << endl;
            } else {
                cout << "Account created" << endl;
            }
        }
};

class current_acc : public acc {

    float bal;
    public:
        void getbal() {
            cout << "Enter balance" << endl;
            cin >> bal;
            if (bal < 1000) {
                cout << "Min bal 1000" << endl;
            } else {
                cout << "Account created" << endl;
            }
        }
};

int main() {

    int op;
    cout << "Enter your options:" << endl;
    cout << "1. Savings Account" << endl;
    cout << "2. Current Account" << endl;
    cout << "Enter : ";
    cin >> op;

    if (op == 1) {
        saving s;
        s.getacc();
        s.getbal();
    } else if (op == 2) {
        current_acc c;
        c.getacc();
        c.getbal();
    } else {
        cout << "Invalid option" << endl;
    }
}