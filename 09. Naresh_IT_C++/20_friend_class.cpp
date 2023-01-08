// to access whole data of a class to another class
// introduced class is called container class   (primary class)
// declared class (where we declared friend class) is called contained class
// this relationship is called composition. i.e. process of declaring object of one class within another class

#include<iostream>
using namespace std;

class test1 {

    int a, b;
    public:
        friend class test2;     // introduced test2 class as friend to test1 class to access a,b values of test1 from test2 class
        void getab() {
            cout << "Enter a,b values" << endl;
            cin >> a >> b;
        }
};

class test2 {   // already have access of a,b of test1 class

    public:
        void putab(test1 t1) {  // to access a,b of test1 class we will pass it as object to function of test2 class 
            cout << "a = " << t1.a << endl;
            cout << "b = " << t1.b << endl;
        }
};

int main() {

    test1 t1;
    test2 t2;
    t1.getab();
    t2.putab(t1);
}