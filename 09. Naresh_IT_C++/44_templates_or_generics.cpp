// #include<iostream>
// using namespace std;

// int sum (int x, int y) {
//     return x + y;
// }

// float sum (float x, float y) {
//     return x + y;
// }

// to reduce this operation size, we need something to declare one function and use all this operation.
// this is where we use templates or generics.
// it is use of one function for several functions to be used.
// we can use function templates / generics and class templates / generics

// advantage :- program size is reduced

#include<iostream>
using namespace std;

// template <class T1, class T2>   // for multiple classes to work with 

// template <class T1>     // for working with single class
// return_type fun_name (parameter)
// {
//     // body
// }

template <class t>  // suppose t is float/int
t sum (t a, t b)    // t is return_type and a,b are variables
{
    return a+b;
}

int main() {

    cout << "Int sum = " << sum(5,9) << endl;
    cout << "Float sum = " << sum(1.1, 2.2) << endl;
}