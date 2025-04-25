#include <bits/stdc++.h>
using namespace std;
    class Solution {
        public:
            int numOfSubarrays(vector<int>& arr) {
                const int MOD = 1e9 + 7;
                int odd = 0, even = 1;
                int sum = 0, res = 0;
        
                for (int num : arr) {
                    sum += num;
                    if (sum % 2 == 0) {
                        res = (res + odd) % MOD;
                        even++;
                    } else {
                        res = (res + even) % MOD;
                        odd++;
                    }
                }
                return res;
            }
        };
    
int main(){
    
    return 0;
}