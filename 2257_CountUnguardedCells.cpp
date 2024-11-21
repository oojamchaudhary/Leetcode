#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& g, vector<vector<int>>& w) {
        vector <vector <int>> a(m, vector<int>(n,0));
        for(int i = 0; i < w.size(); i++){
            a[w[i][0]][w[i][1]] = -1;
        }
        for(int i = 0; i < g.size(); i++){
            a[g[i][0]][g[i][1]] = 3;
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(a[i][j] == 3){
                    for(int k = j + 1; k < n; k++){
                        if(a[i][k] == -1 || a[i][k] == 3) break;
                        a[i][k] = 1;
                    }
                    for(int k = j - 1; k >= 0; k--){
                        if(a[i][k] == -1 || a[i][k] == 3) break;
                        a[i][k] = 1;
                    }
                    for(int k = i + 1; k < m; k++){
                        if(a[k][j] == -1 || a[i][k] == 3) break;
                        a[k][j] = 1;
                    }
                    for(int k = i- 1; k >= 0; k--){
                        if(a[k][j] == -1 || a[i][k] == 3) break;
                        a[k][j] = 1;
                    }
                }
            }
        }
        int count = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(a[i][j] == 0)count++;
            }
        }
        return count;
    }
};
int main(){
    
    return 0;
}