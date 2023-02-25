// Q) Column wise wave print
// H.W) Row wise wave print

// movement in matrix
// when col = 0 -> top to bottom
// when col = 1 -> bottom to top
// when col = 2 -> top to bottom
// when col = 3 -> bottom to top

// observed that
// For Even Col Number -> Top to Bottom
// For Odd Col Number  -> Bottom to Top

#include<iostream>
#include<vector>
using namespace std;

void wavePrintMatrix(vector<vector<int>>v) {

    int row = v.size();
    int col = v[0].size();

    for (int startCol=0; startCol<col; startCol++) {
        // even no of col -> top to bottom.
        if((startCol & 1) == 0) {
            for(int i=0; i<row; i++) {
                cout << v[i][startCol] << " ";
            }
        }
        else {
            // odd no of col -> bottom to top
            for(int i=row-1; i>=0; i--) {
                cout << v[i][startCol] << " ";
            }
        }
    }
}

int main() {

    vector<vector<int>>v {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    wavePrintMatrix(v);

    return 0;
}