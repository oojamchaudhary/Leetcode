#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int s = points.size();
        if(s <= 2) return s;
        int count = 2;
        int curr;
        int x1, x2, x3, y1, y2, y3;
        for(int i = 0; i < s; i++){
            x1 = points[i][0];
            y1 = points[i][1];
            for(int j = i + 1; j < s; j++){
                x2 = points[j][0];
                y2 = points[j][1];
                curr = 2;
                for(int k = 0; k < s; k++){
                    if(k == i || k == j) continue;
                    x3 = points[k][0];
                    y3 = points[k][1];
                    if((y2 - y1) * (x3 - x2) == (x2 - x1) * (y3 - y2)) curr++;
                }
                count = max(count, curr);
            }
        }
        return count;
    }
};
int main(){
    
    return 0;
}