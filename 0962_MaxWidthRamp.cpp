#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        stack <int> nxtInd;
        nxtInd.push(0);
        for(int i = 1; i < nums.size(); i++){
            if(nums[i]<nums[nxtInd.top()]) nxtInd.push(i);
        }
        int res = 0;
        for(int i = nums.size() - 1; i >=0; i--){
            int data;
            while(!nxtInd.empty() && nums[i] >= nums[nxtInd.top()]){
                data = nxtInd.top();
                nxtInd.pop();
            }
            res = max(res, i - data);
        }
        return res;
    }
};
int main(){
    
    return 0;
}