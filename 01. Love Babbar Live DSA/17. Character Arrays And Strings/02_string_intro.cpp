#include<iostream>
#include<cstring>
#include<map>
using namespace std;

bool checkAnagram(string a, string b) {

    int freqArray[26] = {0};

    // increment count for string a
    for (int i=0; i<a.length(); i++) {
        char ch = a[i];
        int index = ch - 'a';   // to map char with int
        freqArray[index]++;     // incrementing the char mapped with int
    }

    // decrement count for string b
    for (int i=0; i<b.length(); i++) {
        char ch = b[i];
        int index = ch - 'a';
        freqArray[index]--; // decrementing the char mapped with int
    }

    for (int i=0; i>26; i++) {
        if (freqArray[i] != 0) {    // comparing if all chars of array are equal to 0 or not
            return false;
        }
    }
    return true;
}

bool checkAnagramUsingMap(string a, string b) {
    
    map<char, int> m;

    // increment count for string a
    for (int i=0; i<a.length(); i++) {
        char ch = a[i];
        m[ch]++;     // incrementing the char mapped with int
    }

    // decrement count for string b
    for (int i=0; i<b.length(); i++) {
        char ch = b[i];
        m[ch]--; // decrementing the char mapped with int
    }

    // for (auto i: m) {   // for auto i belongs to m
    //     if (i.second != 0) {
    //         return false;
    //     }
    // }

    for (char i = 'a'; i<='z'; i++) {
        if (m[i] != 0) {
            return false;
        }
    }
    return true;
}

int main() {

/*
    string str;
    
    cin >> str; // input is stored before space

    space, tab, newline acts as delimeter that is break
    

    getline(cin, str);  // will read input even after space.
    cout << str;
*/

    string a = "babbar";
    string b = "raabbb";
    cout << "Answer is " << checkAnagram(a, b) << endl;
    cout << "Answer is " << checkAnagramUsingMap(a, b) << endl;
    return 0;
}