#include<iostream>
#include<map>
using namespace std;

int firstNonRepeating(int arr[], int n) 
{ 
    map<int, int> frequency;
    
    for(int i = 0; i < n; i++)
        frequency[arr[i]]++;
        
    for(int i = 0; i < n; i++)
        if(frequency[arr[i]] == 1)
            return arr[i];
            
    return -1;
} 

int main() {
    int arr[] = {-1, -2, -1, 3, 2};
    cout << firstNonRepeating(arr, 5);
}