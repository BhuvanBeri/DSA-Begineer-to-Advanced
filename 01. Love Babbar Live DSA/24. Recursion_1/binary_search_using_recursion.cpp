#include<iostream>
#include<vector>
using namespace std;

int binarySearchUsingRecursion(vector<int>& v, int s, int e , int key) {
    // when working with recursion we are sending array with reference even though array itself
    // use pass by reference. This is because without reference explicitly adding, for every recursion
    // the call stack will inturn allocate new memory space every time
    // for 100 memory of first entry in function, if we are doing it a 100 times (recursion). The 
    // call stack will inturn use about 10000 bytes of memory. By adding reference in function
    // it will only we refered in memory of call stack with different name but will work on same 
    // memory space. 

    // base case
        // case 1 - key not found
    if(s > e) {
        return -1;
    }

    int mid = s + (e-s)/2;

        // case 2 - key found
    if(v[mid] == key) {
        return mid;
    }

    // 1 case solve krdo baaki recursion sambhaal lega
    // arr[mid] < key than move right
    if(v[mid] < key) {
        int ans = binarySearchUsingRecursion(v, mid+1, e, key);
        return ans;
    }

    // arr[mid] > key than move left
    else {
        int ans = binarySearchUsingRecursion(v, s, mid-1, key);
    }

}

int main() {

    vector<int> v{10,20,30,40,50,60,90,99};
    int target = 99;

    int n = v.size();
    int s = 0;
    int e = n-1;
    int ans = binarySearchUsingRecursion(v,s,e,target);

    cout << "Answer is: " << ans << endl;

    return 0;
}