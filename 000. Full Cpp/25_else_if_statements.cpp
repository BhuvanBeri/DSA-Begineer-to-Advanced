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

    int tool = circle;

    if (tool == pen) {
        cout << "Active tool is pen" << endl;
    }
    else if (tool == marker) {
        cout << "Active tool is marker" << endl;
    }
    else if (tool == eraser) {
        cout << "Active tool is eraser" << endl;
    }
    else if (tool == rectangle) {
        cout << "Active tool is rectangle" << endl;
    }
    else if (tool == circle) {
        cout << "Active tool is circle" << endl;
    }
    else if (tool == ellipse) {
        cout << "Active tool is ellipse" << endl;
    }
    else {
        cout << "Invalid Tool" << endl;
    }
    cout << "Moving on..." << endl;

    return 0;
}