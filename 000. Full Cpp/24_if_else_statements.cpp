#include<iostream>
using namespace std;

int main() {

    bool result = false;
    cout << std::boolalpha << "result = " << result << std::endl;

    if (result == false) {
        cout << "Statement is false" << std::endl;
    } else {
        cout << "Statement is true" << std::endl;
    }

    return 0;
}