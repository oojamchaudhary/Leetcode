#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    struct countchar
    {
        int count;
        char charac;

        bool operator<(const countchar &other) const
        {
            return count < other.count;
        }
    };

    string longestDiverseString(int a, int b, int c)
    {
        string ans = "";
        countchar ac, bc, cc;
        ac.count = a;
        ac.charac = 'a';
        bc.count = b;
        bc.charac = 'b';
        cc.count = c;
        cc.charac = 'c';
        priority_queue<countchar> pq;
        if(ac.count > 0) pq.push(ac);
        if(bc.count > 0) pq.push(bc);
        if(cc.count > 0) pq.push(cc);
        
        while (!pq.empty())
        {
            countchar temp = pq.top();
            pq.pop();
            if (ans.length() >= 2 && (ans[ans.size() - 1] == temp.charac && ans[ans.size() - 2] == temp.charac))
            {
                if(pq.empty())
                    break;
                countchar temp2 = pq.top();
                pq.pop();
                ans+= temp2.charac;
                temp2.count--;
                if(temp2.count>0) pq.push(temp2);
            }
            else{
                ans+= temp.charac;
                temp.count--; 
            }
            if(temp.count>0) pq.push(temp);
        }
        return ans;
    }
};
int main()
{

    return 0;
}