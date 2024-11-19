#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool parseBoolExpr(string expression)
    {
        stack<char> st;
        char op;
        vector<char> exp;
        for (auto c : expression)
        {
            if (c != ',' && c != ')')
                st.push(c);
            if (c == ')')
            {
                if (st.top() == 't' || st.top() == 'f')
                {
                    int count = 0;
                    while (st.top() != '(' && !st.empty())
                    {
                        count++;
                        exp.emplace_back(st.top());
                        st.pop();
                    }
                    st.pop();
                    exp.resize(count);
                    if(st.top() == '&' || st.top() == '|' || st.top() == '!'){
                        op = st.top();
                        st.pop();
                        st.push(evaluation(exp, op));
                        exp.clear();
                    }
                }
                else{
                    op = st.top();
                    st.pop();
                    if(st.top() == '(') st.pop();
                    st.push(evaluation(exp, op));
                    exp.clear();
                }
            }
        }
        return ev(st.top());
    }
    inline bool ev(char c)
    {
        return c == 't';
    }
    char evaluation(vector<char> &exp, char op)
    {
        bool res = ev(exp[0]);
        switch (op)
        {
        case '&':
            for (int i = 1; i < exp.size(); i++)
            {
                res = res && ev(exp[i]);
            }
            break;
        case '|':
            for (int i = 1; i < exp.size(); i++)
            {
                res = res || ev(exp[i]);
            }
            break;
        case '!':
            res = !res;
            break;
        default:
            break;
        }
        if(res) return 't';
        return 'f';
    }
};
int main()
{

    return 0;
}