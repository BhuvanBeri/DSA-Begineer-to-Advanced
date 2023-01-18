#include<iostream>
#include<cstring>
using namespace std;

char flip(char expected) {
    if (expected == '0') {
        return '1';
    } else {
        return '0';
    }
}

int getFlips(string str, char expected) {

    int countFlips = 0;

    for (int i=0; i<str.length(); i++) {

        if (str[i] != expected) {
            countFlips++;
        }
        expected = flip(expected);  // to change expected value in next term
    }
    return countFlips;
}

int main() {

    string str = "0010";

    //if ans start with 0
    int ans0 = getFlips(str,'0');
    int ans1 = getFlips(str,'1');   // if starts with 1

    int ans = min(ans0, ans1);      // to find min number of flips in both cases
    cout << "Answer is: " << ans << endl;
}