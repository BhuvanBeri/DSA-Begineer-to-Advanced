// also called multipath inheritance.
// mix of different types of inheritance

#include<iostream>
using namespace std;

class stu {

    int idno;
    char name[20];
    public:
        void getstu() {
            cout << "Enter stuid, name" << endl;
            cin >> idno >> name;
        }
};

class marks : public stu {

    protected:
        int m,p,c;
    public:
        void getmarks() {
            cout << "Enter 3 subjects marks" << endl;
            cin >> m >> p >> c;
        }
};

class sports {

    protected:
        int spmarks;
    public:
        void getspmarks() {
            cout << "Enter sports marks" << endl;
            cin >> spmarks;
        }
};

class result : public marks, sports {

    int total;
    float avg;
    public:
        void show() {
            total = m+p+c;
            avg = total / 3.0;
            cout << "Total " << total << endl;
            cout << "Average " << avg << endl;
            cout << "Average + Sports marks = " << avg + spmarks << endl;
        }
};

int main() {

    result r;
    r.getstu();
    r.getmarks();
    r.getspmarks();
    r.show();
}