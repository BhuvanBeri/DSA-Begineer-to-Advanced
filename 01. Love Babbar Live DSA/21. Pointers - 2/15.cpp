#include<iostream>
using namespace std;
int main() {
    
    char s[] = "hello";
    char *p = s;
    cout << s[0] << " " << p << " " << p[0];
}