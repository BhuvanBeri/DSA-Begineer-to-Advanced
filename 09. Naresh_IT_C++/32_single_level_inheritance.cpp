#include<iostream>
using namespace std;

class stu {

    private:
        int id;
        char name[20];
    public:
        void getstu() {
            cout << "Enter stuid, name" << endl;
            cin >> id >> name;
        }
        void putstu() {
            cout << "Stuid: " << id << endl;
            cout << "Name: " << name << endl;
        }
};
                            // inheritance in public visibility mode
class phy : public stu {    // : is symbol of inheritance operator

    float height, weight;
    public:
        void getphy() {
            cout << "Enter stu height and weight" << endl;
            cin >> height >> weight;
        }
        void putphy() {
            cout << "Height: " << height << endl;
            cout << "Weight: " << weight << endl;
        }
};
                            // inheritance in private visibility mode
class phy_2 : private stu {    // : is symbol of inheritance operator

    float height, weight;
    public:
        void getphy() {
            getstu();        // by calling directly then we can access it.
            cout << "Enter stu height and weight" << endl;
            cin >> height >> weight;
        }
        void putphy() {
            putstu();
            cout << "Height: " << height << endl;
            cout << "Weight: " << weight << endl;
        }
};

int main() {

    phy p;  // derived class object
    p.getstu(); // derived class in public mode can access public data of base class
    p.getphy();
    p.putstu();
    p.putphy();

    phy_2 p2;   // derived class object of visibility private
    // p2.getstu(); // derived class in private mode cannot access public data of base class
    p2.getphy();
    // p2.putstu(); // same reason for error. but after adding function in derived program we can access it. Then no need of this line anyway.
    p2.putphy();
}