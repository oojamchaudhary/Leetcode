#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int splitNum(int num) {
        string num1 = "", num2 = "";
        string strnum = to_string(num);
        sort(strnum.begin(), strnum.end());
        for(int i = 0; i < strnum.length();i++){
            if(i % 2 == 0) num1 += strnum[i];
            else num2 += strnum[i];
        }
        return stoi(num1) + stoi(num2);
    }
};
int main(){
    
    return 0;
}