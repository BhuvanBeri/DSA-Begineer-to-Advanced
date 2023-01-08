#include<iostream>
using namespace std;

//tools. 
const int pen = 10;
const int marker = 20;
const int eraser = 30;
const int rectangle = 40;
const int circle = 50;
const int ellipse = 60;

int main() {

    int tool = eraser;

    switch(tool) {
        case pen: {
            cout << "Active tool is pen" << endl;
        }
        break;

        case marker: {
            cout << "Active tool is marker" << endl;
        }
        break;

        case eraser: 
        case rectangle: {   // we can use multiple cases and give same output
            cout << "Active tool is rectangle" << endl;
        }
        break;

        default: {
            cout << "Invalid command" << endl;
        }
        break;
    }
    cout << "Moving on..." << endl;

}