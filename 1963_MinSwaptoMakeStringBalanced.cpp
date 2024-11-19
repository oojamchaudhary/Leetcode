#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    int minSwaps(string s) {
        stack <char> st;
        int count = 0;
        for(auto c: s){
            if(!st.empty() && c == ']' && st.top() == '['){
                st.pop();
                continue;
            }
            if(c == '[') st.push(c);
            else{
                count++;
            }
        }
        return (count + 1) / 2;
    }
};
int main(){
    
    return 0;
}