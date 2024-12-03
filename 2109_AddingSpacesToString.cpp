#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        int i = 0, j = 0;
        while (j < spaces.size())
        {
            if(spaces[j] == i){
                ans+= ' ';
                j++;
            }
            ans+=s[i];
            i++;
        }
        while (i < s.length())
        {
            ans+= s[i];
            i++;
        }
        return ans;
    }
};
int main(){
    
    return 0;
}