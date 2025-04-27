#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        string findCommonResponse(vector<vector<string>>& res) {
            map<string, int> mpp;
            unordered_set<string> st;
            for(int i = 0; i < res.size(); i++){
                st.clear();
                for(int j = 0; j < res[i].size(); j++){
                    if(st.find(res[i][j]) != st.end()){
                        mpp[res[i][j]]++;
                        st.insert(res[i][j]);
                    }
                }
            }
            string ans;
            int c = 0;
            for(auto it: mpp){
                if(it.second > c){
                    ans = it.first;
                    c = it.second;
                }
            }
            return ans;
        }
    };
int main(){
    
    return 0;
}