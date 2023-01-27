#include<iostream>
using namespace std;

int main() {

    int a[] = {1,2,3,4};
    cout << *a << " " << *(a+1);
    // *a points to array a[0] = 1;
    // *(a+1) = a[0+1] = a[i] = 2;
}