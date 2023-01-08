#include<iostream>
#include<cmath>
using namespace std;

int main() {

    double weight = 7.7;

    //floor.
    cout << "Weight rounded to floor is: " << std::floor(weight) << endl;

    //ceil
    cout << "Weight rounded to ceil is: " << std::ceil(weight) << endl;

    //abs.
    double savings = -5000;

    cout << "Abs of weight is: " << std::abs(weight) << endl;
    cout << "Abs of savings is: " << std::abs(savings) << endl;

    // exp : f(x) = e^x , where e = 2.71828. Test the result here against a calculator.
    double exponential = std::exp(10);
    cout << "The exponential of 10 is: " << exponential << endl;

    //pow.
    cout << "3^4 is: " << std::pow(3,4) << endl;
    cout << "9^3 is: " << std::pow(9,3) << endl;

    // log = reverse of power.

    cout << "Log; to get 54.59, you should elevate e to the power of: " << std::log(54.59) << endl;
    cout << "To get 1000, you would need to elevate 10 to the power of: " << std::log10(10000) << endl;

    //sqrt
    cout << "The square root of 81 is: " << std::sqrt(81) << endl;

    //round.
    cout << "3.654 rounded to: " << std::round(3.654) << endl;
    cout << "2.92 rounded to: " << std::round(2.92) << endl;
    cout << "15.5 rounded to: " << std::round(15.5) << endl;
    cout << "12.4 rounded to: " << std::round(12.4) << endl;

    return 0; 
}