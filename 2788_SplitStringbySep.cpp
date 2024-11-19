#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector <string> result;
        int left, right;
        for(int i = 0; i < words.size(); i++){
            left = right = 0;
            while(left < words[i].length() && right < words[i].length()){
                if(left == right && words[i][right] != separator ) result.emplace_back("");
                if(words[i][right] != separator) result.back() += words[i][right];
                right++;
                if(right != words[i].length() && words[i][right] == separator) left = right;
            }       
        }
        return result;
    }
};
int main(){
    
    return 0;
}