#include<iostream>

using namespace std;

int main() {

    //Check if character is alphanumeric
    cout << endl;
    cout << "std::isalnum: " << endl;

    cout << "C is alphanumeric: " << std::isalnum('C') << endl;
    cout << "^ is alphanumeric: " << std::isalnum('^') << endl;

    //Can use this as a test condition.
    char input_char = '*';
    if (std::isalnum(input_char)) {
        cout << input_char << " is alphanumeric." << endl;
    } else {
        cout << input_char << " is not alphanumeric." << endl;
    }

    //Check if character is alphabetic
    cout << endl;
    cout << "std::isalpha: " << endl;
    cout << "C is alphabetic: " << std::isalpha('C') << endl;
    cout << "^ is alphabetic: " << std::isalpha('^') << endl;
    cout << "7 is alphabetic: " << std::isalpha('7') << endl;

    if (std::isalpha('e')) {
        cout << 'e' << " is alphabetic." << endl;
    } else {
        cout << 'e' << " is not alphabetic." << endl;
    }

    //Check if a character is blank.
    cout << endl;
    cout << "std::isblank: " << endl;
    char message[] = "Hello there. How are you doing? The sun is shining.";
    cout << "Message: " << message << endl;

    //Find and print blank index
    unsigned int blank_count = 0; // to prevent negative count.
    // other way is --> size_t black_count = 0; // same as above
    for (int i=0; i<sizeof(message); i++) {
        if (isblank(message[i])) {
            cout << "Found a blank character at index: [" << i << "]" << endl;
            ++blank_count;
        }
    }
    cout << "In total we found: " << blank_count << " black characters." << endl;

    // Check if the character is lowercase or uppercase
    cout << "std::islower and std::isupper: " << endl;

    cout << endl;
    char thought[] = "The C++ Programming Language is one of the most used one on the Planet";
    int lowercase_count = 0;
    int uppercase_count = 0;

    //Print original string for ease of comparison on the terminal.
    cout << "Original string: " << thought << endl;

    for (auto character : thought) {
        if(islower(character)) {
            cout << " " << character;
            ++lowercase_count;
        }
        if(isupper(character)) {
            ++uppercase_count;
        }
    }
    cout << endl;
    cout << "Found " << lowercase_count << " lowercase characters and " << uppercase_count 
            << " uppercase characters." << endl;
    
    //Check if a character is a digit.
    cout << endl;
    cout << "std::isdigit: " << endl;

    char statement[] = {"Mr Hamilton owns 221 cows. That is a lot of cows."};
    cout << "statement: " << statement << endl;

    int digit_count = 0;

    for (auto character : statement) {
        if(isdigit(character)) {
            cout << "Found digit: " << character << endl;
            ++digit_count;
        }
    }
    cout << "Found " << digit_count << " digits in the statement" << endl;

    //Turning a character to lowercase using the std::tolower() function
    std::cout << std::endl;
    std::cout << "std::tolwer and std::toupper: " << std::endl;
    char original_str[] {"Home. The feeling of belonging"};
    char dest_str[std::size(original_str)];
    
    //Turn this to uppercase. Change the array in place
    for(size_t i{}; i < std::size(original_str) ; ++i){
        dest_str[i] = std::toupper(original_str[i]);
    }
    
    std::cout << "Original string : " << original_str << std::endl;
    std::cout << "Uppercase string : " << dest_str << std::endl;
    
    //Turn this to lowercase. Change the array in place
    for(size_t i{}; i < std::size(original_str) ; ++i){
        dest_str[i] = std::tolower(original_str[i]);
    }
    
    std::cout << "Lowercase string : " << dest_str << std::endl;

    return 0;
}