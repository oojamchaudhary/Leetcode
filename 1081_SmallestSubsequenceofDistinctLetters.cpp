#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> lastOccurrence(26, -1);
        vector<bool> inStack(26, false);
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            lastOccurrence[s[i] - 'a'] = i;
        }
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if (inStack[ch - 'a']) continue;

            while (!st.empty() && st.top() > ch && lastOccurrence[st.top() - 'a'] > i) {
                inStack[st.top() - 'a'] = false;
                st.pop();
            }
            st.push(ch);
            inStack[ch - 'a'] = true;
        }
        string result;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
int main(){
    
    return 0;
}