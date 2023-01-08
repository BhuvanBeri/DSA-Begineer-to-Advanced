// unary operator requires only 1 operand. (+-== etc are binary operators which need 2 operands)
// example of unary are ++, --,etc which need only single operand to work with.

#include<iostream>
using namespace std;

class test {

    int a;
    public:
        test () {
            a = 0;
        }
        void operator ++ (int) {   // since unary works on single operand, no need to provide any argument for explicit entry.
            a++;
        }
        void operator -- (int) {    // we use int in argument because we will be working with int type of data.
            a--;
        }
        void show () {
            cout << "a = " << a << endl;
        }
};

int main() {

    test t;
    t++;
    t.show();
}