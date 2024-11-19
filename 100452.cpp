#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    int minElement(vector<int>& nums) {
        int sum = sod(nums[0]);
        for(int i = 1; i < nums.size(); i++){
            sum = min(sum, sod(nums[i]));
        }
        return sum;
    }
    int sod(int num){
        int sod = 0;
        while(num>0){
            sod += num % 10;
            num/=10;
        }
        return sod;
    }
};
int main(){
    int sod = 0;
    int num = 19;
        while(num>0){
            sod += num % 10;
            num/=10;
        }
        cout<<sod;
    return 0;
}