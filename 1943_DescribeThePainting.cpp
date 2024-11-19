//Unsolved
#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<long long>> splitPainting(vector<vector<int>>& segments) {
        map<long long , pair<long long, set<long>>> mpp;
        vector<vector<long long>> result;
        for(int i = 0; i < segments.size(); i++){
            for(int j = segments[i][0]; j < segments[i][1]; j++){
                if(mpp[j].second.empty()) mpp[j].first = 0;
                mpp[j].second.insert(segments[i][2]);
                mpp[j].first += segments[i][2];
            }
        }
        auto prev = mpp.begin();
        for(auto it = mpp.begin(); it != mpp.end(); it++){
            while(next(it) != mpp.end() && it->second.second == next(it)->second.second ){
                it++;
            }
            result.emplace_back(prev->first, next(it)->first, it->second.first);
        }
        return result;
    }
};
int main(){
    
    return 0;
}