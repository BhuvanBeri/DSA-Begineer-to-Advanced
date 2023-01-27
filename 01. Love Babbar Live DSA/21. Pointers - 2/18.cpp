#include<iostream>
using namespace std;
int main() {
    
    int ***r, **q, *p, i=8;
    p=&i;   // address of i = 8
    (*p)++; // 8++ = 9
    q=&p;   // address of p holding address of i
    (**q)++;    // 9++ = 10
    r=&q;   // address of q 
    cout << *p << " " << **q << " " << ***r;
}