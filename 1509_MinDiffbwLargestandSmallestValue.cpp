#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mini = INT_MAX;
        int n = nums.size();
        if(n <= 4) return 0;
        mini = min(mini, nums[n-4] - nums[0]);
        mini = min(mini, nums[n-1] - nums[3]);
        mini = min(mini, nums[n-2] - nums[2]);
        mini = min(mini, nums[n-3] - nums[1]);
        return mini;
    }
};
int main(){
    
    return 0;
}