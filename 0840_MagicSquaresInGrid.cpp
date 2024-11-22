#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int xi, yi;
    vector <int> freq;
    bool isUn(vector<vector<int>>& grid){
        for(int i = 1; i < 10; i++){
            if(freq[i] != 1) return false;
        }
        return true;
    }
    bool diag(vector<vector<int>>& grid){
        if(grid[xi][yi] + grid[xi + 2][yi + 2] == grid[xi + 2][yi] + grid[xi][yi+2]) return true;
        return false;
    }
    bool rSum(vector <vector<int>> &grid){
        int sum = grid[xi + 2][yi] + grid[xi + 2][yi + 1] + grid[xi + 2][yi + 2];
        for(int i = 0; i < 2; i++){
            if(grid[xi + i][yi] + grid[xi + i][yi + 1] + grid[xi + i][yi + 2] != sum) return false;
        }
        return true;
    }
    bool cSum(vector <vector<int>> grid){
        int sum = grid[xi][yi + 2] + grid[xi + 1][yi + 2] + grid[xi + 2][yi + 2];
        for(int i = 0; i < 2; i++){
            if(grid[xi][yi + i] + grid[xi + 1][yi + i] + grid[xi + 2][yi + i] != sum) return false;
        }
        return true;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        freq = vector <int> (16, 0);
        int count = 0;
        for(int i = 2; i < grid.size(); i++){
            for(int m = 0; m < 16; m++) freq[m] = 0;
            for(int m = i - 2; m <= i; m++){
                for(int n = 0; n < 3; n++){
                    freq[grid[m][n]]++;
                }
            }
            for(int j = 2; j < grid[i].size(); j++){
                xi = i - 2, yi = j - 2;
                if(j != 2){
                    freq[grid[xi][yi-1]]--;
                    freq[grid[xi + 1][yi-1]]--;
                    freq[grid[xi + 2][yi-1]]--;
                    freq[grid[xi][yi+2]]++;
                    freq[grid[xi + 1][yi+2]]++;
                    freq[grid[xi + 2][yi+2]]++;
                }
                if(isUn(grid) && rSum(grid) && cSum(grid) && diag(grid)) count++;
            }
        }
        return count;
    }
};
int main(){
    
    return 0;
}