#include<iostream>
using namespace std;

class stu;  // class declaration (when we do not have body)

class stu {

    int id;
    char name[20];

    public:
        void readstu() {    // function definition
            cout << "Enter stuid, name: ";
            cin >> id >> name;
        }
        void showstu();     // function declaration
};

void stu :: showstu() {
    cout << "Stu id = " << id << ", name = " << name << endl;
}

int main() {

    stu s1, s2;
    s1.readstu();
    s2.readstu();
    s1.showstu();
    s2.showstu();
}