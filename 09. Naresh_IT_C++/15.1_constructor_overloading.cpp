// how to use one constructor within other. i.e. nested constructor

#include<iostream>
#include<string.h>
using namespace std;

class stu {

    char name[20], course[20];
    float fee; 
    public:
        stu (char name[20], char course[20]) {  // constructor_1
            strcpy (this->name, name);
            strcpy (this->course, course);
            fee = 0;
        }
        stu (char name[20], char course[20], float fee):stu(name,course) {   // constructor_2
                                    // constructor_2 (parameters) : constructor_1 (2 arguments passed). Thus, calling constructor_1 within constructor_2
            this -> fee = fee;
        }
        void showstu() {
            cout << "Name = " << name << endl;
            cout << "Course = " << course << endl;
            cout << "Fee = " << fee << endl;
        }
};

int main() {

    stu s1("Bhuvan", "CSE");
    stu s2("Bhuvan", "CSE", 5000);
    s1.showstu();
    s2.showstu();
}