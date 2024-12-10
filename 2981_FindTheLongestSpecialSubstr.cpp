#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumLength(string s) {
        unordered_map<char,map<int,int>> mpp;
        char curr = s[0];
        int count = 1;
        for(int i = 1; i < s.length(); i++){
            if(s[i] == curr){
                count++;
                continue;
            }
            if(count - 2 > 0) mpp[curr][count - 2] += 3;
            if(count - 1 > 0) mpp[curr][count - 1] += 2;
            mpp[curr][count] += 1;
            curr = s[i];
            count = 1;
        }
        if(count - 2 > 0) mpp[curr][count - 2] += 3;
        if(count - 1 > 0) mpp[curr][count - 1] += 2;
        mpp[curr][count] += 1;
        int ans = -1;
        for(auto it = mpp.begin(); it != mpp.end(); it++){
            auto inner = it->second.rbegin();
            while(inner != it->second.rend()){
                if(inner->second > 2){
                    ans = max(ans, inner->first);
                    break;
                }
                else if(inner == next(next(it->second.rbegin()))){
                    ans = max(ans, inner->first);
                    break;
                }
                inner++;
            }
        }
        return ans;
    }
};
int main(){
    
    return 0;
}