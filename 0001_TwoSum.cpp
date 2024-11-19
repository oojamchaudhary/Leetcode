#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> result(2,0);
        int i , j;
        for(i = 0; i < nums.size(); i++){
            for(j = i + 1; j < nums.size(); j++){
                if((nums.at(i) + nums.at(j)) == target){
                    result.at(0) = i;
                    result.at(1) = j;
                    break;
                }
            }
            if(result.at(1) != 0){
                break;
            }
        }
        return result;
    }
};
int main(){
    
    return 0;
}