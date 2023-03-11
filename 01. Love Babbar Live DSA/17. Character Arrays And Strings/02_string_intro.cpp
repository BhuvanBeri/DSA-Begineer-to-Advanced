#include<iostream>
#include<cstring>
#include<map>
using namespace std;

bool compareString(string a, string b) {

    if (a.length()!= b.length()) {
        return false;
    }
    else {
        int j=0;

        for (int i=0; i<a.length(); i++) {
            if(a[i]!=b[i]) {
                return false;
            }
            j++;
        }
    }
    return true;
}

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

    cout << "Length of string a: " << a.length() << endl;
    cout << "IsEmpty? " << a.empty() << endl;

    a.push_back('A');
    cout << a << endl;

    cout << "Answer is " << checkAnagram(a, b) << endl;
    cout << "Answer is " << checkAnagramUsingMap(a, b) << endl;

    a.pop_back();
    cout << a << endl;

    cout << "Substring of babbar: " << a.substr(1, 3) << endl; // --> start point, total elements needed from start point (get a small component or substring from long string)
    
    cout << "Comparison 2 strings: ";
    if(a.compare(b) == 0) {
        cout << "A and B are exactly same strings" << endl;
    } else {
        cout << "A and B are not same" << endl;
    }

    string x = "abcd";  // first character of x is smaller than first character of y. So output will end in -ve 1
    string y = "bcde";
    cout << x.compare(y) << endl;

    string x1 = "cbcd";  // first character of x is greater than first character of y. So output will end in +ve 1
    string y1 = "bcde";
    cout << x1.compare(y1) << endl;

    string x2 = "abcd";  // Both are same so output will be 0
    string y2 = "abcd";
    cout << x2.compare(y2) << endl;

    string sentence = "hello kaise ho saare";
    string target = "kaise";
    cout << sentence.find(target) << endl;  // gives starting index of target found in main sentence

    if(sentence.find(target) == string::npos) { // npos = not found / no position found
        cout << "Not Found" << endl;
    }

    string str = "This is my first message";
    string word = "Bhuvan";
    // replace this with bhuvan.
    
    str.replace(0, 4, word); // starting index, no. of characters to remove, target character/string to replace.
    cout << str << endl;

    string str1 = "abcderfasfghj";
    str1.erase(0,4); // starting index, no. of chars to delete
    cout << str1 << endl;

    return 0;
}