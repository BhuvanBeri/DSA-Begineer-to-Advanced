#include <iostream>
using namespace std;
int main()
{
    int n, count = 0, count1 = 0, k = 0;
    cout << "Enter number of rows: ";
    cin >> n;
    for(int row = 1; row <= n; ++row)
    {
        for(int space = 1; space <= n-row; ++space)
        {
            cout << "  ";
            ++count;
        }
        while(k != 2*row-1)
        {
            if (count <= n-1)
            {
                cout << row+k << " ";
                ++count;
            }
            else
            {
                ++count1;
                cout << row+k-2*count1 << " ";
            }
            ++k;
        }
        count1 = count = k = 0;
        cout << endl;
    }
    return 0;
}