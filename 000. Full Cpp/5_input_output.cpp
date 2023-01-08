#include<iostream>
#include<string>    // header file used to utilize functions of string class
using namespace std;

int main() {

    int n;  // declared a variable of int type.

    cout << "Enter the input ";
    cin >> n; // cin is used to get input from user and provide that to specified variable.

    int age = n;  // setting value of n as input to variable age.

    cout << "You entered " << n << endl; // cout is used to print output.

    cout << "The age of the kid is = " << age << endl;

    std::cerr << "Error Message : Something is wrong" << endl; // cerr is used to provide error message.

    std::clog << "Log message : Something happened" << endl; // cerr is used to log message.

    string name; // specifying variable name as a string type.

    cout << "Enter your name: "; 
    getline (cin, name);    // getline stores input even after entering space. normal cin will only collect input before space.

    cout << "Your name is : " << name << endl;

    int roll;
    char grade;

    cout << "Enter your roll number and grade ";
    cin >> roll >> grade;   // collecting multiple inputs 

    cout << "You entered: " << name << endl; 

    cout << "Hello " << name << " your age is " << age  << ". Your roll is: " << roll << " and your grade is: " << grade << endl;

    return 0;
}