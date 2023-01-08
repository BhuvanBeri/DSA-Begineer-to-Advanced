// deriving derived class from several base classes is called multiple inheritance.

#include<iostream>
using namespace std;

class stu { // base class

    int id;
    char name[20];
    public:
        void getstu() {
            cout << "Enter stuid and name "<< endl;
            cin >> id >> name;
        }
        void putstu() {
            cout << "Id = " << id << endl;
            cout << "Name = " << name << endl;
        }
};

class marks {   // base class

    protected:  // to access data members in immediate derived classe
        int m1, m2, m3;
    public:
        void getmarks() {
            cout << "Enter 3 subjects marks " << endl;
            cin >> m1 >> m2 >> m3;
        }
        void putmarks() {
            cout << "M1 = " << m1 << endl;
            cout << "M2 = " << m2 << endl;
            cout << "M3 = " << m3 << endl;
        }
};

class result : public stu, public marks {   // derived class

    int total;
    float avg;
    public:
        void show() {
            total = m1 + m2 + m3;   // to be able to access the data members of base class, we defined them as protected in base class and then created this derived class in public mode
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
}