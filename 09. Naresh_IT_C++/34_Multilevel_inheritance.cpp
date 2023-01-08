// deriving a new class from another derived class

#include<iostream>
using namespace std;

class stu {

    int id;
    char name[20];
    public:
        void getstu() {
            cout << "Enter stuid, name" << endl;
            cin >> id >> name;
        }
        void putstu() {
            cout << "Id = " << id << endl;
            cout << "Name = " << name << endl;
        }
};

class marks : public stu {

    protected:
        int m1, m2, m3;
    public:
        void getmarks() {
            cout << "Enter 3 subject marks" << endl;
            cin >> m1 >> m2 >> m3;
        }
        void putmarks() {
            cout << "M1 = " << m1 << endl;
            cout << "M2 = " << m2 << endl;
            cout << "M3 = " << m3 << endl;
        }
};

class result : public marks {

    int total;
    float avg;
    public:
        void show() {
            total = m1 + m2 + m3;
            avg = total / 3.0;
            cout << "Total: " << total << endl;
            cout << "Avg: " << avg << endl;
        }
};

int main() {

    result r;
    r.getstu();
    r.getmarks();
    r.putstu();
    r.putmarks();
    r.show();
}