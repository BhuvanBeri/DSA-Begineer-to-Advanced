// static member functions are used to only operate static data members.
// static functions cannot work with non-static data members
// rule 1: static functions never associate with this operator.
// rule 2: static functions can be directly called by class name or object name.
// rule 3: static functions can't be constant or virtual or volatile.
// rule 4: static functions are not required to be called with object name


#include<iostream>
using namespace std;

class test {

    public:
        static void read (int x, int y) {
            if (x > y) {
                cout << "X is big" << endl;
            } else {
                cout << "Y is big" << endl;
            }
        }
};

// example 2

class sample {

    int a, b;
    public:
        void getdata() {
            cout << "Enter 2 integers" << endl;
            cin >> a >> b;
            cout << "a = " << a << endl;
            cout << "b = " << b << endl;
        }
};

// class sample1 { // error.

//     int a, b;
//     public:
//         static void getdata() {     // without static data members, static functions are not going to work.
//             cout << "Enter 2 integers" << endl;
//             cin >> a >> b;
//             cout << "a = " << a << endl;
//             cout << "b = " << b << endl;
//         }
// };

class sample2 {     // Will work.

    static int a, b;
    public:
        static void getdata() {
            cout << "Enter 2 integers" << endl;
            cin >> a >> b;
            cout << "a = " << a << endl;
            cout << "b = " << b << endl;
        }
};

int sample2 :: a;   // static data members are necessarily required to be defined outside class
int sample2 :: b;

// class sample3 {     // error.

//     static int a, b;
//     public:
//         static void getdata(int x) {
//             this -> a = x;      // static functions not supported with this operator.
//         }
// };

int main() {

    test t1;
    t1.read(10, 7);
    test :: read(20, 33);   // direct access static functions
                            // this type of accessing can only be done with static data members and static member functions only.
    sample s1;
    s1.getdata();
}