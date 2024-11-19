#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    int maxGoodNumber(vector<int>& nums) {
        vector<string> bin;
        

        for (int num : nums) {
            bin.push_back(bitset<32>(num).to_string().substr(bitset<32>(num).to_string().find('1'))); // Remove leading zeros
        }
        
    
        sort(bin.begin(), bin.end(), [](string &s1, string &s2) {
            return s1 + s2 > s2 + s1;  
        });
        
        
        string resultBinary = "";
        for (string &s : bin) {
            resultBinary += s;
        }
        
        
        int result = stoi(resultBinary, 0, 2);
        return result;
    }
};
int main(){
    
    return 0;
}