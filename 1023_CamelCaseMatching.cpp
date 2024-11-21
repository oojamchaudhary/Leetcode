#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> camelMatch(vector<string>& q, string p) {
        vector <bool> ans(q.size());
        for(int i = 0; i < q.size(); i++){
            int k = 0, m = 0;
            while (k< q[i].length() && m < p.length())
            {
                if(q[i][k]== p[m]){
                    k++;
                    m++;
                    continue;
                }
                if(q[i][k] <= 'Z' && q[i][k] >= 'A'){
                    ans[i] = false;
                    break;
                }
                k++;
            }
            if(m == p.length()){
                ans[i] = true;
                while(k < q[i].length()){
                    if(q[i][k] <= 'Z' && q[i][k] >= 'A'){
                        ans[i] = false;
                        break;
                    }
                    k++;
                }
            }
            else ans[i] = false;
        }
        return ans;
    }
};
int main(){
    
    return 0;
}