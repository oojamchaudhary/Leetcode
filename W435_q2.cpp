#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxDistance(string s, int k)
    {
        vector<int> v(4, 0);
        int x = 0, y = 0;
        int maxi = 0, ansi = 0, ans = 0, yi, xi, ki = k, ind = 0;
        while (ind < s.length())
        {
            if (s[ind] == 'S')
            {
                y--;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[ind] == 'N')
            {
                y++;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[ind] == 'E')
            {
                x++;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[ind] == 'W')
            {
                x--;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            ind++;
        }
        if(k == 0){
            return ans;
        }
        ind = s.length();
        x = 0, y = 0;
        for (int i = 0; i < s.length() && ki > 0; i++)
        {
            if (s[i] == 'S')
            {
                ki--;
                y++;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[i] == 'N')
            {
                y++;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[i] == 'E')
            {
                x++;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[i] == 'W')
            {
                ki--;
                x++;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (ki == 0)
            {
                ind = i;
            }
            //cout<<ansi<<" "<<ans<<" "<<ki<<endl;
        }
        ind++;
        while (ind < s.length())
        {
            if (s[ind] == 'S')
            {
                y--;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[ind] == 'N')
            {
                y++;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[ind] == 'E')
            {
                x++;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[ind] == 'W')
            {
                x--;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            ind++;
        }
        ind = s.length();
        x = 0, y = 0;
        ki = k;
        for (int i = 0; i < s.length() && ki > 0; i++)
        {
            if (s[i] == 'N')
            {
                ki--;
                y--;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[i] == 'S')
            {
                y--;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[i] == 'E')
            {
                x++;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[i] == 'W')
            {
                ki--;
                x++;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (ki == 0)
            {
                ind = i;
            }
        }
        ind++;
        while (ind < s.length())
        {
            if (s[ind] == 'S')
            {
                y--;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[ind] == 'N')
            {
                y++;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[ind] == 'E')
            {
                x++;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[ind] == 'W')
            {
                x--;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            ind++;
        }
        ind = s.length();
        x = 0, y = 0;
        ki = k;
        for (int i = 0; i < s.length() && ki > 0; i++)
        {
            if (s[i] == 'S')
            {
                ki--;
                y++;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[i] == 'N')
            {
                y++;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[i] == 'E')
            {
                x--;
                ki--;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[i] == 'W')
            {
                // ki--;
                x--;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (ki == 0)
            {
                ind = i;
            }
        }
        ind++;
        while (ind < s.length())
        {
            if (s[ind] == 'S')
            {
                y--;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[ind] == 'N')
            {
                y++;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[ind] == 'E')
            {
                x++;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[ind] == 'W')
            {
                x--;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            ind++;
        }
        ind = s.length();
        x = 0, y = 0;
        ki = k;
        for (int i = 0; i < s.length() && ki > 0; i++)
        {
            if (s[i] == 'N')
            {
                ki--;
                y--;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[i] == 'S')
            {
                y--;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[i] == 'E')
            {
                x--;
                ki--;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[i] == 'W')
            {
                // ki--;
                x--;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (ki == 0)
            {
                ind = i;
            }
        }
        ind++;
        while (ind < s.length())
        {
            if (s[ind] == 'S')
            {
                y--;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[ind] == 'N')
            {
                y++;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[ind] == 'E')
            {
                x++;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            if (s[ind] == 'W')
            {
                x--;
                ansi = abs(x) + abs(y);
                ans = max(ans, ansi);
            }
            ind++;
        }
        return ans;
    }
};
int main()
{

    return 0;
}