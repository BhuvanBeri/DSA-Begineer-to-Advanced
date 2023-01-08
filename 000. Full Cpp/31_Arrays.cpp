#include<iostream>
using namespace std;

int main() {

    int array[10];  //declaring array storing 10 elements at max;
        // without giving values to array it will store garbage
    array[0] = 1;   // array starts from 0 and ends at element_size - 1
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    array[5] = 6;
    array[6] = 7;
    array[7] = 8;
    array[8] = 9;
    array[9] = 10;

    double salaries[5] = {12.8, 14.2, 19.4, 22.2, 94.2};    // all elements are to be of same type.

    // for (int i = 0; i < 10; i++) {   // way to get input and store elements in array
        // cin >> array[i];
    // }

    int class_sizes[] = {10, 13, 12, 52, 8};

    for (auto value : class_sizes) {    // automatically sets datatype to value variable and runs from 0 to elements detected in class_sizes
        cout << "value: " << value << endl;
    }

    const int multipliers[] = {1, 2, 3};
    // multipliers[1] = 20; <-- not allowed to change element since array is set as const.

    for (int i = 0; i < 10; i++) {
        cout << "Array element at index " << i << " is " << array[i] << endl;
    }

    return 0; 
}