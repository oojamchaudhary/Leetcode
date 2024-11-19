#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector <string>& strs) {
        string commonstr = strs.at(0);
        for(int i = 1; i < strs.size(); i++){
            commonstr = findCommon(commonstr, strs.at(i));
            if(commonstr == "")
                return "";
        }
        return commonstr;
    }
    string findCommon(string commonstr, string newstr){
        if(commonstr == "" || newstr == "")
            return "";
        for(int i = 0; i < commonstr.length()&& i < newstr.length(); i++){
            if(commonstr.at(i) != newstr.at(i)){
                commonstr = commonstr.substr(0, i);
                break;
            }
            else if((i + 1) == newstr.length()){
                commonstr = newstr;
                break;
            }
        }
        return commonstr;
    }
};
int main(){
    
    return 0;
}