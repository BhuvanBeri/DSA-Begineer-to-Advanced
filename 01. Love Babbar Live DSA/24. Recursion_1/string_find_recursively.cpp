#include<iostream>
#include<vector>
using namespace std;

void checkKey(string& str, int i, int& n, char& key, vector<int>& ans) {

    if (i>=n) {
        return;
    }

    if(str[i] == key) {
        ans.push_back(i);
    }

    return checkKey(str, i+1, n, key, ans);
}

int main() {

    string  str = "bhuvanberi";
    int n = str.length();

    char key = 'b';

    int i = 0;

    vector<int> ans;

    checkKey(str, i, n, key, ans);
    cout << "Index of key found at: ";

    for(auto val: ans) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}