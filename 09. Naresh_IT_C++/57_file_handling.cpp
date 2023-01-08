#include<iostream>
#include<fstream>
using namespace std;

class stu {

    int id;
    char name[20];
    public:
        void putstu() {
            cout << id << " " << name << endl;
        }
};

int main() {
    stu s;
    ifstream file ("stu.dat", ios::in); // ifstream is used for reading and ios::in is optional
    File.read((char *)&s, sizeof(s));
    cout << "Id\t Name\n";
    cout << "----------------------\n";
    while (!File.eof()) { // eof is a member function. eof means end of file.
        s.putstu();
        File.read ((char *)&s, sizeof(s));
    }
    File.close();
}