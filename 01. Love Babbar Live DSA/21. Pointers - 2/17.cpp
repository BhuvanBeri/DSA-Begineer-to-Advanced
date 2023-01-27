#include<iostream>
using namespace std;

int f (int x, int *y, int **z) { // 4, address of c, address of a

    int p,q;
    **z += 1;   // c = 5;
    q = **z;    // q = 5;
    *y += 2;    // c = 7;
    p = *y;     // p = 7;
    x += 3;     // x=c = 7;
    return x+p+q;   // 7 + 7 + 5 = 19
}

int main() {
    
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c,b,a);
}