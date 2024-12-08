#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector <vector<int>> relative(costs.size());
        for(int i = 0; i < costs.size(); i++){
            relative[i] = {i, costs[i][0] - costs[i][1]};
        }
        sort(relative.begin(), relative.end(), [](vector<int> a, vector <int> b){
            return a[1] < b[1];
        });
        int tot = 0;
        for(int i = 0; i < costs.size(); i++){
            if(i < costs.size()/2) tot += costs[relative[i][0]][0];
            else tot += costs[relative[i][0]][1];
        }
        return tot;
    }
};
int main(){
    
    return 0;
}