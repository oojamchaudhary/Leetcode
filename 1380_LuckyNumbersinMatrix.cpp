#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector <int> minRow(matrix.size(), 0);
        vector <int> maxCol(matrix[0].size(), 0);
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                if(matrix[i][j] < matrix[i][minRow[i]]) minRow[i] = j;
                if(matrix[i][j] > matrix[maxCol[j]][j]) maxCol[j] = i;
            }
        }
        vector <int> lucky;
        for(int i = 0; i < maxCol.size(); i++){
            if(minRow[maxCol[i]] == i) lucky.push_back(matrix[maxCol[i]][i]);
        }
        return lucky;
    }
};
int main(){
    
    return 0;
}