#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector <vector<int>> grid(n, vector<int>(n, 0));
        int xi, yi, xj, yj;
        for(int k = 0; k < queries.size(); k++){
            xi = queries[k][0];
            yi = queries[k][1];
            xj = queries[k][2];
            yj = queries[k][3];
            for(int i = yi; i <= yj; i++){
                for(int j = xi; j <= xj; j++){
                    grid[i][j]++;
                }
            }
        }
        return grid;
    }
};
int main(){
    
    return 0;
}