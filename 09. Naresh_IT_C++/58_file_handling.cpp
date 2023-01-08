// search a particular record from the file.

#include<iostream>
#include<fstream>
using namespace std;

class stu {

    int id;
    char name[20];
    public:
        void enq();
};

void stu :: enq() {
    stu s;
    ifstream File ("stu.dat");
    int idno, found = 0;
    cout << "Enter stuid "; 
    cin >> idno;
    File.read((char *)&s, sizeof(s));

    while (!File.eof()) {
        if (s.id == idno) {
            cout << "Id\t Name\n";
            cout << "---------------" << endl;
            cout << s.id << "\t" << s.name << endl;
            found = 1;
            break;
        }
        File.read((char *)&s, sizeof(s));
    }
    File.close();
    if (found == 0) {
        cout << "Stu not found" << endl;
    }
}

int main() {
    stu s;
    s.enq();
}