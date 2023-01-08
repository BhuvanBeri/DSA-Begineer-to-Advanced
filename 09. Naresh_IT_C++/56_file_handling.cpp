// strings and files...

// Why do we need files?

// since object is class variable, it is stored in stack.
// which means storing in ram i.e. temporary memory.
// that means suppose we are using normally class system in banks. repeated changes in stack won't be stored.
// all the data will be lost. 
// TO make it permanent i.e. to set all data on hard disks, etc we will use Files

// writing data to a data file

#include<iostream>
#include<fstream>   // header file used while working with files
using namespace std;

class stu {

    int id;
    char name[20];
    public:
        void getstu() {
            cout << "Enter stuid, name" << endl;
            cin >> id >> name;
        }
};

int main() {

    stu s; // object

    // to send data to file, we have to open file (and provide it a name). Open a file for writing.
    // ofstream is telling this file is for input purposes
    // in saying (out) is called output mode. but it will perform input process
    ofstream File("Stu.dat", ios::out);  // ofstream is predefined class and File is the object of that class. Inside bracket is the file name.
    // ios::out is optional
    // it also states how to open a file using parameterized constructor

    ofstream File;
    File.open("Stu.dat"); // using open member function. this is the second way to open the file

    char op;
    do {
        s.getstu();
        File.write((char *)&s, sizeof(s));    // char * tells to convert all data to char type. &s gives address of s and sizeof s to store the data in.
        cout << "One row created." << endl;
        cout << "Any more students? [Y/N] " << endl;
        cin >> op;
    } while (op == 'Y' || op == 'y');

    File.close(); // file is closed i.e. data secured.
}