#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map <int, int> mpp;
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]-i]++;
        }
        long long count = 0;
        for(auto i: mpp){
            
            count += (i.second * (i.second - 1)/2);
            
        }
        return ((nums.size()*(nums.size() - 1)/2) - count);
    }
};
int main(){
    
    return 0;
}