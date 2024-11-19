#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, int> mpp;
        for(int i = 0; i < allowed.length(); i++){
            mpp[allowed.at(i)]++;
        }
        int count=0, j;
        bool flag = true;
        for(int i = 0; i < words.size(); i++){
            flag = true;
            for(j = 0; j < words[i].length(); j++){
                if(mpp[(words[i]).at(j)]>0){
                    
                }
                else{
                  flag = false;  
                }
            }
            if(flag == true){
                count++;
            }
        }
        return count;
    }
};
int main(){
    
    return 0;
}