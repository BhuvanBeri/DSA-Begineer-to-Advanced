#include<iostream>
using namespace std;

int main() {

    int scores[] = {10, 12, 15, 11, 18, 17, 22, 23, 24};
    
    // we cant get size of array directly in this code but to get it:
    //way 1. efficient way
    for (auto i : scores) { //range based for loop
        cout << "Scores [" << i << "]: " << scores[i] << endl;
    }
    //way 2.
    // int count = size(scores); <-- std::size (C++17)

    //way 3. Not efficient either especially when elements are less than total size.
    cout << "sizeof(scores): " << sizeof(scores) << endl;
    cout << "sizeof(scores[0]): " << sizeof(scores[0]) << endl;
    cout << "Size: " << sizeof(scores)/sizeof(scores[0]) << endl; 

    return 0;
}