#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> findAllRecipes(vector<string> &recipes, vector<vector<string>> &ingredients, vector<string> &supplies)
    {
        unordered_map <string, int> sup;
        for(int i = 0; i < supplies.size(); i++) sup[supplies[i]]++;
        vector <string> ans;
        unordered_map <string, vector <string>> req;
        unordered_map <string, int> rem;
        for(int i = 0; i < recipes.size(); i++){
            bool pos = true;
            for(int j= 0; j < ingredients[i].size(); j++){
                if(sup[ingredients[i][j]] < 0){
                    rem[recipes[i]]++;
                    req[ingredients[i][j]].push_back(recipes[i]);
                    pos = false;
                }
            }
            if(pos){
                ans.push_back(recipes[i]);
                sup[recipes[i]]++;
            }
        }
        bool per = true;
        while(rem.size() && per){
            per = false;
            for(auto st: req){
                if(sup[st.first]){
                    for(int i = 0; i < st.second.size(); i++){
                        rem[st.second[i]]--;
                        if(rem[st.second[i]] == 0){
                            per = true;
                            ans.push_back(st.second[i]);
                            sup[st.second[i]]++;
                            rem.erase(st.second[i]);
                        }
                        
                    }
                    req.erase(st.first);
                }
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}