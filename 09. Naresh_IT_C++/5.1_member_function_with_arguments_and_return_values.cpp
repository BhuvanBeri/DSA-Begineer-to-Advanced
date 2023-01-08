#include<iostream>
using namespace std;

class test {

    int a, b;
    public:
        void readdata(int x, int y){
            a = x;
            b = y;
        }
        void showdata() {
            cout << "a: " << a << "  b: " << b << endl;
        }
        int big () {
            if (a > b) {
                return a;
            } else {
                return b;
            }
        }
};

int main() {

    test t;
    t.readdata(10, 5);
    t.showdata();
    cout << t.big();
}