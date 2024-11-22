#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool comp(string &s1, string &s2){
        if(s1.length()>s2.length()) return comp(s2, s1);
        int i;
        for(i = 0; i < s1.length(); i++){
            if(s1[i] != s2[i]) return false;
        }
        if(s2[i] != '/') return false;
        return true;
    }
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
        vector <string> ans;
        ans.push_back(folder[0]);
        for(int i = 1; i < folder.size(); i++){
            if(!comp(ans.back(), folder[i])) ans.push_back(folder[i]);
        }
        return ans;
    }
};
int main(){
    
    return 0;
}