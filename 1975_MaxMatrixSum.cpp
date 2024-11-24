#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int negCount = 0;
        int small = INT_MAX;
        for(auto row: matrix){
            for(int i = 0; i < row.size(); i++){
                sum += abs(row[i]);
                small = min(small, abs(row[i]));
                if(row[i]< 0){
                    negCount++;
                }  
            }
        }
        if(negCount % 2 == 0) return sum;
        return sum - 2*small;
    }
};
int main(){
    
    return 0;
}