#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0, j = 0;
        while(i < haystack.length()){
            if(haystack[i] != needle[j]){
                i = i - j + 1;
                j = 0;
                continue;
            }
            if(haystack[i] == needle[j]){
                j++;
                if(j == needle.length()){
                    return i - j + 1;
                }
            }
            i++;
        }
        return -1;
    }
};
int main(){
    
    return 0;
}