#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> closestPrimes(int left, int right) {
            vector <int> f(right + 1, 1);
            vector <int> pr;
            f[0] = 0, f[1] = 0;
            for(int i = 2; i < right + 1; i++){
                if(f[i] == 1){
                    pr.push_back(i);
                    int c = 2;
                    while(i * c < right + 1){
                        f[i*c] = 0;
                        c++;
                    }
                }
            }
            vector <int> ans(2, -1);
            int i = 0;
            while(i < pr.size() && pr[i] < left) i++;
            if(i + 1 < pr.size()){
                
                ans[0] = pr[i];
                i++;
                ans[1] = pr[i+1];
                i++;
                while(i < pr.size()){
                    if((pr[i] - pr[i-1]) < (ans[1] - ans[0])){
                        ans[1] = pr[i];
                        ans[0] = pr[i-1];
                    }
                    i++;
                }
            }
            return ans;
        }
    };
int main(){
    
    return 0;
}