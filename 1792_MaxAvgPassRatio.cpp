#include <bits/stdc++.h>
using namespace std;
struct Compare {
    bool operator()(const vector<int>& a, const vector<int>& b) {
        double x, y;
        x = (double(a[0]+1)/ (a[1]+1)) - (double(a[0])/a[1]);
        y = (double(b[0]+1)/ (b[1]+1)) - (double(b[0])/b[1]);
        return x<y;
    }
};
class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& c, int eS) {
        priority_queue<vector<int>, vector<vector<int>>, Compare> pq;
        for(int i = 0; i < c.size(); i++){
            if(c[i][0] != c[i][1]){
                pq.push({c[i][0], c[i][1], i});
            }
        }
        if(pq.empty()) return 1;
        while(eS--){
            vector<int> curr = pq.top();
            pq.pop();
            c[curr[2]][0]++;
            c[curr[2]][1]++;
            curr[1]++;
            curr[0]++;
            pq.push(curr);
        }
        double ans = 0;
        for(int i = 0; i < c.size(); i++){
            ans += (double)c[i][0]/c[i][1];
        }
        return (ans/c.size());
    }
};
int main(){
    
    return 0;
}