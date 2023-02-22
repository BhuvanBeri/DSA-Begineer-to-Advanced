#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int> arr) {

    int ans = 0;
    for (int i=0; i<arr.size(); i++) {
        ans = ans^arr[i];
    }
    return ans;
}

int main() {

    // find unique element in array.

    int n;
    cout << "Enter the no. of elements: ";
    cin >> n;

    vector<int> arr;
    cout << "Enter the elements: " << endl;
    for (int i=0; i<arr.size(); i++) {
        cin >> arr[i];
    }

    int uniqueElement = findUnique(arr);

    cout << "Unique element is: " << uniqueElement << endl;

    return 0;
}