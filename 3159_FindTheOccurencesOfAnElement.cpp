#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector <int> occur;
        for(int i = 0; i < nums.size();  i++){
            if(nums[i] == x) occur.push_back(i); 
        }
        vector<int> ans(queries.size(), -1);
        for(int i = 0; i < queries.size(); i++){
            if(occur.size()>= queries[i]) ans[i] = occur[queries[i] - 1];
        }
        return ans;
    }
};
int main(){
    
    return 0;
}