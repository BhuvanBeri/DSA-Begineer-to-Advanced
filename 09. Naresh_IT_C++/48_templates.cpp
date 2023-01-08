// using templates for class.

#include<iostream>
using namespace std;

template <class T>
class test {
    T a,b;      // dataype data_member, t will be int(dataype) if user is inputting int type data and so on
    public:
        void get() {    // member function definition
            cin >> a >> b;
        }
        T sum();    // member function declaration
};
// when member function definition of class of template class is done outside then
template <class T>
T test <T> :: sum() {
    return a+b;
}

int main() {

    test <int> t1;   // t object created (with integer type) from test class
    test <float> t2;
    cout << "Enter 2 integers " << endl;
    t1.get();
    cout << "Sum = " << t1.sum() << endl;
    cout << "Enter 2 floats " << endl;
    t2.get();
    cout << "Sum = " << t2.sum() << endl;
}