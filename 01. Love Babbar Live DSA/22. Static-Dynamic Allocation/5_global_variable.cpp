#include<iostream>
using namespace std;

int score = 0;  // global variable (not good, anyone can change it)
                // Best alternative --> Reference Variable.
void fun1 () {
    cout << score << endl;
    score++;
    cout << "one" << endl;
}

void fun2() {
    cout << score << endl;
    score += 2;
    cout << "two" << endl;
}

void fun3() {
    cout << score << endl;
    score += 3;
    cout << "Three" << endl;
}

int main() {

    cout << score << endl;
    fun1();
    fun2();
    fun3();
    cout << score << endl;
}