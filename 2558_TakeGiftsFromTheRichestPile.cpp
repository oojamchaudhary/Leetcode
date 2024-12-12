#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans = 0;
        sort(gifts.begin(), gifts.end());
        queue <int> rem;
        int i = gifts.size() - 2;
        while(k--){
            if(rem.empty()){
                long long curr = sqrt(gifts.back());
                rem.push(curr);
            }
            else if (i >= 0){
                if(gifts[i]> rem.front()){
                    long long curr = sqrt(gifts[i]);
                    rem.push(curr);
                    i--;
                }
                else{
                    long long curr = sqrt(rem.front());
                    rem.push(curr);
                    rem.pop();
                }
            }
            else{
                long long curr = sqrt(rem.front());
                rem.push(curr);
                rem.pop();
            }
            // cout<<k<<" "<<ans<<endl;
        }
        for(int j = 0; j <= i; j++){
            ans += gifts[j];
            // cout<<j<<" "<<ans<<endl;
        }
        while(!rem.empty()){
            ans += rem.front();
            rem.pop();
            // cout<<ans<<endl;
        }
        return ans;
    }
};
int main(){
    
    return 0;
}