#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int maximumSum(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            unordered_map <int, int> mpp;
            int ans = -1;
            for(int i = nums.size() - 1; i >= 0; i--){
                int x = sod(nums[i]);
                if(mpp[x] > 0) {
                    ans = max(ans, mpp[x] + nums[i]);
                }
                else mpp[x] = nums[i];
            }
            return ans;
        }
        int sod(int n){
            int sum = 0;
            while(n != 0){
                sum += n % 10;
                n /= 10;
            }
            return sum;
        }
    };
int main(){
    
    return 0;
}