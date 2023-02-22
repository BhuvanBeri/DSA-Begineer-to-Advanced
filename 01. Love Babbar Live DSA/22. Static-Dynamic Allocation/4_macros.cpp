// piece of code in programming is replaced by given value.

// Disadvantage of macro --> Overhead.
// Advantages --> Does not take space, fast.

#include<iostream>
#define PI 3.14;    // macro (it also does not take space in memory)
using namespace std;

int main() {

    int r = 4;
    double area = PI * r * r;

    cout << "Area: " << area << endl;
}