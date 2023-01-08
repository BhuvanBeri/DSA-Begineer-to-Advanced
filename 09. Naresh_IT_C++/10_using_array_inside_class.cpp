#include<iostream>
using namespace std;

class stu {

    int id, subject[6]; // to store 6 subjects we will use array
    char name[20];
    public:
        void getstu();
        void result();
};

void stu :: getstu() {

    cout << "Enter student id, name: " << endl;
    cin >> id >> name;
    cout << endl;
    cout << "Enter 6 subject marks: " << endl;
    for (int i = 0; i < 6; i++) {
        cin >> subject[i];
    }
}

void stu :: result() {

    int total = 0;
    float avg_marks = 0;
    bool fail = false;
    for (int i = 0; i < 6; i++) {
        total += subject[i];
    }
    avg_marks = total / 6.0;
    cout << "Average marks: " << avg_marks << endl;
    cout << "Total: " << total << endl;
    cout << "Result: ";
    for (int i=0; i<6; i++) {
        if (subject[i] < 35) {  // checking every subject
            cout << "Fail" << endl;
            fail = true;
            break;              // since once failed is failed, no need to check other subjects
        }
    }
    if (fail == false) {
        cout << "Pass" << endl;
    }
}

int main() {

    stu s;
    s.getstu();
    s.result();
}