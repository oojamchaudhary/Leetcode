#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        vector <int> gcdVal;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i; j < nums.size(); j++){
                gcdVal.emplace_back(__gcd(nums[i], nums[j]));
            }
        }
        sort(gcdVal.begin(), gcdVal.end());
        vector<int> ans;
        for(auto it: queries){
            ans.push_back(gcdVal[it]);
        }
        return ans;
    }
};
int main(){
    
    return 0;
}