#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack <char> st;
        int val = max(x, y);
        char prev, curr;
        if(x>y){
            prev = 'a';
            curr = 'b';
        }
        else{
            prev ='b';
            curr = 'a';
        }
        int score = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] != curr) st.push(s[i]);
            else{
                if(!st.empty() && st.top() == prev){
                    score += val;
                    st.pop();
                }
                else st.push(s[i]);
            }
        }
        stack <char> sec;
        val = min(x,y);
        swap(prev,curr);
        while(!st.empty()){
            if(st.top() != curr){
                sec.push(st.top());
                st.pop();
            }
            else{
                if(!sec.empty() && sec.top() == prev){
                    sec.pop();
                    st.pop();
                    score += val;
                }
                else{
                    sec.push(st.top());
                    st.pop();
                }
            }
        }
        return score;
    }
};
int main(){
    
    return 0;
}