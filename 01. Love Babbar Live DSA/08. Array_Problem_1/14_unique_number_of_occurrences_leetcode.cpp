// using hashmap

#include<iostream>
#include<map>
#include<vector>
using namespace std;

bool uniqueOccurences (vector <int>& arr) {
    
    map<int, int> frequencyOfElements;

    for (int x: arr) {
        frequencyOfElements[x]++;
    }

    map<int, int> frequencyOfFrequencies;

    for (auto p: frequencyOfElements) {
        if(++frequencyOfFrequencies[p.second] > 1) {
            return false;
        }
    }
    return true;
}

