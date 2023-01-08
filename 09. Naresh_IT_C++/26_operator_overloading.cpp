// syntax: [return datatype] classname::operator(keyword) symbol(operator) (argument if any) {body}

// overloading comparison (==) operator

#include<iostream>
using namespace std;

// class test {    // normal code without operator overloading

//     int a;
//     public:
//         void get() {
//             cin >> a;
//         }
//         void compare(test t2) {
//             if (a == t2.a) {
//                 cout << "Objects are equal" << endl;
//             } else {
//                 cout << "Objects are not equal" << endl;
//             }
//         } 
// };

class test1 {   // with operator overloading

    int a;
    public:
        void get() {
            cin >> a;
        }
        void operator == (test1 t2) {   // in place of function we are using an operator here
            if (a == t2.a) {
                cout << "Objects are equal" << endl;
            } else {
                cout << "Objects are not equal" << endl;
            }
        } 
};

int main() {

    // // without operator overloading
    
    // test t1, t2;
    // cout << "Enter first object a value" << endl;
    // t1.get();
    // cout << "Enter second object a value" << endl;
    // t2.get();
    // t1.compare(t2);

    // with operator overloading

    test1 t1, t2;
    cout << "Enter first object a value" << endl;
    t1.get();
    cout << "Enter second object a value" << endl;
    t2.get();
    t1 == t2;
}