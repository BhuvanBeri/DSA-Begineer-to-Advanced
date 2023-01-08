// rule1: for base class, default constructor must be provided before use of parameterized constructor.
// rule2: base class parameterized constructor must be called within derived class parameterized constructor.
// rule3: base class parameterized constructor should be the first statement in the derived class parameterized constructor.
// rule4: no other contructors of base class are called within derived class parameterized constructor. i.e. only 1 base class parameterized constructor is called within derived class parameterized constructor.

// to call base class parameterized constructor within derived class parameterized constructor, formula is:
// baseclass :: constructor(paramerters);

#include<iostream>
#include<string.h>
using namespace std;

class stu {

    char name[20], course[20];
    public:
        stu() { }   // default constructor
        stu (char name[20], char course[20]) {  // parameterized constructor

            strcpy (this->name, name);
            strcpy (this->course, course);
        }
        void showstu() {
            cout << "Name: " << name << endl;
            cout << "Course: " << course << endl;
        }
};

class marks : public stu {

    int m, p ,c;
    public:
        marks (char name[20], char course[20], int m, int p, int c)  :  stu(name, course)   // use this to pass name and course to student class constructor. // since we will access name and course from base we must add those entries in parameterized constructor of derived class
        {
            this -> m = m;
            this -> p = p;
            this -> c = c;
        }
        void showmarks() {
            cout << "m = " << m << endl;
            cout << "p = " << p << endl;
            cout << "c = " << c << endl;
        }
};

int main() {

    marks m1("Ram", "MPC", 60, 72, 85);
    m1.showstu();
    m1.showmarks();
}