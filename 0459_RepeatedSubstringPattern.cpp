#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for(int i = s.length()/2; i >= 1; i--){
            if(s.length() % i != 0) continue;
            string sub = s.substr(0, i);
            int j = i;
            bool success = true;
            while(j < s.length()){
                if(s.substr(j, i) == sub){
                    j+= i;
                    continue;
                }
                success = false;
                break;
            }
            if(success) return true;;
        }
        return false;
    }
};
int main(){
    
    return 0;
}