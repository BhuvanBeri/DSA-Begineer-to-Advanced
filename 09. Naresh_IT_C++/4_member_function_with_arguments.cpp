#include<iostream>
#include<string.h>
using namespace std;

class emp {

    int empid;
    char ename[20];
    float sal;

    public:
        void getemp (int id, char name[20], float basic);
        void putemp ();
};

void emp :: getemp(int id, char name[20], float basic) {

    empid = id;
    strcpy(ename, name);    // direct copying of char not allowed, thus use strcpy (destination, source);
    sal = basic;
}

void emp :: putemp () {
    cout << "Empid = " << empid << endl;
    cout << "Ename = " << ename << endl;
    cout << "Sal = " << sal << endl;
}

int main() {

    emp e1;
    e1.getemp(101, "Bhuvan", 100000);
    e1.putemp();
}