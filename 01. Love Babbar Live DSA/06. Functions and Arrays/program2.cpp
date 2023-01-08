#include<iostream>
using namespace std;

void suresh (int k) {

    cout << "Suresh integer " << k << endl;
}

void rahul(int m) {

    cout << "Rahul integer " << m << endl;
    m++;
    suresh(m);
}

void ramesh (int n) {

    cout << "Ramesh integer " << n << endl;
    n++;
    rahul(n); 
}

int main() {

    int n = 21;

    ramesh(n);

    cout << "Main integer " << n << endl;

    return 0;
}