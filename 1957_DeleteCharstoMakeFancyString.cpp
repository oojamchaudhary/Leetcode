#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string makeFancyString(string s) {
        string ans = "";
        int i = 0;
        while (i < s.length())
        {
            if(i <= 1) ans += s[i];
            else if (s[i] != ans.back() || s[i] != ans[ans.size() - 2]){
                ans += s[i];
            }
            i++;
        }
        return ans;
    }
};
int main(){
    
    return 0;
}