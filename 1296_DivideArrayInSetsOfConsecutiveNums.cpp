#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size() % k != 0) return false;
        map <int, int> mpp;
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
        }
        auto it = mpp.begin();
        int count;
        while (it != mpp.end())
        {
            it->second--;
            it++;
            count = 1;
            while (count < k)
            {
                if(it->first == prev(it)->first + 1){
                    it->second--;
                    count++;
                    if(prev(it)->second == 0) mpp.erase(prev(it));
                    it++;
                }
                else return false;
            }
            if(prev(it)->second == 0) mpp.erase(prev(it));
            if(mpp.empty()) return true;
            it = mpp.begin();
        }
        return true;
    }
};
int main(){
    
    return 0;
}