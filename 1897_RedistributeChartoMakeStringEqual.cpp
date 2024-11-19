#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char, int> characters;
        int length = words.size();
        for(int i = 0; i < length; i++){
            for(int j = 0; j < words[i].length(); j++){
                characters[words[i][j]]++;
            }
        }
        for(auto it = characters.begin(); it != characters.end(); it++){
            if(it->second % length != 0) return false;
        }
        return true;
    }
};
int main(){
    
    return 0;
}