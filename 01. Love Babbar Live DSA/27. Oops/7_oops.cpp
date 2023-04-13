// Hierarichal = opposite of multiple

#include<iostream>
using namespace std;

class Car {

    public:
    int age;
    int weight;
    string name;

    void speedUp() {
        cout << "Speeding up" << endl;
    }
};

class Scorpio: public Car {


};

class Fortuner: public Car {


};

int main() {

    Scorpio s11;
    s11.speedUp();

    Fortuner f11;
    f11.speedUp();
    
    return 0;
}