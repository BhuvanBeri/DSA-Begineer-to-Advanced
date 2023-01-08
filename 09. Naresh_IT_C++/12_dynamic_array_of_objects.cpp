// used to prevent memory wastage like in 11th one.
// dynamic allocation is allocation of memory at runtime.

#include<iostream>
#include<stdio.h>
using namespace std;

class book {

    char bname[20], aname[20];
    float price;
    public:
        void readbook() {
            cout << "Enter book name: " << endl;
            gets(bname);    // read string until pressing of enter key. stdio.h is its header
            cout << "Enter author name: " << endl;
            gets(aname);
            cout << "Enter price: " << endl;
            cin >> price;
        }
        void showbook() {
            cout << bname << "\t" << aname << "\t" << price << endl;
        }
};

int main() {

    book *b;    //pointer object
    int n, i;
    cout << "Enter number of book orders: " << endl;
    cin >> n;
    b = new book[n];    // dynamic allocation of class book to object b for size n.
    for (i=0; i<n; i++) {
        b[i].readbook();
    }
    cout << "Book Name \t Author \t Price" << endl;
    for (i=0; i<n; i++) {
        b[i].showbook();
    }
    delete[] b;     // release memory
}