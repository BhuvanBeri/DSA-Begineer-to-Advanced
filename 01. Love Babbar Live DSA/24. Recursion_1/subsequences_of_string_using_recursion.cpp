#include<iostream>
#include<vector>
using namespace std;

void printSubsequences(string str, string output, int i,vector<string>& v) {

    // base case
    if(i >= str.length()){
        cout << output << endl;
        v.push_back(output);    // to store all in one string
        return;
    }

    // 1 include call and 1 exclude call per recursion

    // exclude
    printSubsequences(str, output, i+1, v);    // simply ignoring the process and let index move to next character

    // include case
    output.push_back(str[i]);               // entering character at i index in output string
    // or output = output + str[i];         // both ways are simply concatenating character of str string into output string
    printSubsequences(str, output, i+1,v);
}

int main() {

    string str = "abc";
    string output = "";

    vector<string> v;   // to store all character subsequences

    int i = 0;
    printSubsequences(str, output, i, v);

    cout << "Printing all subsequences " << endl;
    for(auto val: v) {
        cout << val << " ";
    } 
    cout << endl << "Size of vector is: " << v.size() << endl;  // size will include an empty string too
    return 0;
}

// Other way to get subsequences is to use BitMasking