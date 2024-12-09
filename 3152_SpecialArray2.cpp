#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector <int> prefix(nums.size(), 0);
        for(int i = 1; i < nums.size(); i++){
            if(nums[i]%2 == nums[i-1]%2) prefix[i] = prefix[i - 1] + 1;
            else prefix[i] = prefix[i-1];
        }
        vector <bool> ans(queries.size());
        for(int i = 0; i < queries.size(); i++){
            if(queries[i][1] - queries[i][0] == 0) ans[i] = true;
            else if(prefix[queries[i][0]] == prefix[queries[i][1]]) ans[i] = true;
            else ans[i] = false;
        }
        return ans;
    }
};
int main(){
    
    return 0;
}