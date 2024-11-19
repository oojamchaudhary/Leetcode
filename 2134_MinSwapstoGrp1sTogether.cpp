#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int total = 0;
        for(auto n: nums) if(n == 1) total++;
        int left = 0, right = total - 1;
        int curr = 0;
        for(int i = 0; i <= right; i++){
            if(nums[i] == 1) curr++;
        }
        int maxCount = curr;
        left = (left + 1) % nums.size();
        right = (right + 1) % nums.size();
        while(left != 0){
            if(nums[left - 1] == 1) curr--;
            if(nums[right] == 1) curr++;
            maxCount = max(maxCount, curr);
            left = (left + 1) % nums.size();
            right = (right + 1) % nums.size();
        }
        return total - maxCount;
    }
};
int main(){
    
    return 0;
}