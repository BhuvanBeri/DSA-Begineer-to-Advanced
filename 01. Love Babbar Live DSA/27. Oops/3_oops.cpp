// Inheritance

#include<iostream>
using namespace std;

class Ani {  // achieving encapsulation
    public:
        int age;
        int weight;
};


class Dog:public Ani {  // inheritance     (Single Inheritance = 1 parent 1 child)
    public:
    void print() {
        cout << this->age;
    }
};

int main() {
    Dog d1;
    // cout << d1.age << endl;
    d1.print();
    return 0;
}