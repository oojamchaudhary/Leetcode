//Unsolved
#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        //vector <int> prefix(nums.size());
        unordered_map<int, int> mpp;
        //prefix[0] = nums[0] % p;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum+= nums[i] % p;
            sum = sum % p;
            mpp[sum] = i;
        }
        if(sum == 0) return 0;
        int count = nums.size();
        for(auto it: mpp){
            if(mpp.find((sum - it.first + p) % p)!= mpp.end()){
                int gap = it.second - mpp[(sum - it.first + p) % p];
                if(gap> 0) count = min(count, gap);
            }
        }
        if(count == nums.size()) return -1;
        return count;
    }
};
int main(){
    
    return 0;
}