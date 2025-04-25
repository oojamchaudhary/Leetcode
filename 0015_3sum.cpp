#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector <vector<int>> ans;
        void binsearch(vector <int> & nums, int k, int n, int i, int j){
            int r = nums.size() - 1, l = k;
            while(l <= r){
                int mid = l + (r - l)/2;
                if(nums[mid] == n){
                   ans.push_back({nums[i], nums[j], nums[mid]});
                   return;
                }
                else if(nums[mid]>n) r = mid - 1;
                else l = mid + 1;
            }
        }
        vector<vector<int>> threeSum(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            for(int i = 0; i < nums.size(); i++){
                if(i > 0 && nums[i] == nums[i - 1]) continue;
                for(int j = i + 1; j < nums.size(); j++){
                    if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                    int n = 0 - nums[i] - nums[j];
                    binsearch(nums, j + 1, n, i, j);
                }
            }
            return ans;
        }
    };
int main(){
    
    return 0;
}