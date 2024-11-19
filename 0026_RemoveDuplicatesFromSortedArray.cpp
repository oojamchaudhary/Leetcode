#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0 , count = 0;
        int prev = -101;
        for(index = 0; index < nums.size(); index++){
            if(prev != nums[index]){
                nums[count] = nums[index];
                prev = nums[count];
                count++;
            }
            else{
                               
            }
        }
        return count;
    }
};
int main(){
    
    return 0;
}