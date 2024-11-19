#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map <string, int> mpp;
        string word;
        int left = 0, right = 0;
        while (right< s1.length())
        {
            if(s1[right] == ' '){
                word = s1.substr(left , right - left);
                mpp[word]++;
                //word.clear();
                right++;
                left = right;
            }
            else right++;
        }
        word = s1.substr(left, right - left);
        mpp[word]++;
        //word.clear();
        left = 0, right = 0;
        while (right< s2.length())
        {
            if(s2[right] == ' '){
                word = s2.substr(left , right - left);
                mpp[word]++;
                //word.clear();
                right++;
                left = right;
            }
            else right++;
        }
        word = s2.substr(left, right - left);
        mpp[word]++;
        vector <string> result;
        for(auto it = mpp.begin(); it != mpp.end(); it++){
            if(it->second == 1){
                result.emplace_back(it->first);
            }
        }
        return result;
        
    }
};
int main(){
    
    return 0;
}