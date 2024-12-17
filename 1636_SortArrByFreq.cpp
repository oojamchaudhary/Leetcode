#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> frq;
        for(int i: nums){
            frq[i]++;
        }
        vector<pair<int,int>> f;
        for(auto it= frq.begin(); it != frq.end(); it++){
            f.push_back({it->first, it->second});
        }
        sort(f.begin(), f.end(), [](pair<int,int> a, pair<int,int> b){
            if(a.second == b.second) return a.first > b.first;
            return a.second < b.second;
        });
        vector <int> ans;
        for(int i = 0; i < f.size(); i++){
            while(f[i].second--){
                ans.push_back(f[i].first);
            }
        }
        return ans;
    }
};
int main(){
    
    return 0;
}