// character datatype works with ascii characters as values;
// char is also 1 byte.
// 1 byte in memory = 2^8 = 256 different values (0 ~ 255)

#include<iostream>
using namespace std;

int main() {

    char value = 65; // ascii character code for 'A';
    char value2 = 'a'; // ascii character code for 'a' is 97; char is case-sensitive.
    cout << "Value: " << value << endl;
    cout << "value(int): " << static_cast<int>(value2) << endl; // static_cast is used to convert into datatypes.

    cout << "Size of char datatype is: " << sizeof(char) << endl;
    return 0; 
}