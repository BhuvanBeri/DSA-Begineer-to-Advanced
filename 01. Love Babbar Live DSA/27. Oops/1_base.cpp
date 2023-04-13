#include<iostream>
using namespace std;

class Animal {  // class is like a blueprint. (ex: map of house drawn on paper)

    int age;    
    int weight; 
    char ch;    

    // HW: Learn about padding and greedy alignment to learn why memory of above 3 is 12 and not 9


};

class Animals {

    // state or properties
    private:
        int weight;
    public:         // access modifiers: defines the scope of access (public, private, protected)
        int age;    // called data members
        string type;

        // constructor = gets called automatically whenever object is created
        Animals() {             // default constructor
            this->weight = 0;   // to initialize values of given object
            this->age = 0;
            this->type = "";
            cout << "Constructor Called" << endl;
        }

        // parameterized constructor
        Animals(int age) {

            this->age = age;
            cout << "Parameterized Constructor 1 Called" << endl;
        }

        Animals(int age, int weight, string type) {

            this->age = age;
            this->type = type;
            this->weight = weight;
            cout << "Parameterized Constructor 2 called" << endl;
        }

        // Copy Constructor 
        Animals(Animals &obj) {  // without pass by reference, it will be stuck to run infinitely (by pass by value mechanism), because inside copy constructor it will be called again and again having obj passed by value
            this->age = obj.age;
            this->weight = obj.weight;
            this->type = obj.type;
            cout << "Copy Constructor called" << endl;
        }

        // behavior or method
        void eat() {            // called member functions
            cout << "Eating" << endl;
        }

        void sleep() {
            cout << "Sleeping" << endl;
        }

        int getWeight() {
            return weight;
        }

        void setWeight(int weight) {
            // weight = weight;    <- both weights will be confused and will go to scope of local weight function. So we use this
            // This is used to tell that this is a pointer at current object.

            // (Alternative)
            // (*this).weight = weight;

            this->weight = weight;  // this->weight is referring to class private data member. Other weight is referring to local weight member of member function.
        
        }   // this is a pointer to current object

        void print() {
            cout << this->age << " " << this->weight << " " << this->type << endl;
        }

        ~Animals() {
            cout << "Inside Destructor" << endl;
        }
};

int main() {

/*

    // empty class is given minimum possible memory to identify and keep track of the class.
    // so system cannot give less than 1 byte of memory even for empty class.
    // thus to make class (even empty) bare minimum needed memory is 1 byte
    // cout << "Size of empty class is: " << sizeof(Animal) << endl;

    cout << "Size of class is: " << sizeof(Animal) << endl;

    // Object creation

    // Method 1: By using Static memory allocation (This allocation is done in stack memory)
    Animals ramesh;
    ramesh.age = 12;
    ramesh.type = "Lion";
    cout << "Age of ramesh is: " << ramesh.age << endl;
    cout << "Type of ramesh is: " << ramesh.type << endl;
    // cout << "Weight of ramesh is: " << ramesh.weight << endl;   // to access private data members, we use getters and setters.

    ramesh.eat();
    ramesh.sleep();
    ramesh.setWeight(58);
    cout << "Weight of ramesh is: " << ramesh.getWeight() << endl;
    cout << endl;

    // Method 2: By using Dynamic memory allocation (Have not learned yet!)
        // This allocation of memory is done in heap memory. This is done by "new" keyword
        // Note that heap memory does not clean automatically, we must deallocate using "delete" keyword to release memory
        // This is done to prevent memory leak.
    // HW: Learn about memory leak and garbage collection (This is not in c++ but learn anyway)

    // pointer (in stack)   // (in heap)
    Animals* suresh = new Animals; // we created animals type object using dynamic memory
    (*suresh).age = 15; // *suresh will give actual object. suresh.age will give address.age not object.age
    (*suresh).type = "cat";

    // alternative - dynamic
    suresh->age = 17;
    suresh->type = "dog";
    cout << "Age of suresh is: " << suresh->age << endl;
    cout << "Type of suresh is: " << suresh->type << endl;
    suresh->setWeight(65);
    cout << "Weight of suresh is: " << suresh->getWeight() << endl;
    
    suresh->eat();
    suresh->sleep();

    cout << endl;

    Animals karan(21);
    Animals beri(20, 50, "Beri");
    Animals* b = new Animals(100,10,"BB");
    cout << endl << endl;

    // for copy constructor = copying object.
    Animals bb = karan;
    Animals d(*b);
    Animals animal1(bb); // alternative way to call copy constructor
    cout << endl << endl;

*/
/*
    // Use of copy constructor?
    // By default, constructor use mechanism of shallow copy but to use deep copying, we use copy constructor.

    Animals a;
    a.age = 20;
    a.setWeight(101);
    a.type = "babbar";

    Animals b = a;
    cout << "a-> ";
    a.print();
    cout << "b-> ";
    b.print();

    a.type[0] = 'G';
    cout << "a-> ";
    a.print();
    cout << "b-> ";
    b.print();

*/  

    cout << "ab object creation" << endl;
    Animals ab;
    ab.age = 10;
    cout << endl;

    cout << "ba object creation" << endl;
    Animals* ba = new Animals();
    ba->age = 12;
    cout << endl;

    //manually
    delete ba;  // since only 1st object's constructor got deleted automatically, for second we will do it manually

    return 0;
}