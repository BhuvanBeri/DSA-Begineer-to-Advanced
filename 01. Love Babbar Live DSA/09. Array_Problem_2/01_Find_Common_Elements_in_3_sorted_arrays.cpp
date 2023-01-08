#include<iostream>
#include<vector>
using namespace std;

vector <int> commonElements(int arr1[], int arr2[], int arr3[], int size1, int size2, int size3) {

    int p1=0, p2=0, p3=0;

    vector <int> result;

    while (p1 < size1 && p2 < size2 && p3 < size3) {
        if (arr1[p1] == arr2[p2] && arr2[p2] == arr1[p3]) {
            if (result.empty() || result.back() != arr1[p1]) {
                result.push_back(arr1[p1]);
            }
            p1++, p2++, p3++;
        }
        else if (arr1[p1] <= arr2[p2] && arr1[p1] <= arr3[p3]) {
            p1++;
        }
        else if (arr2[p2] <= arr3[p3]) {
            p2++;
        }
        else {
            p3++;
        }
        
    }
    return result;
}

int main() {

    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {7,8,2,5};
    int arr3[] = {1,3,2,4,7};

    commonElements(arr1, arr2, arr3, 6, 4, 5);
}