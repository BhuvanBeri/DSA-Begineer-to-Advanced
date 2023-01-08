#include<iostream>
using namespace std;

template <class b, class b2>    // sending 2 different types of input
float sum(b x, b2 y){   // example x of float, y of int or vice versa
    return x+y; // whatever out of float or int is sent, output will be float type.
}

int main() {
    cout << "Int sum = " << sum(10,20) << endl;
    cout << "Float sum = " << sum(1.2, 3.2) << endl;
    cout << "Int, Float sum = " << sum(5, 2.5) << endl;
    cout << "Float, Int sum = " << sum(1.0, 2) << endl;
}