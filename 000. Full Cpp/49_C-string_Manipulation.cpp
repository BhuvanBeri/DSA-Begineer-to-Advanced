#include<iostream>
#include<cstring>
using namespace std;

int main() {

    //std::strlen: Find the length of the string
    //real arrays and those decayed into pointers
    const char message1[] = "The sky is blue.";

    //Array decays into pointer when we use const char*
    const char* message2 = {"The sky is blue."};
    cout << "Message1: " << message1 << endl;

    //strlen ignores null character
    cout << "strlen(message1): " << strlen(message1) << endl;

    //includes the null character
    cout << "sizeof(message1): " << sizeof(message1) << endl;

    //strlen still works with decayed arrays
    cout << "strlen(message2): " << strlen(message2) << endl;

    //prints size of pointer
    cout <<"sizeof(message2): " << sizeof(message2) << endl;

    //Returns negative value of lhs appears before rhs in lexicographical order,
    //Zero if lhs and rhs compare equal.
    //And positive if rhs appears before lhs in lexicographical order
    cout << endl;
    cout << "std::strcmp: " << endl;
    const char* string_data1 = "Alabama"; // can point to another address giving new value.
    // string_data1 = "balleballe"; // this is possible because we are working with pointers
    const char* string_data2 = "Blabama";

    char string_data3[] = "Alabama";    // normal char array cannot be reassigned with new value
    // string_data3 = "balleballe" // not possible because of normal char array. 
    char string_data4[] = "Blabama";

    // Print out comparison.
    cout << "std::strcmp: (" << string_data1 << "," << string_data2 << ") : " 
        << strcmp(string_data1, string_data2) << endl;

    cout << "std::strcmp: (" << string_data3 << "," << string_data4 << ") : "
        << strcmp(string_data3, string_data4) << endl;

    cout << "std::strcmp: (" << string_data1 << "," << string_data3 << ") : "
        << strcmp(string_data1, string_data3) << endl; // strcmp works between pointer and normal char array too.

    // strncmp: Compares n characters in a string.
    int n = 3;
    cout << "std::strncmp: (" << string_data3 << "," << string_data4 << ") : "
        << strncmp(string_data3, string_data4, n) << endl;

    //std::strchr: TO find all the characters one by one.
    const char *str = "If you do not try it at all. You will surely fail.";
    char target = 't';
    const char *result = str;
    
    while ((result = strchr(result, target)) != nullptr) {
        cout << "Found " << target << " starting at " << result << "\n";
        ++result;
    }

    return 0; 
}