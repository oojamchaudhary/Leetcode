#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> ans(code.size(), 0);
        if(k==0) return ans;
        vector <int> prefix(code.size());
        int sum = 0;
        for(int i = 0; i < code.size();i++){
            sum+= code[i];
            prefix[i] = sum;
        }
        if(k>0){
            for(int i = 0; i < code.size(); i++){
                if(i + k < code.size()) ans[i] = prefix[k] - prefix[i];
                else{
                    ans[i] = prefix.back() - prefix[i] + prefix[(i+k)%code.size()];
                }
            }
            return ans;
        }
        for(int i = 0; i < code.size(); i++){
            if(i>abs(k)) ans[i] = prefix[i - 1] - prefix[i - abs(k) - 1];
            else if(i == k) ans[i] = prefix[i];
            else{
                ans[i] = prefix.back() - prefix[code.size() - abs(k) + i + 1];
                if(i != 0) ans[i] += prefix[i-1];
            }
        }
        return ans;
    }
};
int main(){
    
    return 0;
}