// Remove all occurences of a subarray in a string using recursion

#include<iostream>
#include<string>
using namespace std;

// TC - O(n^2)
// SC - O(n/m)

void removeOccurences(string& s, string& part) {

    int found = s.find(part);
    if(found != string::npos) {
        // part string has been found
        // remove it
        string left_part = s.substr(0, found);
        string right_part = s.substr(found+part.size(), s.size());
        s = left_part + right_part;

        removeOccurences(s, part);
    }
    else {
        // base case - all the occurences of part has been removed from s
        return;
    }
}

int main() {

    string s;
    cin >> s;

    string part;
    cout << "Enter part to remove: ";
    cin >> part;
    removeOccurences(s, part);
    cout << s << endl;
    return 0;
}