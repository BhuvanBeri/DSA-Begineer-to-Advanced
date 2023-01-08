#include<iostream>
using namespace std;

int main() {

    // char *message = "Hello world!";     // cannot convert string constant literal to char*
    const char *message = "Hello world!"; // using const we prevent any problem.
    // now we cannot update or modify the message pointer as it is stated constant.
    // *message = "B";

    cout << "Message: " << message << endl;     // will give complete message as output.
    cout << "*Message: " << *message << endl;   // will only give first value of message pointer.

    //Allow users to modify the string
    char message1[] = "Hello world!";   // modification can only work on normal char variable having string literal, not for pointer variable.
    message1[0] = 'B';
    cout << "Message1: " << message1 << endl;


    return 0;
}