#include<iostream>
using namespace std;

class test1;    // forward / class declaration
class test2;    // forward / class declaration

class test1 {

    int a;
    public:
        void geta() {
            cout << "Enter a value" << endl;
            cin >> a;
        }
        friend void big(test1, test2);
};

class test2 {

    int b;
    public:
        void getb() {
            cout << "Enter b value" << endl;
            cin >> b;
        }
        friend void big(test1, test2);
};

void big (test1 t1, test2 t2) {
    if (t1.a > t2.b) {
        cout << "A is big" << endl;
    } else if (t1.a < t2.b) {
        cout << "B is big" << endl;
    } else {
        cout << "Both are equal" << endl;
    }
}

int main() {

    test1 t1;
    test2 t2;
    t1.geta();
    t2.getb();
    big(t1, t2);
}