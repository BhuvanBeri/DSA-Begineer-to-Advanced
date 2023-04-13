// abstraction = implementation hiding
// encapsulation, polymorphism are a subset of abstraction (i.e. abstraction is like parent of them all)
// abstraction = a container containing multiple things (example, gift box)[sounds similar to encapsulation but encapsulation is abstraction and abstraction is not encapsulation]
// read abstraction and encapsulation explaination on stack overflow

// DYNAMIC MEMORY ALLOCATION
// Stack memory = to store local variable and function parameter (this memory is small by default)[this can be changed by changing compiler setting or OS configuration]
// Heap memory  = [this memory is larger than stack by default] 

// int* a = new int;
// char* c = new char;
// float* f = new float;
// int* arr = new int [n];  // for 1d array
// int** arr = new int*[row]; // for 2d array     // defining no of rows
// for (int i=0; i<row; i++) {                    // defining no of cols
//      arr[i] = new int[col];
// }

#include<iostream>
using namespace std;

int main() {

    int row = 5;
    int col = 3;
    int** arr = new int*[row];
    for (int i=0; i<row; i++) {
        arr[i] = new int[col];
    } 
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // deallocate
    for(int i=0; i<row; i++) {
        delete []arr[i];
    }
    delete []arr;

    // using vector for 2d array
    // vector<vector<int>> arr(5, vector<int>(6,0));   // 5*6 matrix
    // for(int i=0; i<5; i++) {
    //     for(int j=0; j<6; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}