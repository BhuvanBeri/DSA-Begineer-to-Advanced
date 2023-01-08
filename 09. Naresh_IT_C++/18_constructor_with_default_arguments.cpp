#include<iostream>
using namespace std;

class test {

    int a, b, c;
    public:
        test (int x=10, int y=20, int z=30) {
            a = x;
            b = y;
            c = z;
        }
        void show () {
            cout << "a = " << a << "\t b = " << b << "\t c = " << c << endl;
        }
};

int main() {

    test t1;    // will use default values since user is not giving input
    test t2(1, 2, 3);   // will use user provided data, and default values are overwritten
    test t3 (1, 2);
    test t4 (1);    // missing arguments are replaced with default values
    t1.show();
    t2.show();
    t3.show();
    t4.show();
}