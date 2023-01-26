#include<iostream>
using namespace std;

void func(int *p) {
    // p = p+1; // values would be same after func. call by value
                    // changes on address won't be done.

    *p = *p + 1;    // values would change. Change is made 
                    // in *p that is 5 (value at &a) through copy
                    // created by func.
}

int main() {

    int a = 5;
    cout << "Address of a: " << &a << endl;

    // create a pointer
    int *p = &a;    // p is a pointer pointing to integer data. &a gives address of variable a
    
    cout << "Size of p: " << sizeof(p) << endl;
    cout << "Value of p: " << *p << endl;   // * means dereference operator.
                                            // * gives value of address pointed by p
    // int *p;  --> Dangling pointer (Garbage Value) (It is dangerous)
    // int *p = 0; --> To prevent dangling pointer
    // p = &a;  --> Same as done in line 10

    // int *p = 0;
    // cout << *p;  --> Gives segmentation fault (Accessing memory which does not exist)

    cout << "Before " << p << endl;
    cout << "Before " << *p << endl;
    func(p);
    cout << "after " << p << endl;
    cout << "after " << *p << endl;

    // Dangling Pointer --> Pointer pointing to random memory
    // which is pointing to either free or any random memory.
    
    char c = 'z';
    char *ch = &c;
    cout << "size of ch: " << sizeof(ch) << endl;   // char type
    cout << "Size of p: " << sizeof(p) << endl;     // int type

    // Thus, pointer size will always be 8 wether char or int type.
    
    cout << "value of ch: " << *ch << endl;

    char chh[5] = "abcd";
    char *point = chh;
    cout << "*point returns: " << *point << endl;
    cout << "*chh returns: " << *chh << endl;
    cout << "point returns: " << point << endl; // in int it prints address of variable, in char array it prints entire string
    
    char charac = 'B';
    char *ctr = &charac;
    cout << "ctr returns: " << ctr << endl; // normally it should print address stored in ctr
                            // but for char pointer, cout is defined to give output of value that is characters
                            // stored inside address available to ctr and give all elements until it gets '\0' character.
    return 0;
}