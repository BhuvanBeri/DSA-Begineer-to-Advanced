#include<iostream>
using namespace std;

int main() {

    const int size = 10;
    //Different ways you can declare an array
    //Dynamically and how they are initialized

    double *p_salaraies = new double[size]; // will contain junk data
    int *p_students = new(std::nothrow) int[size]{}; // All values will be 0
    double *p_scores = new(std::nothrow) double[size]{1,2,3,4,5}; //except first 5, rest will be 0.


    //nullptr check and use allocated array
    if(p_scores) {
        cout << "size of score (its a regular pointer): " << sizeof(p_scores) << endl;
        cout << "successfully allocated memory for scores." << endl;

        //Print out elements. Can use regular array access notation, or pointer arithmetic
        for (int i{}; i<size; i++) {
            cout << "Values: " << p_scores[i] << " : " << *(p_scores + i) << endl;
        }
    }

    delete [] p_salaraies; // [] is used because we are deleting dynamically allocated array
    p_salaraies = nullptr;

    delete [] p_students;
    p_students = nullptr;

    delete [] p_scores;
    p_scores = nullptr;

    //Static arrays Vs dynamic arrays.
    cout << "========================================" << endl;

    int scores[10] = {1,2,3,4,5,6,7,8,9,10};
    // cout << "scores size: " << std::size(scores) << endl;

    for (auto i: scores) {
        cout << "Values: " << i << endl;
    }

    int *p_scores1 = new int[10] {1,2,3,4,5,6,7,8,9,10};

    // for (auto r: p_scores) { // won't run, compiler error. p_scores is not array but pointer, pointing to array, 
    //     cout << "Values: " << r << endl; //thus we can't use ranged based loop on pointer array.
    // }

    return 0;
}