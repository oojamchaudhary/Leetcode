#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    int minLength(string s) {
        int left = 0;
        int right = 1;
        while (left <s.length() && right < s.length())
        {
            if((s[left] == 'A' && s[right] == 'B') || (s[left] == 'C' && s[right] == 'D')){
                if(left == 0 && right + 1 < s.length()) s = s.substr(right + 1, s.length() - right);
                else if(right + 1 == s.length()) s = s.substr(0, left);
                else if(right + 1 < s.length()) s = s.substr(0, left) + s.substr(right + 1, s.length() - right);
                if(left != 0) left--;
                right = left + 1;
            }
            else{
                left++;
                right = left + 1;
            }
        }
        return s.length();
    }
};
int main(){
    
    return 0;
}