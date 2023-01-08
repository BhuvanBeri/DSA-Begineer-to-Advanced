// signed, unsigned, short, long.
// signed and unsigned modifiers only work for integers.

#include<iostream>
using namespace std;

int main() {

    int value1 = 10;
    int value2 = -300;

    cout << sizeof(value1) << " is size of int type" << endl;

    signed int value3 = 10; // can store negative and positive numbers.
    signed int value4 = -300;

    unsigned int value5 = 10; // unsigned can store only positive numbers, it will give error if negative numbers are stored.

    cout << sizeof(value4) << " is size of signed int type" << endl; 
    cout << sizeof(value5) << " is size of unsigned int type" << endl;

    long int value6 = 24;   // either 4 or 8 bytes
    cout << sizeof(value6) << " is size of long int type" << endl;

    long long int value7 = 234; // confirmed 8 bytes size.
    cout << sizeof(value7) << " is size of long long int type" << endl;

    short int value8 = 10; // can store only 2 bytes of data.
    cout << sizeof(value8) << " is size of short int type" << endl;

    // note that we cannot use short and long together for same variable due tp different function of both.

    // also unsigned and signed don't change data size, only long and short can impact that.
    return 0;

}