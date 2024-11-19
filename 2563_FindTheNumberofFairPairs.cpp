#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        long long count = 0;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            int st = lower_bound(nums.begin() + i + 1, nums.end(), lower - nums[i]) - nums.begin();
            int end = upper_bound(nums.begin() + i + 1, nums.end(), upper - nums[i]) - nums.begin() - 1;
            if (st <= end) {
                count += (end - st + 1);
            }
        }
        return count;
    }
};

int main(){
    
    return 0;
}