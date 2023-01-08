#include<iostream>
using namespace std;

int main() {

    char message[5] = {'H','E','L','L','O'};    // not good way of coding.
/*  //also not safe way of initializing characters like this without null character
    for (auto i : message) {
        cout << i;
    }
    cout << endl;

    //change characters in our array
    message[1] = 'e';

    for (auto i : message) {
        cout << i;
    }
    cout << endl;
    */

   // simple way to print character arrays.
   cout << "Message: " << message << endl; // there will be a problem of additional characters until we add a null character in main array.

    char messages[6] = {'H','E','L','L','O','\0'}; // adding null terminator at end.
    cout << "Message: " << messages << endl;    // now there will no problem of additional characters getting printed.
    cout << "sizeof(messages): " << sizeof(messages) << endl;

    // other way is to add 1 size extra in array and not add null character ourseves, then compiler will autofill null character there.

    char message2[6] = {'H','E','L','L','O'};   // however this is still not a goof way of coding as it will not be recognized by compiler as a perfect c string......................
    cout << "Message: " << messages << endl;
    cout << "sizeof(message2): " << sizeof(message2) << endl;

    //String literal
    char message4[] = {"Hello"}; // other way of using character is in form of a string literal. no need to add null terminator ourself
    cout << "message4: " << message4 << endl;
    cout << "sizeof(message4): " << sizeof(message4) << endl;   // size output will be 6 not 5 because null terminator will be added by compiler itself

    int numbers[] = {1, 2, 3, 4, 5};    
    cout << "numbers: " << numbers << endl; //we can't directly print integers from array.
    //more about it in bounds Arrays
    
    return 0;
}