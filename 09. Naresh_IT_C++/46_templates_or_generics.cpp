// use of template functions in arrays

#include<iostream>
using namespace std;

template <class t>
t sum(t a[], int size)    // a[] tells that template is of array type, size for array is always int type
{
    t s=0;  // sum is of return type t
    for (int i=0; i<size; i++) {
        s = s + a[i];
    }
    return s;   // returns sum of elements in array
}

int main() {
    int x[5] = {1,2,3,4,5};
    float y[3] = {1.1, 2.2, 3.3};
    cout << "Int array elements sum = " << sum(x, 5) << endl;
    cout << "Float array elements sum = " << sum(y, 3) << endl;
}