#include<iostream>
using namespace std;

void inct (int **ptr) {
    (**ptr)++;
}

int main() {
    
    int num = 10;
    int *ptr = &num;
    inct(&ptr);
    cout << num << endl;    // output will be 11
}