#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumPushes(string word) {
        vector <int> freq(26,0);
        for(auto c: word){
            freq[c - 'a']++;
        }
        sort(freq.begin(), freq.end());
        int count = 0;
        vector <vector<int>> map(8);
        int ind = 0;
        for(int i = 25; i >= 0 && freq[i] != 0; i--){
            map[ind].push_back(count);
            count += map[ind].size() * freq[i];
            ind = (ind + 1) % 8;
        }
        return count;
    }
};
int main(){
    
    return 0;
}