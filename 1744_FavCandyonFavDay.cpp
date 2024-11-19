#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> canEat(vector<int>& candiesCount, vector<vector<int>>& queries) {
        vector <long long> candiesSum(candiesCount.size());
        candiesSum[0] = 0;
        for(int i = 1; i < candiesCount.size(); i++){
            candiesSum[i] = candiesCount[i - 1] + candiesSum[i - 1];
        }
        vector<bool> answer(queries.size(), false);
        for(int i = 0; i < queries.size(); i++){
            long long favType = queries[i][0];
            long long favDay = queries[i][1];
            long long dayCap = queries[i][2];
            if(candiesSum[favType] + candiesCount[favType] > favDay && candiesSum[favType] < (favDay + 1)*dayCap) answer[i] = true;
        }
        return answer;
    }
};
int main(){
    
    return 0;
}