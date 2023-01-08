// used to store two states - true or false
// can store 256 characters which is wasteful to be used because bool works around only true and false.
// it is 1 byte sized.

#include<iostream>
using namespace std;

int main() {

    bool red_light = false;
    bool green_light = true;

    cout << "For red light ";
    if (red_light == true) {
        cout << "Stop" << endl;
    } else {
        cout << "Go" << endl;
    }

    cout << "For green light ";
    if (green_light == true) {
        cout << "Go" << endl;
    } else {
        cout << "Stop" << endl;
    }

    cout << "Size of bool is " << sizeof(bool) << endl;

    cout << "red light is: " << red_light << endl;  // shows answer is 0 or 1; 0 - false, 1 - true
    cout << "green light is: " << green_light << endl;

    cout << std::boolalpha << endl; // shows answer in true or false
    cout << "red light is: " << red_light << endl;
    cout << "green light is: " << green_light << endl;

    return 0;
}