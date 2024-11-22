#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        unordered_map <string, int> mpp;
        for(auto row: matrix){
            string temp = "";
            for(int i = 0; i< matrix[0].size(); i++){
                if(row[i] == row[0]){
                    temp += '1';
                }
                else{
                    temp += '0';
                }
            }
            mpp[temp]++;
        }
        int count;
        for(auto it = mpp.begin(); it != mpp.end(); it++){
            count = max(count, it->second);
        }
        return count;
    }
};
int main(){
    
    return 0;
}