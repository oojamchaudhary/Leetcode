#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        vector<vector<char>> ans(box[0].size(), vector<char>(box.size()));
        for(int i = 0; i < box.size(); i++){
            for(int j = 0; j < box[0].size(); j++){
                ans[j][box.size() - i - 1] = box[i][j];
            }
        }
        for(int i = 0; i < ans[0].size(); i++) {
            int bottom = ans.size() - 1;
            for(int j = ans.size() - 1; j >= 0; j--) {
                if(ans[j][i] == '#') {
                    swap(ans[j][i], ans[bottom][i]);
                    bottom--;
                }
                else if(ans[j][i] == '*') {
                    bottom = j - 1;
                }
            }
        }  
        return ans;
    }
};
int main(){
    
    return 0;
}