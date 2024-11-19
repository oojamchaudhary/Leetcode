#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        bool isSwap, isPoss = true;
        for(int i = 0; i < nums.size(); i++){
            isSwap = false;
            for(int j = 0; j < nums.size() - i - 1; j++){
                if(nums[j] > nums[j + 1] && __builtin_popcount(nums[j]) != __builtin_popcount(nums[j + 1])){
                    isPoss = false;
                    break;
                }
                else if(nums[j] > nums[j + 1]){
                    swap(nums[j], nums[j+1]);
                    isSwap = true;
                }
            }
            if(!isSwap || !isPoss) break;
        }
        return isPoss;
    }
};
int main(){
    
    return 0;
}