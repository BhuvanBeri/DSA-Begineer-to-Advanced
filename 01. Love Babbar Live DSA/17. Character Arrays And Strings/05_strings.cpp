#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(char first, char second) {
    return first > second;
}

bool compare(int a, int b) {
    return a>b; // if a is > than b, return true (take a) else return false (take b)
}

int main() {

    string s = "babbar";
    sort(s.begin(), s.end());
    cout << s << endl;

    sort(s.begin(), s.end(), cmp); // sort in decending order
    cout << s << endl;

    vector<int> v{5,3,1,2,4};
    sort(v.begin(), v.end());
    for(auto i: v) {
        cout << i << " ";
    }
    cout << endl;

    sort(v.begin(), v.end(), compare);
    for(auto i: v) {
        cout << i << " ";
    }
    cout << endl;

    vector<string> str{"love", "babbar", "bhuvan", "beri"};

    return 0;
}