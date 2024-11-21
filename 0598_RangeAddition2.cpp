#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int minx = m, miny = n;
        for(int i = 0; i < ops.size(); i++){
            minx = min(ops[i][0], minx);
            miny = min(ops[i][1], miny);
        }
        return m*n;
    }
};
int main(){
    
    return 0;
}