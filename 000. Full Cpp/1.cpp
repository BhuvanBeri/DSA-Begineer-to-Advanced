#include<iostream> // iostream header file helps us to print and get input easily
using namespace std; // preprocessor directive used to define which type of namespace the compiler should look for while using common functions like cout, cin, endl etc. 

// <-- this is the one line comment.
/*
This is a multi line comment.
*/

int main() {    // main is the starting or entering point of cpp program
    std::cout << "Hello World!" << std::endl; // std is doing the work of defining the type of namespace we are using cout and endl from and its functionality is defined in it. 
    return 0;   // compiler sends message to the OS if compilation was successful or some error occured. After this the code compilation comes to an end and the code written after this point won't be considered.
}