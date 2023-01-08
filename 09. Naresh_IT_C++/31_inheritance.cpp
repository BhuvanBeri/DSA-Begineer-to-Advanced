// types of inheritance --> single, multilevel, multiple, hybrid, hierarchical inheritance

#include<iostream>
using namespace std;

class base {

    private:
        int x;
    public:
        int y;
    protected:
        int z;
};

class derived1 : public base {  // when derived class is given base class as public, then base class's public and protected data becomes public for derived.

    public:                    // private base class members are not available because of data hiding concept
        int y;
    protected:
        int z;
};

class derived2 : private base { // when class is derived in private mode then public and protected data of base becomes private in derived
    private:                    // private base class members are not available because of data hiding concept.
        int y, z;
};

int main() {


}