#include<iostream>
using namespace std;

class c1 {

    public:
        void c1fun() {
            cout << "C1 class function" << endl; 
        }
};
class c2 : public virtual c1 {  // here the changes are made as stated in int main code.
    public:
        void c2fun() {
            cout << "C2 class function" << endl;
        }
};
class c3 : public virtual c1 { // here the changes are made as stated in int main code

    public:
        void c3fun() {
            cout << "C3 class function" << endl;
        }
};
class c4 : public c2, public c3 {

    public:
        void c4fun() {
            cout << "C4 class function" << endl;
        }
};

int main() {

    c4 obj;
    obj.c1fun();// will get error here because of so many duplicate copies through c2, c3, c4 combined. // so add virtual in c2 during inheritance.
    obj.c2fun();
    obj.c3fun();
    obj.c4fun();
}