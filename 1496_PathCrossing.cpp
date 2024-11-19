#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0, y = 0;
        map<int, set<int>> mpp;
        mpp[0].insert(0);
        for(auto c: path){
            switch (c)
            {
            case 'N':
                y += 1;
                break;
            case 'S':
                y -= 1;
                break;
            case 'E':
                x += 1;
                break;
            case 'W':
                x -= 1;
                break;           
            default:
                break;
            }
            if(mpp[x].find(y) != mpp[x].end()) return true;
            mpp[x].insert(y);
        }
        return false;
    }
};
int main(){
    
    return 0;
}