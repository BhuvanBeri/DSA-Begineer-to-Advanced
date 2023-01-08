// it is a non member function of a class but is able to access private data of a class
// it is against the principle of data hiding, which is the advantage of using class and oops.
// so only use friend functions when it is absolutely necessary
// rule 1: friend function name can be anything.
// rule 2: no rule to be declared in public, private or protected. it can be declared anywhere.
// because it is not a member of a class
// rule 3: friend function declaration should be done inside a class with friend keyword.
// rule 4: friend function definition should be done outside of a class without friend keyword.
// rule 5: friend function can be introduced to any number of classes.
// rule 6: friend function have objects as arguments.
// rule 7: friend function are called like normal function.

#include<iostream>
using namespace std;

class sample {

    int a, b;
    friend void print(sample);  // sending object as argument to friend function
    
};

void print (sample s) {

    s.a = 10;   // since it is only a friend, we will have to provide object name.variable name
    s.b = 20;
    cout << "a = " << s.a << endl;
    cout << "b = " << s.b << endl;

}

int main() {

    sample s;
    print(s);
}