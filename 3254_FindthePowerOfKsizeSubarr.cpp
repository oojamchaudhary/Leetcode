#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int left = 0, right = k - 1;
        int counter = 0;
        for(int i = 1; i <= right; i++){
            if(nums[i] - nums[i-1] != 1)counter++;
        }
        vector <int> ans;
        if(counter == 0) ans.push_back(nums[right]);
        else ans.push_back(-1);
        left++;
        right++;
        while(right < nums.size()){
            if(nums[right] - nums[right- 1] != 1) counter++;
            if(nums[left] - nums[left - 1] != 1) counter--;
            if(counter == 0) ans.push_back(nums[right]);
            else ans.push_back(-1);
            left++;
            right++;
        }
        return ans;
    }
};
int main(){
    
    return 0;
}