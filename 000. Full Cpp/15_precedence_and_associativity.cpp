#include<iostream>
using namespace std;

// highest precedence = () [] {}
// higher precedence = * / %     --> associtivity = left to right associativity
// lower precedence = + -        --> associtivity = left to right associativity
// except this it majorly follows bodmas.        

int main() {

    int a = 6;
    int b = 3;
    int c = 8;
    int d = 9;
    int e = 3;
    int f = 2;
    int g = 5;

    int result = a + b * c -d/e -f + g; // 6 + 24 - 3 -2 + 5

    cout << "result: " << result << endl;

    result = a + (b*c) -(d/e) -f + g;   // using bracket always saves user and system time.
    cout << "result: " << result << endl;

    result = a/b*c +d -e + f; // 16 + 9 - 3 + 2
    cout << "result: " << result << endl;

    result = (a+b) * c -d/e -f + g; // 9 * 8 - 3 - 2 + 5;
    cout << "result: " << result << endl;

    return 0;
}