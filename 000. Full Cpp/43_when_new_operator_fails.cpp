#include<iostream>
using namespace std;

int main() {

    // int *lots_of_ints = new int[100000000]; // exceeds amount of memory allocated

    // for (int i=0; i<100000000; i++) { // using loop to exhaust memory and crash
    //     int *data = new int[10000000];
    // }

    //Solution1: exception mechanism
    //Solution2: std::nothrow 

    for (int i=0; i<10000000; i++) { // excpetion based solution
        
        try {
            int *data = new int[10000000];
        } catch (std::exception& ex) {
            cout << "Something went wrong: " << ex.what() << endl;
        }
    }   // program won't crash and will tell at end of program what went wrong.
    
    //std::nothrow solution
    for (int i = 0; i < 1000000; i++) {
        int *data = new(std::nothrow) int[10000000];

        if(data != nullptr) {
            cout << "Data allocated " << endl;
        } else {
            cout << "Data allocation failed " << endl;
        }
    }

    cout << "Program ending well" << endl;

    return 0;
}