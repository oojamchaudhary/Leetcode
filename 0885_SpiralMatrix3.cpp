#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> ans;
        int totalCells = rows * cols;
        int r = rStart, c = cStart;
        int steps = 1;       
        ans.push_back({r, c});     
        vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int dir = 0;

        while (ans.size() < totalCells) {
            for (int stepCount = 0; stepCount < 2; ++stepCount) {
                for (int j = 0; j < steps; ++j) {
                    r += directions[dir][0];
                    c += directions[dir][1];                   
                    if (r >= 0 && r < rows && c >= 0 && c < cols) {
                        ans.push_back({r, c});
                    }
                }
                dir = (dir + 1) % 4;
            }
            steps++;
        }
        
        return ans;
    }
};
int main(){
    
    return 0;
}