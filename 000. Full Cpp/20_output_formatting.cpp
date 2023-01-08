//1. std::stdl  --> new line.
//2. std::flush --> multiple data is sent to terminal as output when memory buffer gets full
//3. std::setw  --> adds gap between data to show in a proper format.       
//4. right justified
//5. internal justified
//6. std::boolalpha --> shows bool output in terms of true or false rather than 1 or 0
//7. std::noboolalpha --> turns bool output back in 0,1 form.
//8. std::showpos --> shows number data with + sign for positive numbers and std::noshowpos 
//9. std::dec, std::oct, std::hex
//10. std::setprecision.
//11. std::showpoint
// learn all these on cppreference in header --> iostream, iomanip, ios, ostream 

#include<iostream>
#include<iomanip>
using namespace std;

int main() {

    cout << "Hello" << endl;
    cout << "Welcome" << "\n";

    // std::flush;
    cout << "This is a nice message" << std::flush << endl;

    //setw()
    cout << "Unformatted table: " << endl;
    cout << "Bhuvan" << " " << "Beri" << "21" << endl;
    cout << "Karan" << " " << "Singh" << "21" << endl;
    cout << "Jordan" << " " << "Sandhu" << "28" << endl;
    cout << "Stan" << " " << "Lee" << "45" << endl;
    cout << endl;

    int col_width = 10;
    cout << "Formatted table: " << endl;
    cout << std::setw(col_width) << "Bhuvan" << std::setw(10) << "Beri" << std::setw(10) << "21" << endl;
    cout << std::setw(col_width) << "Karan" << std::setw(10) << "Singh" << std::setw(10) << "21" << endl;
    cout << std::setw(col_width) << "Jordan" << std::setw(10) << "Sandhu" << std::setw(10) << "28" << endl;
    cout << std::setw(col_width) << "Stan" << std::setw(10) << "Lee" << std::setw(10) << "45" << endl;
    cout << endl;

    // Right Justified 

    cout << "Right Justified Table (default)" << endl;

    col_width = 10;
    cout << std::right;
    cout << std::setw(col_width) << "Bhuvan" << std::setw(10) << "Beri" << std::setw(10) << "21" << endl;
    cout << std::setw(col_width) << "Karan" << std::setw(10) << "Singh" << std::setw(10) << "21" << endl;
    cout << std::setw(col_width) << "Jordan" << std::setw(10) << "Sandhu" << std::setw(10) << "28" << endl;
    cout << std::setw(col_width) << "Stan" << std::setw(10) << "Lee" << std::setw(10) << "45" << endl;
    cout << endl;

    // Left Justified 

    cout << "Left Justified Table (default)" << endl;

    col_width = 10;
    cout << std::left;
    cout << std::setw(col_width) << "Bhuvan" << std::setw(10) << "Beri" << std::setw(10) << "21" << endl;
    cout << std::setw(col_width) << "Karan" << std::setw(10) << "Singh" << std::setw(10) << "21" << endl;
    cout << std::setw(col_width) << "Jordan" << std::setw(10) << "Sandhu" << std::setw(10) << "28" << endl;
    cout << std::setw(col_width) << "Stan" << std::setw(10) << "Lee" << std::setw(10) << "45" << endl;
    cout << endl;

    // Internal Justified 

    cout << "Internal Justified Table (default)" << endl;

    col_width = 10;
    cout << std::left;
    cout << std::internal;
    cout << std::setw(col_width) << "Bhuvan" << std::setw(10) << "Beri" << std::setw(10) << "21" << endl;
    cout << std::setw(col_width) << "Karan" << std::setw(10) << "Singh" << std::setw(10) << "21" << endl;
    cout << std::setw(col_width) << "Jordan" << std::setw(10) << "Sandhu" << std::setw(10) << "28" << endl;
    cout << std::setw(col_width) << "Stan" << std::setw(10) << "Lee" << std::setw(10) << "45" << endl;
    cout << endl;

    // Setfill --> fills the gap with specified character.

    cout << "Setfill in Table" << endl;

    col_width = 10;
    cout << std::left;
    cout << setfill('-');
    cout << std::setw(col_width) << "Bhuvan" << std::setw(10) << "Beri" << std::setw(10) << "21" << endl;
    cout << std::setw(col_width) << "Karan" << std::setw(10) << "Singh" << std::setw(10) << "21" << endl;
    cout << std::setw(col_width) << "Jordan" << std::setw(10) << "Sandhu" << std::setw(10) << "28" << endl;
    cout << std::setw(col_width) << "Stan" << std::setw(10) << "Lee" << std::setw(10) << "45" << endl;
    cout << endl;

    //boolalpha

    bool a = true;
    bool b = false;

    cout << std::boolalpha << std::endl;
    cout << a << " " << b << endl;
    cout << std::noboolalpha << std::endl;  // cancels the use of boolalpha
    cout << a << " " << b << endl;

    // showpos

    int pos_num = 34;
    int neg_num = -45;

    cout << pos_num << " " << neg_num << endl;
    cout << std::showpos << std::endl;
    cout << pos_num << " " << neg_num << endl;
    cout << std::noshowpos << std::endl;
    cout << pos_num << " " << neg_num << endl;

    // different number systems: std::dec, std::hex, std::oct
    
    int num = 4;
    cout << endl;
    cout << "num(dec): " << std::dec << num << endl;
    cout << "num(hex): " << std::hex << num << endl;
    cout << "num(oct): " << std::oct << num << endl;

    //uppercase and nouppercase --> learn from cppreference

    int c = 1234;
    cout << std::uppercase << endl;
    cout << "uppercase: " << c << endl;
    cout << std::nouppercase << endl;
    cout << "nouppercase: " << c << endl;

    //std::fixed --> learn from cppreference

    //std::setprecision --> number of digits printed out for a floating point / double.

    // float q = 2345.76543;
    // cout << std::setprecision(2) << q << std::endl; // without fixed
    // cout << std::setprecision(2) << std::fixed << q << std::endl;
    
    //std::showpoint --> shows trailing zeroes if necessary
    //force output of the decimal number

    double d = 34.1;
    double e = 101.99;
    double f = 12.0;
    int g = 45;

    cout << endl;
    cout << "without use of showpoint" << endl;
    cout << "d: " << d << endl;
    cout << "e: " << e << endl;
    cout << "f: " << f << endl;
    cout << "g: " << g << endl;

    cout << "showpoint" << endl;
    cout << std::showpoint;
    cout << "d: " << d << endl;
    cout << "e: " << e << endl;
    cout << "f: " << f << endl;
    cout << "g: " << g << endl;
}