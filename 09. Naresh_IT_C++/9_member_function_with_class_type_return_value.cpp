// adding values in t1 and t2 and storing in t3.

#include<iostream>
using namespace std;

class test {

    int a, b;
    public: 
        void getdata();
        void putdata();
        test sum(test);
};

void test :: getdata() {

    cout << "Enter a, b values: " << endl;
    cin >> a >> b;
}

void test :: putdata() {

    cout << "a= " << a << "  b= " << b << endl;
}

// return datatype, class_name
test test :: sum(test t2) { // we use test as return type when we work with class type return values
    test t3;                // t3 is object of test class
    t3.a = a + t2.a;
    t3.b = b = t2.b;
    return t3;
}

int main() {

    test t1, t2, t3;
    t1.getdata();
    t2.getdata();
    t3 = t1.sum(t2);
    t1.putdata();
    t2.putdata();
    t3.putdata();
}