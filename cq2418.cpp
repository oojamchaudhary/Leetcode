#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        set <int> sus;
        unordered_set<int> sus2;
        sus.insert(k);
        int count = 1;
        while(count > 0){
            count = 0;
            for(auto it: invocations){
                if(sus.find(it[0]) != sus.end()){
                    if(sus.find(it[1]) == sus.end()){
                    sus.insert(it[1]);
                    count++;
                }
                }
                else if(sus.find(it[1]) != sus.end()) sus2.insert(it[0]);
            }
        }
        if(sus.size() == n) return {};
        bool isPossible = true;
        auto it = sus2.begin();
        while (it != sus2.end())
        {
            if(sus.find(*it) == sus.end()){
                isPossible = false;
                break;
            }
            it++;
        }
        vector <int> arr;
        //int count = 0;
        for(int i = 0; i < n; i++){
            if(!isPossible){
                arr.emplace_back(i);
                continue;
            }
            if(sus.find(i) == sus.end()){
                arr.emplace_back(i);
            }
        }
        return arr;
    }
};
int main(){
    
    return 0;
}