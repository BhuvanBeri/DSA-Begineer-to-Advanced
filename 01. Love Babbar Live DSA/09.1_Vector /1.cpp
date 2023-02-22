#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> arr;

    // to check how much size the vector is taking
    int ans = (sizeof(arr)/sizeof(int));    // this will be compiler dependent
    cout << ans << endl;
    cout << arr.size() << endl;      // tells elements it is holding right now .
    cout << arr.capacity() << endl; // tells total elements it can store (even those whose space is empty)

    // insert
    arr.push_back(4);
    arr.push_back(6);

    //print
    for (int i=0; i<arr.size(); i++) {
        cout << arr[i] << endl;
    }
    cout << endl;

    // remove last element
    arr.pop_back();

    //print
    for (int i=0; i<arr.size(); i++) {
        cout << arr[i] << endl;
    }
    cout << endl;

    // initially having all elements as -1. In normal case it will be 0
    vector<int> brr (10, -1);   // telling how much element we want to have in this vector. Size and capacity will be same in this case
    cout << "Size of b " << brr.size() << endl;
    cout << "Capacity of b " << brr.capacity() << endl;

    //print
    for (int i=0; i<arr.size(); i++) {
        cout << arr[i] << endl;
    }
    cout << endl;

    vector<int> crr{10,20,30,40};
    //print
    for (int i=0; i<arr.size(); i++) {
        cout << arr[i] << endl;
    }
    cout << endl;

    cout << "Vector crr is empty or not: " << crr.empty() << endl;

    

    return 0;
}