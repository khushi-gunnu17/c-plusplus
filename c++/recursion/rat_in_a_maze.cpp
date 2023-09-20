// 1--> open path
// 0--> blocked path 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSafe(int x, int y, vector<vector<int>> &m, int n, vector<vector<int>> visited) {
    
    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y] == 0 && m[x][y] == 1 ) {
        return true;
    } else {
        return false;
    }
}

void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<int>> visited, string path) {
    // you have reached x,y here.
    // Base case
    if(x == n-1 && y == n-1) {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // we have 4 choices = D, L, U, R

    // Down
    int newx = x + 1;
    int newy = y;
    if(isSafe(newx, newy, m , n, visited)) {
        path.push_back('D');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // Left
    newx = x;
    newy = y - 1;
    if(isSafe(newx, newy, m , n, visited)) {
        path.push_back('L');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // Right
    newx = x;
    newy = y + 1;
    if(isSafe(newx, newy, m , n, visited)) {
        path.push_back('R');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    // Up
    newx = x - 1;
    newy = y;
    if(isSafe(newx, newy, m , n, visited)) {
        path.push_back('U');
        solve(m, n, ans, newx, newy, visited, path);
        path.pop_back();
    }

    //  Backtrack
    visited[x][y] = 0;

}

vector<string> findPath(vector<vector<int>> &m, int n) {
    vector<string> ans;

    if(m[0][0] == 0) {
        return ans;
    }
    int srcx = 0;
    int srcy = 0;

    // Creating a visited vector with initialisation of 0
    vector<vector<int>> visited = m;
    for(int i =0; i<n ; i++) {
        for(int j=0 ; j<n ; j++) {
            visited[i][j] = 0;
        }
    }

    string path = "";
    solve(m, n, ans, srcx, srcy, visited, path);
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {

    return 0;
}