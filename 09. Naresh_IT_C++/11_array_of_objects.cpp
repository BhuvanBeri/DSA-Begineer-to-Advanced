#include<iostream>
using namespace std;

class stu {

    int id, subject[6]; // to store 6 subjects we will use array
    char name[20];
    public:
        void getstu();
        void putstu();
};

void stu :: getstu() {
    cout << "Enter id and name of student: " << endl;
    cin >> id >> name;
}

void stu :: putstu() {
    cout << "Id= " << id << "\t" << "Name= " << name << endl;
}

int main() {
                // Object array s[60];
    stu s[60];  // to store multiple students data (upto 60 in this case)
    int n, i;
    cout << "Enter number of student's data to enter from 1 to 60: " << endl;
    cin >> n;       // to ask how many entries out of 60, user want to make.
    if (n < 1 || n > 60) {
        cout << "Value between 1 and 60 only" << endl;
    } else {
        for (i = 0; i < n; i++) {
            s[i].getstu();
            cout << "---------------------------" << endl;
        }
        for (i = 0; i < n; i++) {
            s[i].putstu();
        }
    }
}