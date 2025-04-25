#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDifference(string s) {
        vector <int> v(26,0);
        for(int i = 0; i < s.length(); i++){
            v[s[i] - 'a']++;
        }
        int maxi = 0, mini = s.length();
        for(int i = 0; i < 26; i++){
            if(v[i] % 2 == 0){
                mini = min(mini, v[i]);
            }
            else{
                maxi = max(maxi, v[i]);
            }
        }
        return maxi - mini;
    }
};
int main(){
    
    return 0;
}