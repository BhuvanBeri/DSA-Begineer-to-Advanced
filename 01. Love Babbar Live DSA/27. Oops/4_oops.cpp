// single inheritance

#include<iostream>
using namespace std;

class Car {
    public:
    string name;
    int weight;
    int age;

    void speedUp() {
        cout << "Speeding up" << endl;
    }
    void breakMarro() {
        cout << "Break maardi" << endl;
    }
};

class Scorpio:public Car {  // Scorpio is a car.

};

int main() {

    Scorpio beri;
    beri.speedUp();
    return 0;
}