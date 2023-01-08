// rule: constant should be provided only once when being declared.

// syntax: const datatype variable_name = value;
// eg: const int a = 100;
// constant means fixed value which cannot be changed
// to initialize value to const member: it should be done with constructor of same class.

#include<iostream>
using namespace std;

class simple_interest {

    float p;
    int t;
    const float r;
    public:
        simple_interest() : r(2.5) // constructor : data member (value to be provided to that data member)
        {

        }
        void read (float p, int t) {
            this -> p = p;
            this -> t = t;
        }
        float show () {
            return (p*t*r)/100;
        }
};

int main() {

    simple_interest s;
    s.read(1000, 10);
    cout << s.show();
}