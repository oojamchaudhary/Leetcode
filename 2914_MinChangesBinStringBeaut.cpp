#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minChanges(string s) {
        int i = 1;
        int count = 0;
        while (i < s.length())
        {
            if(s[i - 1] != s[i]) count++;
            i+=2;
        }
        return count;
    }
};
int main(){
    
    return 0;
}