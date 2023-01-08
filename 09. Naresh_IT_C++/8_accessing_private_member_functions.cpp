#include<iostream>
using namespace std;

class emp {

    private:
        int id;
        char name[20];
        float sal;
        void getemp () {
            cout << "Enter empid, name, salary" << endl;
            cin >> id >> name >> sal;
        }
    public:
        void putemp() {
            getemp();   // calling private member function
            cout << id << name << sal << endl;
        }
};

int main() {

    emp e;
    e.putemp();
}