#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumTimeToInitialState(string word, int k) {
        int i = k;
        int sb = 1;
        if(k == word.length()) return 1;
        while(sb < ceil(word.length()/k)){
            int st = 0;
            while(i < word.length() && word[i] == word[st]) i++, st++;
            if(i == word.length()) return sb;
            sb++;
            i = sb*k;
        }
        return sb;
    }
};
int main(){
    
    return 0;
}