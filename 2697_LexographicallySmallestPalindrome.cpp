#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string makeSmallestPalindrome(string s) {
        if(s.length() == 1) return s;
        int l , r;
        if(s.length() % 2 == 0){
            r = s.length()/2;
            l = r - 1;
        }
        else{
            r = s.length()/2 + 1;
            l = s.length()/2 - 1;
        }
        while(l >= 0){
            if(s[l]>s[r]) s[l] = s[r];
            else if(s[r] > s[l]) s[r] = s[l];
            l--;
            r++;
        }
        return s;
    }
};
int main(){
    
    return 0;
}