#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int numberOfSubstrings(string s) {
            unordered_map <char, vector<int>> mpp;
            for(int i = 0; i < s.length(); i++){
                mpp[s[i]].push_back(i);
            }
            int ans = 0;
            int i = 0, j = 0, k = 0;
            for(int in = 0; in < s.length(); in++){
                while(i < mpp['a'].size() && mpp['a'][i] < in) i++;
                while(j < mpp['b'].size() && mpp['b'][j] < in) j++;
                while(k < mpp['c'].size() && mpp['c'][k] < in) k++;
                if(i == mpp['a'].size() || j < mpp['b'].size() || k < mpp['c'].size()) return ans;
                int idx = max(mpp['a'][i], mpp['b'][j]);
                idx = max(idx, mpp['c'][k]);
                ans += (s.size() - idx);
            }
            return ans;
        }
    };
int main(){
    
    return 0;
}