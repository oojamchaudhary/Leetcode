#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long findScore(vector<int>& nums) {
        map <int, vector<int>> mpp;
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]].push_back(i);
        }
        auto it = mpp.begin();
        long long score = 0;
        while(it != mpp.end()){
            for(auto idx: it->second){
                if(nums[idx] != -1){
                    score += nums[idx];
                    nums[idx] = -1;
                    if(idx != 0){
                        nums[idx - 1] = -1;
                    }
                    if(idx != nums.size() - 1){
                        nums[idx + 1] = -1;
                    }
                }
            }
            it++;
        }
        return score;
    }
};
int main(){
    
    return 0;
}