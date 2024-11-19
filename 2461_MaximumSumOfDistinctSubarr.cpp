#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long currsum = 0, maxsum = 0;
        int entry, exit;
        unordered_map <int, int> mpp;
        int count = 0;
        for(int i = 0; i < k; i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]] == 2) count++;
            currsum += nums[i];
        }
        if(count == 0) maxsum = max(currsum, maxsum);
        int left = 0, right = k - 1;
        left++, right++;
        while (right < nums.size())
        {
            entry = nums[right];
            exit = nums[left-1];
            currsum += entry;
            currsum -= exit;
            if(entry != exit){
                mpp[exit]--;
                mpp[entry]++;
                if(mpp[exit] == 1) count--;
                if(mpp[entry] == 2) count++;
            }
            if(count==0) maxsum = max(currsum, maxsum);
            right++;
            left++;
        }
        return maxsum;
    }
};
int main(){
    
    return 0;
}