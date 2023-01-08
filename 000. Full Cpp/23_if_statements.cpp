#include<iostream>
using namespace std;

int main() {

    int num1 = 55;
    int num2 = 60;

    bool result = (num1 < num2);
    cout << std::boolalpha << "result = " << result << endl;

    cout << endl;
    cout << "Free standing if statement" << endl;

    //if(result)
    if (result == true) {
        cout << num1 << " is less than " << num2 << endl;
    }

    //if(!result)
    if (result == false) {
        cout << num1 << " is NOT less than " << num2 << endl;
    }
}