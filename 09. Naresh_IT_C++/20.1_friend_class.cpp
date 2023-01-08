#include<iostream>
using namespace std;

class author {  // container class
    
    char aname[20];
    friend class book;
};

class book {    // contained class 

    char bname[20];
    float price;
    author a;   // composition (object created)
    public:
        void getdata() {
            cout << "Enter author name: " << endl;
            cin >> a.aname; 
            cout << endl;
            cout << "Enter book name: " << endl;
            cin >> bname;
            cout << endl;
            cout << "Enter price: " << endl;
            cin >> price;
        }
        void putdata() {
            cout << "Book name: " << bname << endl;
            cout << "Author name: " << a.aname << endl;
            cout << "Book Price: " << price << endl;
        }
};

int main(){

    // author class object already created in book class, so no need to redeclare it.
    book b1;
    b1.getdata();
    b1.putdata();

}