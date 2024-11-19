#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        bool istrue0 = false, istrue1 = false, istrue2 = false;

        for(int i = 0; i < triplets.size(); i++){
            if(triplets[i][0] <= target[0] && triplets[i][1] <= target[1] && triplets[i][2] <= target[2]) {
                if(triplets[i][0] == target[0]) istrue0 = true;
                if(triplets[i][1] == target[1]) istrue1 = true;
                if(triplets[i][2] == target[2]) istrue2 = true;
            }
        }
        return istrue0 && istrue1 && istrue2;
    }
};
int main(){
    
    return 0;
}