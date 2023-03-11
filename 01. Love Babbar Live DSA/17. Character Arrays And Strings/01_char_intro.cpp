// diff between char array and int array is its size.

// diff between char array and string is memory is allocated statically
// in char array and dynamically in string.

// char array is fast than string because of the way they implement.
// there is no logical reasoning to justify this answer
// but time taken shows this difference.

// chat array has less predefined functions. Strings generally have more.


#include<iostream>
#include<cstring>
using namespace std;

int getLength(char arr[]) { // to get length of characters stored in char array

    int length = 0;
    int index = 0;
    while (arr[index] != '\0') {
        length++;
        index++;
    }
    return length;
}

void reverseCharArray(char arr[]) {

    int n = strlen(arr);    // strlen will give 4 excluding "\0"
    int s = 0, e = n-1;     

    while (s<=e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void replaceSpaces(char inp[]) {

    int i=0;
    int n = strlen(inp);
    for(int i=0; i<n; i++) {
        if(inp[i] == ' ') {
            inp[i] = '@';   // replaced space with @.
        }
    }
}

void convertIntoUpperCase(char arr[]) {
    int n = strlen(arr);

    if (arr[i] > 'a' && arr[i] < 'z') {
        for(int i=0; i<n; i++) {
            arr[i] = arr[i] - 'a' + 'A';
        }
    }
}

void convertIntoLowerCase(char arr[]) {
    int n = strlen(arr);

    if (arr[i] > 'A' && arr[i] < 'Z') { // to ignore already lower case input
        for(int i=0; i<n; i++) {
            arr[i] = arr[i] + 'a' - 'A';
        }
    }
}

int main() {

/*
    char name[10];  // at max it can store only 9 characters because last character is reserved to \0 i.e. null character

    cin >> name;

    cout << name;
*/

    char name[10] = "beri";
    char name2[10] = "beri";
    cout << "Name is --> " << name << endl;
    cout << "Length is --> " << getLength(name) << endl;
    // cout << "Length is --> " << strlen(name) << endl;
    // cout << "comparing is --> " << strcmp(name, name2) << endl;

    // cin.getline(name, 10);   --> max it can take input of characters --> to take full input even after space

    reverseCharArray(name);
    cout << "reversed name is --> " << name << endl;

    // reverse all spaces 
    char inp[100];
    cout << "Enter input: " << endl;
    cin.getline(inp, 100);

    replaceSpaces(inp);
    cout << "printing sentence " << endl << inp << endl;

    // convert to uppercase
    char arr[100] = "bhuvan";
    convertIntoUpperCase(arr);

    cout << arr << endl;

    // convert to lowercase
    convertIntoLowerCase(arr);
    cout << arr << endl;

    return 0; 
}