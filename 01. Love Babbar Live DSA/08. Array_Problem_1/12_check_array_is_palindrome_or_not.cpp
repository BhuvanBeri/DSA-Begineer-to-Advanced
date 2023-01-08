#include<iostream>
using namespace std;

bool isPalindrome (int arr[], int size) {

    int i=0;
    int j=size-1;

    while(i<j) {
        if (arr[i]!=arr[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {

    int arr[] = {1,2,1,2,1};

    cout << "Given Array is Palindrome (1) or Not (0): " << isPalindrome(arr, 5) << endl;

    return 0;  
}