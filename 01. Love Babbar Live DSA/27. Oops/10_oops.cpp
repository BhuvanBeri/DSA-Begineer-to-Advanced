// operator overloading for (+) operator

#include<iostream>
using namespace std;

class Param{

    public:
        int val;
            // operator+ means (+) symbol of object1 + object2
        void operator+(Param& obj2) {   // operator overloading 
            int value1 = this->val;
            int value2 = obj2.val;
            cout << (value2-value1) << endl;
        }
};

int main() {

    Param object1, object2;
    object1.val = 7;
    object2.val = 2;
    // This should print the difference between them even when + is used.
    // obj1 is being treated as current object and obj2 is being treated as input parameter in operator+ function
    object1 + object2;
    return 0;
}