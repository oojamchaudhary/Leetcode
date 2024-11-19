#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxnum = 0, left = 0, right = 0, count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]>maxnum){
                left = i;
                right = i;
                maxnum = nums[i];
                count = 1;
            }
            else if(nums[i]==maxnum && nums[i-1] == maxnum){
                right++;
            }
            else if(nums[i-1] == maxnum){
                count = max(count, right - left + 1);
                left = 0;
                right = 0;
            }
        }
        count = max(count, right - left + 1);
        return count;
    }
};
int main(){
    
    return 0;
}