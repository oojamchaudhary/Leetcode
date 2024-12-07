#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int maxi = nums[0];
        for(int i = 1; i < nums.size(); i++){
            maxi = max(maxi, nums[i]);
        }
        int l = 1, r = maxi;
        int ans = maxi;
        while (l <= r)
        {
            int mid = l + (r-l)/2;
            int ops = 0;
            for(int i = 0; i < nums.size() && ops <= maxOperations; i++){
                if(nums[i]> mid){
                    ops += ceil(double((nums[i] - mid)/mid));
                }
            }
            if(ops <= maxOperations){
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
    }
};
int main(){
    
    return 0;
}