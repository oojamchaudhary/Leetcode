#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
        int n = nums.size();
        long long ans = 0;
        int pre = 0;
        unordered_map<int, int> freq;
        freq[0] = 1;
    
        for (int i = 0; i < n; i++) {
            if (nums[i] % modulo == k) {
                pre = (pre + 1) % modulo;
            }
    
            int t = (pre - k + modulo) % modulo;
            if (freq.find(t) != freq.end()) {
                ans += freq[t];
            }
    
            freq[pre]++;
        }
    
        return ans;
    }
    };
int main(){
    
    return 0;
}