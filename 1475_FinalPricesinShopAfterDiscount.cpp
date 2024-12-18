#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector <int> ans(prices.size());
        int curr = 0;
        for(int i = 0; i < prices.size(); i++){
            for(int j = i + 1; j < prices.size(); j++){
                if(prices[i] >= prices[j]){
                    curr = prices[j];
                    break;;
                }
            }
            ans[i] = prices[i] - curr;
            curr = 0;
        }
        return ans;
    }
};
int main(){
    
    return 0;
}