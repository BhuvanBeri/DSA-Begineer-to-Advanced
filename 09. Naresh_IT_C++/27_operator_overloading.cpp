// how to overload + or > or any such operator.

#include<iostream>
#include<string.h>
using namespace std;

class test {

    char st[100];   // string datatype member.
    public:
        void read() {
            cout << "Enter string" << endl;
            cin >> st;
        }
        void show() {
            cout << "String = " << st << endl;
        }
        // test add(test t2) {     // without overloading
        //     test t3;
        //     strcpy(t3.st, st);
        //     strcat(t3.st, " ");
        //     strcat(t3.st, t2.st);
        //     return t3;
        // }

        test operator + (test t2) {     // with operator overloading
            test t3;
            strcpy(t3.st, st);
            strcat(t3.st, " ");
            strcat(t3.st, t2.st);
            return t3;
        }
};

int main() {

    test t1, t2, t3;
    t1.read();
    t2.read();

    // without overloading.
    // t3 = t1.add(t2);

    // with operator overloading

    t3 = t1 + t2;
    t3.show();
}