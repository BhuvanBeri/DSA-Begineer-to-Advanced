#include<iostream>
using namespace std;

bool checkPalindrome(int arr[], int size) {
    int i=0;
    int j=size-1;

    while(i<j) {
        if (arr[i]==arr[j])
        {
            j--;
            i++;
        }
        else {
            return false;
        }
    }
    return true;
}

int main() {

    int arr[] = {1,2,3,3,4,2,1};
    cout << "Palindrome or not " << checkPalindrome(arr, 7) << endl;
    return 0;
}