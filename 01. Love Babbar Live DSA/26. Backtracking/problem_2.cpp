// Rat in a maze problem

// if 0 -> Path is blocked
// if 1 -> Path is open

// Find all solutions to reach the destination.

#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int x, int y, int row, int col, int arr[][3], vector<vector<bool>> &visited) {

    if( ( (x>=0 && x<row) && (y>=0 && y<col) ) && (arr[x][y] == 1) && (visited[x][y] == false) ) {
        return true;
    }
    else{
        return false;
    }
} 
                                                // i        // j
void solveMaze(int arr[3][3], int row, int col, int srcX, int srcY, vector<vector<bool>> &visited, vector<string>& path, string output){

    // base case
    if(srcX == row-1 && srcY == col-1) {
        // answer found
        path.push_back(output);
        return;
    }

    //Down -> i+1, j (if we are at location i,j)

    if(isSafe(srcX+1, srcY, row, col, arr, visited)) {
        visited[srcX+1][srcY] = true;
        solveMaze(arr, row, col, srcX+1, srcY, visited, path, output + 'D');
        //backtrack
        visited[srcX+1][srcY] = false;
    }

    //Left -> i, j-1

    if(isSafe(srcX, srcY-1, row, col, arr, visited)) {
        visited[srcX][srcY-1] = true;
        solveMaze(arr, row, col, srcX, srcY-1, visited, path, output + 'L');
        //backtrack
        visited[srcX][srcY-1] = false;
    }

    //Right -> i, j+1

    if(isSafe(srcX, srcY+1, row, col, arr, visited)) {
        visited[srcX][srcY+1] = true;
        solveMaze(arr, row, col, srcX, srcY+1, visited, path, output + 'R');
        //backtrack
        visited[srcX][srcY+1] = false;
    }

    //Up -> i-1, j

    if(isSafe(srcX-1, srcY, row, col, arr, visited)) {
        visited[srcX-1][srcY] = true;
        solveMaze(arr, row, col, srcX-1, srcY, visited, path, output + 'U');
        //backtrack
        visited[srcX-1][srcY] = false;
    }

}

int main() {

    int maze[3][3] = {{1,0,0},
                      {1,1,0},
                      {1,1,1}};

    if(maze[0][0] == 0) {                       // edge case 1
        cout << "No Path Exists" << endl;
        return 0;
    }
    int row = 3;
    int col = 3;

    vector<vector<bool>>visited(row, vector<bool>(col,false)); // initialized all values as false
    // src ki value ko true mark krna hai
    visited[0][0] = true;

    vector<string> path;
    string output = "";

    solveMaze(maze, row, col, 0, 0, visited, path, output);

    cout << "printing the results " << endl;

    for (auto i: path) {
        cout << i << " ";
    }
    cout << endl;

    if(path.size()==0) {                            // edge case 2
        cout << "No path exists" << endl;
    }

    return 0;
}