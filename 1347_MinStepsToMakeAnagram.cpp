#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> sm(26,0), tm(26,0);
        for(int i = 0; i < s.length(); i++){
            sm[s[i] - 'a']++;
            tm[t[i] - 'a']++;
        }
        int count = 0;
        for(int i = 0; i < 26; i++){
            count += max(0, sm[i]-tm[i]);
        }
        return count;
    }
};
int main(){
    
    return 0;
}