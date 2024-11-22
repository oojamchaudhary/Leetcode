#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0;
        for(auto s: logs){
            if(s == "../"){
                if(count == 0);
                else count--;
            }
            else if(s != "./") count++;
        }
        return count;
    }
};
int main(){
    
    return 0;
}