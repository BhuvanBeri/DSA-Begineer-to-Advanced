#include<iostream>
using namespace std;

class sample {

    private:
        int a;
    public:
        void geta() { 

            cout << "Enter a value: ";
            cin >> a;
        }
        void puta() {
            cout << "a= " << a << endl;
        }
        void big(sample s2) {
            if (a > s2.a) {
                cout << "s1.a is big";
            } else {
                cout << "s2.a is big";
            }
        }
};

int main() {

    sample s1, s2;
    s1.geta();
    s2.geta();
    s1.puta();
    s2.puta();
    s1.big(s2); // sending s2 object as an argument to big function
}