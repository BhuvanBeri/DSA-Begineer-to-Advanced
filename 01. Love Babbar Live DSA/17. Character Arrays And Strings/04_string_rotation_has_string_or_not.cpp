#include<iostream>
#include<cstring>
using namespace std;

// string::npos --> no position means no match

bool checkRotation(string a, string b) {

    if (a.length()!=b.length()) {
        return false;
    }
    string temp = a+a;              // adding string a in itself.
    if (temp.find(b) == string::npos) {    
        return false;
    }
    else {
        return true;
    }
}

int main() {

    string a = "babbar";
    string b = "bbarba";

    cout << "Answer is: " << checkRotation(a,b);
}