// when function calls itself

// use --> when a big problem depend on same type of smaller problem
// it is where we use recursion.
// ex- factorial of 5 depends on factorial of 4 and so on
// 5! - 5*4!

// Types of recursion
// 1. Tail recursion --> Having recursive call at end of function
// 2. Head recursion --> Having recursive call before processing in function.

#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int factorial(int n) {  // base case
    
    if (n == 1) {   // assuming n > 0
        return 1;   // break statement
    }

    int smallerProblemAns = factorial(n-1);
    int biggerProblemAns = n * smallerProblemAns;

    return biggerProblemAns;
}

void print (int n) {

    if (n < 1) {
        return;   // break statement
    }
    cout << n << " ";

    print(n-1);
}
// pattern of printing changed from reverse to straight
// with change of 1 statement
// it is because of the way it gets in the stack.
// in above, printing is done first then it moves to next in stack
// in below, printing is done at end after the stack is completed
void print1 (int n) {

    if (n < 1) {
        return;   // break statement
    }

    print(n-1);

    cout << n << " ";

    
}

int max_ele(int arr[], int size) {

    if(size == 1) {
        return arr[0];   // break statement
    }

    return max(arr[size-1], max_ele(arr, size-1));
}

int expo(int n) {   // to get exponential ans of number

    if (n==0) {
        return 1;   // break statement
    }
    int smallerProblemAns = expo(n/2);
    if(n&1) {   // if odd
        return smallerProblemAns * smallerProblemAns * 2;
    }   
    else    // if even
        return smallerProblemAns * smallerProblemAns;
}

int main() {

    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    cout << "Factorial of n is " << factorial(n) << endl;

    print(5);
    cout << endl;
    print1(5);

    cout << endl;

    int arr[] = {1,4,2,6,8};
    cout << "Max element in array is " << max_ele(arr, 5);

    cout << endl;
    cout << "Exponential value is " << expo(10) << endl;

    return 0;
}