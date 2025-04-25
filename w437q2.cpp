#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        long long maxWeight(vector<int>& pizzas) {
            sort(pizzas.begin(), pizzas.end());
            int n = pizzas.size();
            int x;
            if((n/4)% 2 == 0 ){
                x = n/8;
            } else{
                x = n/8 + 1;
            }
            int i = 1;
            long long ans = 0;
            while(i <= x){
                ans += pizzas[n - i];
                i++;
            }
            x = n/8;
            int k = i - 1;
            i = 1;
            int j = n - k - x - 1;
            while(i <= x){
                ans += pizzas[j];
                i++;
                j--;
            }
            return ans;
        }
    };
int main(){
    
    return 0;
}