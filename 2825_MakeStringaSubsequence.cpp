#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i = 0, j = 0;
        while(i < str1.length() && j < str2.length()){
            if(str2[j] == str1[i]|| str2[j] == ((((str1[i] - 'a') + 1) % 26)+'a')){
                j++;
            }
            i++;
        }
        if(j == str2.length()) return true;
        return false;
    }
};
int main(){
    
    return 0;
}