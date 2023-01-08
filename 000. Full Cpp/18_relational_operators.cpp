#include<iostream>
using namespace std;

int main() {

    int value1 = 13;
    int value2 = 43;

    bool answer = value1 == value2;
    cout << std::boolalpha << answer << endl;

    answer = value1 > value2;
    cout << answer << endl;

    answer = value1 < value2;
    cout << answer << endl;

    answer = value1 >= value2;
    cout << answer << endl;

    answer = value1 <= value2;
    cout << answer << endl;

    answer = value1 != value2;
    cout << answer << endl;

    return 0;
}