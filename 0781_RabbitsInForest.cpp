#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> mpp;
        for(int i = 0; i < answers.size(); i++){
            mpp[answers[i] + 1]++;
        }
        int num = 0;
        for(auto it = mpp.begin(); it != mpp.end(); it++){
            while (it->second > it->first)
            {
                it->second -= it->first;
                num += it->first;
            }
            num+= it->first;
        }
        return num;
    }
};
int main(){
    
    return 0;
}