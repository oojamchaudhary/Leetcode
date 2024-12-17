#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string repeatLimitedString(string s, int rL) {
        vector<int> frq(26,0);
        for(int i = 0; i < s.length(); i++){
            frq[s[i] - 'a']++;
        }
        int l = 26;
        string ans = "";
        int i = 25;
        while (i >= 0)
        {
            if(frq[i] > 0 && l != i){
                int count = 0;
                while (count < rL && count < frq[i])
                {
                    ans += char('a' + i);
                    count++;
                    if(count == rL && frq[i] - count > 0){
                        frq[i] -= count;
                        int j;
                        for(j = i - 1; j >= 0; j--){
                            if(frq[j] > 0){
                                ans += char('a' + j);
                                frq[j] -= 1;
                                count = 0;
                                break;
                            }
                        }
                        if(j == -1) return ans;
                    }
                }
                frq[i] -= count;
                l = i;
                i = 25;
                continue;
            }
            i--;   
        }
        return ans;
    }
};
int main(){
    
    return 0;
}