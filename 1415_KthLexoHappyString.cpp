#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string getHappyString(int n, int k)
    {
        if (k > (3 * pow(2, n - 1)))
            return "";
        int count = 0;
        string ans = "";
        vector<char> pool = {'a', 'b', 'c'};
        int i = 0;
        while (k > 1)
        {
            count = pow(2, n - 1 - ans.length());
            if (count < k)
            {
                i = (i + 1) % 3;
                if (ans.length() > 0 && ans.back() == pool[i])
                    i = (i + 1) % 3;
                k -= count;
                if (k == 1)
                {
                    ans += pool[i];
                    if (i == 0 && ans.length() < n)
                        ans += 'b';     
                    while (ans.length() < n)
                    {
                        ans += 'a';
                        if (ans.length() < n)
                            ans += 'b';
                    }
                    return ans;
                }
            }
            else
            {
                ans += pool[i];
                if (i == 0)
                    i = 1;
                else
                    i = 0;
            }
        }
        if(ans.length() > 0 && ans.length() < n && ans.back() == 'a') ans += 'b';
        while(ans.length() < n){
            ans += 'a';
            if(ans.length() < n) ans += 'b';
        }
        return ans;
    }
};
int main()
{

    return 0;
}