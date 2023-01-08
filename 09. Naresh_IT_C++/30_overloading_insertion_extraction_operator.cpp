// extraction operator --> (>>) used with cin, comes under istream header file.
// insertion operator --> (<<) used with cout, comes under ostream header

#include<iostream>
using namespace std;

class stu {

    int id;
    char name[20];
    public:                         // in is reference object of istream, s is reference object of stu.
        friend void operator >> (istream &in, stu &s) {
            cout << "Enter stuid, name" << endl;
            cin >> s.id >> s.name;
        }
        friend void operator << (ostream &out, stu &s) {
            cout << "Id = " << s.id << endl;
            cout << "Name = " << s.name << endl;
        }
};

int main() {

    stu s;
    cin >> s;
    cout << s; 
}