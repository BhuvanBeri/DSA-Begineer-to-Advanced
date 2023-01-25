#include<iostream>
#include<vector>
using namespace std;

// brute force

bool isPrime(int n) {   // perfectly divides i.e. either divides with 1 or itself
    // TC - O(square_root(n))
    for (int i=2; i*i<=n; i++) {    // instead of 2 to n; to be fast
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}

// optimized --> (Sieve of eratosthenes (SOE)) is its name
// TC - O(log(log n))

bool isPrimeUsingSOE(int n) {

    int count = 0;
    vector <bool> prime(n+1, true);  // create vector having (n+2) size as true as default value i.e. initially take every index prime
    prime[0] = prime[1] = false;    // marking prime at 0,1 index = false i.e. 0,1, non prime mark krdo

    for (int i=2; i<n; i++) {   // table wise mark non prime
        
        if (prime[i] == true) {

            // in a way checking and setting values in the table of "i" false
            // except original "i" value
            for (int j=2*i; j<n; j=j+i) {   // table wise marking
                prime[j] = false;   // marking non prime values as false at given index
            }

        }

        if (prime[i] == true) { // prime[i] == true
            count++;
        }
        
    }
    return count;
}

int main() {

    cout << "Is prime or not?: " << isPrime(43) << endl;
    cout << "Is prime or not?: " << isPrimeUsingSOE(43) << endl;
    return 0;
}