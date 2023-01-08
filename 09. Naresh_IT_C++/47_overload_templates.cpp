#include<iostream>
using namespace std;

template <class t>
t sum (t a, t b) {
    return a + b;
} 

template <class t>
t sum (t a, t b, t c)   // template overloading = same function name but different parameters
{
    return a + b + c;
}

int main() {

    cout << "Two int sum = " << sum(10, 20) << endl;
    cout << "Two floats sum = " << sum(10.3, 20.5) << endl;
    cout << "Three int sum = " << sum(10, 20, 30) << endl;
    cout << "Three floats sum = " << sum(10.1, 20.2, 30.3) << endl;
}