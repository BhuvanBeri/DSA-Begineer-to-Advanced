// static is used whenever we have to share 1 data member through all objects
// of that class than we use static data members.
// static makes a data member into class member.

#include<iostream>
using namespace std;

class sample {

    static int count;   // static is used so that every new object created does not reset count to zero and move from 1 to 2 to 3 etc.
    public:
        sample () {
            count++;    // count will be incremented when constructor will be invoked by object creation.
            cout << count << " Object created" << endl;
        }
        ~sample () {
            cout << count << " Object deleted" << endl;
            count--;
        }
};

int sample :: count;    // will automatically set count to zero initially

int main() {

    sample s1, s2, s3;
}