// Ranged based for loops

#include<iostream>
using namespace std;

int main() {

    //Declare an array of ints
    int score [7];    // Junk Data
    // we cant have array of same name.
    int salarie[5] = {1,2,3,4,5}; // declare and initialize at the same time
    double salaries [5] = {1.4, 44.3, 82.5, 32.2, 93.2}; // double type array will only hold double type elements
    int families [5] = { 1, 2, 3}; // last 2 values will be 0 
    int numbers [] = { 1, 2, 3, 4, 5, 6, 7, 8}; // compiler will automatically know size of array
    
    for (auto i : numbers) {    // ranged based array is best when we don't know array size
        cout << "Number " << i << endl;
    }

    int scores [] = {2,5,8,2,5,6,9};
    int sum = 0;

    for (int i : scores) {  // will go from 0 to element size of array
        sum += scores[i];   // will get sum of all elements
    }
    cout << "Sum " << sum << endl;
}