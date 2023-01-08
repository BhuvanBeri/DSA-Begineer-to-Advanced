// how to differenciate data members with member function's local variables

#include<iostream>
using namespace std;

class test {

    int a, b;
    public:
        void show (int a, int b) 
        {
            this -> a = a; // now compiler will understand this -> a means class's a and will not give garbage value.
            (*this).b = b; // same meaning different way.
        }
        void display () {
            cout << a << " " << b << endl;
        }
};

int main() {

    test t; 
    t.show(10, 5);
    t.display();
}