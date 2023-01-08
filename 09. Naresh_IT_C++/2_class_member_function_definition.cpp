#include<iostream>
using namespace std;

class stu {

    int id;
    char name[20];
    public:

        void readstu() {    // function declaration
            cout << "Enter the id and name of student " << endl;
            cin >> id >> name;
        }                   // inline function.

        void showstu();
};

void stu :: showstu() {
    cout << "The entered data of student is: " << endl;
    cout << id << " " << name << endl;
}

int main() {

    stu s1;         // class object
    s1.readstu();   // object accessing member functions of class.
    s1.showstu();
}