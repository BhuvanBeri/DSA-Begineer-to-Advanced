// 4 pillars of oops -> Encapsulation, Inheritance, Polymorphism, Abstraction

// Encapsulation (example class (acting as a capsule) and use of objects by default performs encapsulation) i.e. data hiding
// Perfect Encapsulation = when every data member is set private and are accessed using getters and setters
// Encapsulation is a concept of wrapping or hiding data.
// hiding data member and member functions in class

// use of encapsulation -> Security, we can make class read on, reusability

// Abstraction is implementation hiding. Example your gf slaps you for being angry without telling every reason underlying
// example car is running but you dont know every thing in depth working inside car

// Inheritance is having properties of parent class in child class
// Base class or Super class or Parent class is same
// Sub class or Child class or Derived class is same
// Mode of Inheritance = Public, Private, Protected 
// Type of Ingeritance: 1) Single   2) Multi-level  3) Multiple  4) Hierarchical  5) Hybrid

#include<iostream>
using namespace std;

class Ani {  // achieving encapsulation
    public:
        int age;
        int weight;

        void eat() {
            cout << "Eating" << endl;
        }
};

class Anim {  // achieving perfect encapsulation
    private:
        int age;
        int weight;
    public:
        void eat() {
            cout << "Eating" << endl;
        }
        int getAge() {
            return this->age;
        }
        void setAge(int age) {
            this->age = age;
        }
        int getWeight() {
            return this->weight;
        }
        void setWeight(int weight) {
            this->weight = weight;
        }
};

class Dog:public Ani {  // inheritance

};

int main() {
    Dog d1;
    d1.eat();
    return 0;
}