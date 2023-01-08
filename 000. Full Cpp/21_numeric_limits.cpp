#include<iostream>
#include<limits>

using namespace std;

int main() {

    cout << "The range for short is from " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << endl;

    cout << "The range for usigned short is from " << std::numeric_limits<unsigned short>::min() << " to " << std::numeric_limits<unsigned short>::max() << endl;

    cout << "The range for int is from " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << endl;

    cout << "The range for unsigned int is from " << std::numeric_limits<unsigned int>::min() << " to " << std::numeric_limits<unsigned int>::max() << endl;

    cout << "The range for long is from " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << endl;

    cout << "The range for float is from " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << endl;

    cout << "The range(with lowest) for float is from " << std::numeric_limits<float>::lowest() << " to " << std::numeric_limits<float>::max() << endl;

    cout << "The range(with lowest) for double is from " << std::numeric_limits<double>::lowest() << " to " << std::numeric_limits<double>::max() << endl;

    cout << "The range(with lowest) for long double is from " << std::numeric_limits<long double>::lowest() << " to " << std::numeric_limits<long double>::max() << endl;

    return 0;
}