// try block with throw without catch
// program will be terminated abnormaly or gives error.
// without catch we cannot work with thrown value

#include<iostream>
using namespace std;

int main() {
    try {
        throw 10;
    }
}