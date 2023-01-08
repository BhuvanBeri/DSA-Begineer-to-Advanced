#include<iostream>
using namespace std;

int main() {

    //Declare an array of ints
    int scores [10];    // Junk Data
    int salaries[5] = {1,2,3,4,5}; // declare and initialize at the same time
    double salaries [5] = {1.4, 44.3, 82.5, 32.2, 93.2}; // double type array will only hold double type elements
    int families [5] = { 1, 2, 3}; // last 2 values will be 0 
    
    //Read data.
    cout << "Scores[0]: " << scores[0] << endl;

    //loop to read data
    for (int i = 0; i < 10; i++) {
        cout << "Scores[" << i << "]: " << scores[i] << endl;
    }

    //Write data into an Array
    scores[0] = 20;

    // Other way of writing data into an Array
    cout << "Enter values in array: "<< endl;
    for (int i = 0; i < 10; i++) {
        cin >> scores[i];
    }

    cout << "Entered Data in Array Scores is: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Scores[" << i << "]: " << scores[i] << endl;
    }
}