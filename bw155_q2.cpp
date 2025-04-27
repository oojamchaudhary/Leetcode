#include <bits/stdc++.h>
using namespace std;
//#define MOD 1000000007
class Solution {
    public:
        vector<int> baseUnitConversions(vector<vector<int>>& conv) {
            int MOD = 1e9 + 7;
            int n = conv.size() + 1;
            vector<int> ans(n, -1);
            vector<vector<pair<int, int>>> gr(n);
            ans[0] = 1;
            
            for (auto& v : conv) {
                gr[v[0]].push_back({v[1], v[2]});
            }
    
            queue<int> q;
            q.push(0);
            unordered_set<int> vis;
            vis.insert(0);
    
            while (!q.empty()) {
                int i = q.front();
                q.pop();
                for (auto& p : gr[i]) {
                    if (vis.find(p.first) == vis.end()) {
                        ans[p.first] = (1LL * ans[i] * p.second) % MOD;
                        q.push(p.first);
                        vis.insert(p.first);
                    }
                }
            }
            return ans;
        }
    };
int main(){
    
    return 0;
}